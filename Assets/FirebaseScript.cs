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

    //Runs first (and only) time 'FireBaseLogic' is enabled. A new user is created.
    void Awake(){
        //Debug.Log("New user created");
        user = new UserDataClass();
    }

    void OnEnable(){
        //Debug.Log("Firebase script enabled");
        MLEyes.Start();

        //Get the current session and set CurrentSessionLocal. This is done here in enable to avoid doing it over and over again in update. Less expensive.
        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        CurrentSessionLocal = EndSessionScript.selectedSession;

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
                user.targetSession0.Add(CustomPivotPointCube.position);
            }

            else if (CurrentSessionLocal == 1){
                user.positionsEyeSession1.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession1.Add(Camera.transform.forward.normalized);
                user.targetSession1.Add(CustomPivotPointCube.position);
            }

            else {
                user.positionsEyeSession2.Add(MLEyes.FixationPoint.normalized);
                user.positionsHeadSession2.Add(Camera.transform.forward.normalized);
                user.targetSession2.Add(CustomPivotPointCube.position);
            }

        }

        //Remove this chunk of meat. It is only here to provide stuff to the database when Magic Leap is not connected.
        //user.positionsEyeSession0.Add(Vector3.zero);
        //user.positionsHeadSession0.Add(Vector3.right);
        //user.targetSession0.Add(Vector3.up);
        //user.positionsEyeSession1.Add(Vector3.zero);
        //user.positionsHeadSession1.Add(Vector3.right);
        //user.targetSession1.Add(Vector3.up);
        //user.positionsEyeSession2.Add(Vector3.zero);
        //user.positionsHeadSession2.Add(Vector3.right);
        //user.targetSession2.Add(Vector3.up);
    }


    public void SendToDatabase(){
        //The FixationConfidence could be set somewhere else.
        user.FixationConfidence = MLEyes.FixationConfidence;

        //RestClient.Post("https://gazetrackingdata.firebaseio.com/.json", user);
        //Debug.Log("I hope we pushed.");
    }
}
