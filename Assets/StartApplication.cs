using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class StartApplication : MonoBehaviour {

    public GameObject Camera;
    public Material FocusedMaterial, NonFocusedMaterial;

    #region Private Variables
    private Vector3 _headingEyes;
    private Vector3 _headingHead;
    private MeshRenderer StartApplicationSphere;

    //This is the 'pointer' and it looks better if it is the same color as the StartApplicationSphere it is attached to.
    private GameObject child;
	#endregion

	private void Awake(){
        child = transform.GetChild(0).gameObject;
	}

	void OnEnable(){
        //Debug.Log("Start Application Script");
        MLEyes.Start();

        //Reset the rotation of the StartApplicationSphere on every enable so that it doesn't start at >350 when script is called a second time.
        //this might be unecessary atm, since it is also set in applicationLogic
        transform.rotation = Quaternion.identity;
        StartApplicationSphere = gameObject.GetComponent<MeshRenderer>();

    }

    private void OnDisable(){
        MLEyes.Stop();
    }
	
	void Update () {
            
        //rotate the StartApplicationSphere automaticlly. Should be removed.
        //transform.Rotate(new Vector3(0, 0, 1), 2);

        //if (MLEyes.IsStarted){

            //RaycastHit rayHit;
            //_headingEyes = MLEyes.FixationPoint - Camera.transform.position;
            //_headingHead = Camera.transform.forward;
                  
            //If object is hit by both Eye and Head direction, it is considered focused.
            //if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f)){
            //if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f) && Physics.Raycast(Camera.transform.position, _headingHead, out rayHit, 10.0f) ){
            if(true){
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

        //}
	}
}
