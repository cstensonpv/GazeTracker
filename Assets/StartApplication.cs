using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class StartApplication : MonoBehaviour {

    public GameObject Camera;
    public Material FocusedMaterial, NonFocusedMaterial;
    public GameObject EntireScene;

    #region Private Variables
    private Vector3 _headingEyes;
    private Vector3 _headingHead;
    private MeshRenderer StartApplicationSphere;
    #endregion

    //OnEnable runs when object.SetActive is set to true. See also OnDisable().
    void OnEnable(){
        //Debug.Log("Start Application Script");
        MLEyes.Start();

        //Reset the rotation of the StartApplicationSphere on every enable so that it doesn't start at >350 when script is called a second time.
        transform.rotation = Quaternion.identity;
        StartApplicationSphere = gameObject.GetComponent<MeshRenderer>();

        //Set all other game objects (EntireScene) to false.
        EntireScene.SetActive(false);
    }

    private void OnDisable(){
        MLEyes.Stop();
    }
	
	// Update is called once per frame
	void Update () {

        //transform.Rotate(new Vector3(0, 0, 1), 2);

        //if (MLEyes.IsStarted){

            //RaycastHit rayHit;
            //_headingEyes = MLEyes.FixationPoint - Camera.transform.position;
            //_headingHead = Camera.transform.forward;
            //Debug.Log("_headingHead: " + _headingHead);
                  
            //If object is hit by both Eye and Head direction, it is considered focused.
            //if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f) && Physics.Raycast(Camera.transform.position, _headingHead, out rayHit, 10.0f) ){
            if(true){
                //Object is hit by raycast!
                //Debug.Log("object focus" + StartApplicationSphere.transform.rotation.eulerAngles.z);
                StartApplicationSphere.material = FocusedMaterial;
                transform.Rotate(new Vector3(0, 0, 1), 2);

                //Object has made a "full" turn. User wants to start the session.
                if (StartApplicationSphere.transform.rotation.eulerAngles.z > 350){
                //Set this object to false. And set the entire scene active.
                    //Debug.Log("Full turn has been made");
                    //The rotation must be reset, since otherwise the object starts at >350 when it gets back
                    EntireScene.SetActive(true);
                    
                         
                    // set this to false in another script
                    //StartApplicationSphere.SetActive(false);
                }
            }

            else {
                Debug.Log("object not focused");
                StartApplicationSphere.material = NonFocusedMaterial;
                //transform.Rotate(new Vector3(-1, 0, 0), Time.deltaTime);
            }

        //}
	}
}
