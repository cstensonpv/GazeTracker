using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class StartApplication : MonoBehaviour {

    public GameObject Camera;
    public Material FocusedMaterial, NonFocusedMaterial, lineColorEyes, lineColorHead;

    #region Private Variables
    private Vector3 _headingEyes;
    private Vector3 _headingHead;
    private MeshRenderer StartApplicationSphere;

    //This is the 'pointer' and it looks better if it is the same color as the StartApplicationSphere it is attached to.
    private GameObject child;

    //Small sphere's to show the user where their eye/head is duuring Start phase.
    private GameObject Eyes;
    private GameObject Head;
	#endregion

	private void Awake(){
        child = transform.GetChild(0).gameObject;
	}

    //NEW this can't be set in enable because camera is still 0,0,0 by then.
	private void Start(){
        //Set the start applicationSphere according to the Camera's position.
        transform.position = Camera.transform.position + (new Vector3(0,0,1) * 1.2f);
	}

	void OnEnable(){
        //Debug.Log("Start Application Script");
        MLEyes.Start();

        //Reset the rotation of the StartApplicationSphere on every enable so that it doesn't start at >350 when script is called a second time.
        //this might be unecessary atm, since it is also set in applicationLogic
        transform.rotation = Quaternion.identity;
        StartApplicationSphere = gameObject.GetComponent<MeshRenderer>();

        Eyes = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        Eyes.GetComponent<Renderer>().material = lineColorEyes;
        Eyes.transform.localScale = new Vector3(0.02F, 0.02f, 0.02f);
        Eyes.name = "Eyes";
        Head = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        Head.GetComponent<Renderer>().material = lineColorHead;
        Head.transform.localScale = new Vector3(0.02F, 0.02f, 0.02f);
        Head.name = "Head";


    }

    private void OnDisable(){
        MLEyes.Stop();

        //Destroy the eye/head spheres, a new is created next session
        Destroy(Eyes);
        Destroy(Head);
    }
	
	void Update () {
        //rotate the StartApplicationSphere automaticlly. Should be removed.
        //transform.Rotate(new Vector3(0, 0, 1), 2);

        if (MLEyes.IsStarted){

            //* 0.95f because we want the gaze to be slightly closer than the appSphere.
            //Gaze.transform.position = (new Vector3(0f, 1f, 10f) + new Vector3(0f, 1f, 8f)).normalized * 1.2f;
            //Gaze.transform.position = (MLEyes.FixationPoint + Camera.transform.forward).normalized * 0.95f;
            //Gaze.transform.position = (((MLEyes.FixationPoint - Camera.transform.position) + Camera.transform.forward) - Camera.transform.position).normalized * 0.95f;
            //Gaze.transform.position = ((MLEyes.FixationPoint - Camera.transform.position) + Camera.transform.forward).normalized * 1.2f;
            //Gaze.transform.position = ((MLEyes.FixationPoint + Camera.transform.forward) - Camera.transform.position).normalized;
            //Debug.Log("MLEyes.FixationPoint        : " + MLEyes.FixationPoint.ToString("F3"));
            //Debug.Log("Camera.transform.forward: " + Camera.transform.forward.ToString("F3"));
            //Debug.Log("Gaze.transform.position:     " + Gaze.transform.position.ToString("F3"));

            RaycastHit rayHit;
            _headingEyes = MLEyes.FixationPoint - Camera.transform.position;
            _headingHead = Camera.transform.forward;

            //Debug.Log("_headingEyes: " + _headingEyes.ToString("F3"));
            //Debug.Log("_headingHead: " + _headingHead.ToString("F3"));

            //Gaze.transform.position = ((_headingEyes + Camera.transform.position) + (_headingHead + Camera.transform.position)).normalized * 1.2f;
            Eyes.transform.position = _headingEyes + Camera.transform.position + (new Vector3(0, 0, 1) * 0.2f);
            Head.transform.position = _headingHead + Camera.transform.position + (new Vector3(0, 0, 1) * 0.1f);

            //Debug.Log(" Gaze.transform.position: " + Gaze.transform.position.ToString("F3"));
                  
            //If object is hit by both Eye and Head direction, it is considered focused.
            //if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f)){
            if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f) && Physics.Raycast(Camera.transform.position, _headingHead, out rayHit, 10.0f) ){
            //if(false){
                //Object is hit by both raycasts!
                StartApplicationSphere.material = FocusedMaterial;
                transform.Rotate(new Vector3(0, 0, 1), 2);

                //Eventually StartApplicationSphere has made a "full" (> 350°) turn. User wants to start the session. This is recognized by ApplicationLogicScript.

                child.GetComponent<Renderer>().material = FocusedMaterial;
            }

            else {
                //Debug.Log("object not focused");
                StartApplicationSphere.material = NonFocusedMaterial;

                child.GetComponent<Renderer>().material = NonFocusedMaterial;
            }

        }
	}
}
