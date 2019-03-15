using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

//This is the RestClient
using Proyecto26;

public class FirebaseScript : MonoBehaviour {

    public UserDataClass user;

    //Camera is needed since it's the Magic Leap
    public GameObject Camera;
    //CustomPivotPointCube is needed to get the target's position.
    public Transform CustomPivotPointCube;
    //'EntireScene' object is needed so that current session can be retrieved.
    public GameObject EntireScene;

    private int CurrentSessionLocal;

    //new
    public GameObject TargetPatternSphere;
    private Vector3 newOrgio;

    //Runs first (and only) time 'FireBaseLogic' is enabled. A new user is created.
    void Awake(){
        //Debug.Log("New user created");
        user = new UserDataClass();

        //Create a new resource on a server, put will later add data to the same resource.
        //RestClient.Post("https://gazetrackingdata.firebaseio.com/"+user.timeStamp+".json", user);
    }

    void OnEnable(){
        //Debug.Log("Firebase script enabled");
        MLEyes.Start();

        //Get the current session and set CurrentSessionLocal. This is done here in enable to avoid doing it over and over again in update. Less expensive.
        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        CurrentSessionLocal = EndSessionScript.selectedSession;

        //New. We remove newOrgio from the UFO's position. This is so that it moves accordingly to origo. This is so that all three 'systems' eye/head and now target, all uses origo as a base.
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
            if(CurrentSessionLocal == 0){
                user.positionsEyeSession0.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession0.Add(Camera.transform.forward.normalized);
                user.targetSession0.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

            else if (CurrentSessionLocal == 1){
                user.positionsEyeSession1.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession1.Add(Camera.transform.forward.normalized);
                user.targetSession1.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

            else {
                user.positionsEyeSession2.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession2.Add(Camera.transform.forward.normalized);
                user.targetSession2.Add((CustomPivotPointCube.position - newOrgio).normalized);
            }

        }

        //Getting 17 decimals is quite an overkill. Round it.

        //Remove this chunk of meat. It is only here to provide stuff to the database when Magic Leap is not connected.
        //if (CurrentSessionLocal == 0){
        //    user.positionsEyeSession0.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.positionsHeadSession0.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.targetSession0.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //}

        //else if (CurrentSessionLocal == 1){
        //    user.positionsEyeSession1.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.positionsHeadSession1.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.targetSession1.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //}

        //else{
        //    user.positionsEyeSession2.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.positionsHeadSession2.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //    user.targetSession2.Add(new Vector3(0.476387908769543f, 0.867523246576849f, 0.997865742315467f));
        //}

    }

    //After every session, the data is uploaded to firebase. "RestClient.Put" is used, which adds to the entry created by POST in Awake(). Unfortunately as it looks now the post now replaces the last post and therefore serves no real purpose. Should use PATCH but can't in restClient atm.
    public void SendToDatabase(){

        //RestClient.Put("https://gazetrackingdata.firebaseio.com/" + user.timeStamp + "/.json", user);
        //Debug.Log("I hope we pushed.");


        //RestClient.Post("https://gazetrackingdata.firebaseio.com/" + user.timeStamp + "S:" + CurrentSessionLocal + "/.json", user);

        //Old solution
        //RestClient.Post("https://gazetrackingdata.firebaseio.com/.json", user);
    }
}
