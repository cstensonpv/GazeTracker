using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine.XR.MagicLeap;

public class NewFirebaseScript : MonoBehaviour {

    public UserDataClass user;

    //Camera is needed since it's the Magic Leap
    public GameObject Camera;
    //CustomPivotPointCube is needed to get the target's position.
    public Transform CustomPivotPointCube;
    //'EntireScene' object is needed so that current session can be retrieved.
    public GameObject EntireScene;

    private int CurrentSessionLocal;

    public GameObject TargetPatternSphere;
    private Vector3 newOrgio;

    private string url;

    //Runs first (and only) time 'FireBaseLogic' is enabled. A new user is created.
    void Awake(){
        //Debug.Log("New user created");
        user = new UserDataClass();

        //Create a new resource on a server, put will later add data to the same resource.
        url = "https://gazetrackingdata.firebaseio.com/" + user.timeStamp + ".json";
        string json = JsonUtility.ToJson(user);
        StartCoroutine(PostRequest(url, json));
    }

    void OnEnable(){
        //Debug.Log("Firebase script enabled");
        MLEyes.Start();

        //Get the current session and set CurrentSessionLocal. This is done here in enable to avoid doing it over and over again in update. Less expensive.
        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        CurrentSessionLocal = EndSessionScript.selectedSession;

        //Remove newOrgio from the UFO's position. This is so that it moves accordingly to origo. This is so that all three 'systems' eye/head and now target, all uses origo as a base.
        newOrgio = TargetPatternSphere.transform.position;

        //The FixationConfidence could be set somewhere else. Right now it is being set and overwritten three times.
        user.FixationConfidence = MLEyes.FixationConfidence;
    }

    private void OnDisable(){
        MLEyes.Stop();
    }


    void Update(){
        if (MLEyes.IsStarted){

            //Depending on which session, add coordinate to right sessionList.
            if (CurrentSessionLocal == 0){
                user.positionsEyeSession0.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession0.Add(Camera.transform.forward.normalized);
                user.targetSession0.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

            else if (CurrentSessionLocal == 1){
                user.positionsEyeSession1.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession1.Add(Camera.transform.forward.normalized);
                user.targetSession1.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

            else{
                user.positionsEyeSession2.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession2.Add(Camera.transform.forward.normalized);
                user.targetSession2.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

        }

    }

    public void SendToDatabase(){
        string UpdatedJson = JsonUtility.ToJson(user);
        StartCoroutine(PutRequest(url, UpdatedJson));
    }


    IEnumerator PutRequest(string url, string bodyJsonString){
        //Debug.Log("In Put/patch, add list to resource");
        var request = new UnityWebRequest(url, "PATCH");
        //var request = new UnityWebRequest(url, "PUT"); //Also works, but 'patch' updates, while put replaces the old put
        byte[] bodyRaw = new System.Text.UTF8Encoding().GetBytes(bodyJsonString);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.Send();

        //Debug.Log("Response: " + request.downloadHandler.text);
    }

    IEnumerator PostRequest(string url, string bodyJsonString){
        //Create a new resource on a server, put will later add data to the same resource.
        //Debug.Log("In Post, create resource");
        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = new System.Text.UTF8Encoding().GetBytes(bodyJsonString);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.Send();

        //Keep this line, it's great for debugging!
        //Debug.Log("Response: " + request.downloadHandler.text);
    }

}