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
    #endregion

	// Use this for initialization
	void Start () {
        MLEyes.Start();
        StartApplicationSphere = gameObject.GetComponent<MeshRenderer>();
	}

    private void OnDisable(){
        MLEyes.Stop();
    }
	
	// Update is called once per frame
	void Update () {

        //transform.Rotate(new Vector3(0, 0, 1), 2);

        if (MLEyes.IsStarted){

            RaycastHit rayHit;
            _headingEyes = MLEyes.FixationPoint - Camera.transform.position;
            _headingHead = Camera.transform.forward;
            //Debug.Log("_headingHead: " + _headingHead);
                  
            //If object is hit by both Eye and Head direction, it is considered focused.
            if (Physics.Raycast(Camera.transform.position, _headingEyes, out rayHit, 10.0f) && Physics.Raycast(Camera.transform.position, _headingHead, out rayHit, 10.0f) ){
                //Object is hit by raycast!
                Debug.Log("OBJECT FOCUSED");
                StartApplicationSphere.material = FocusedMaterial;
                transform.Rotate(new Vector3(0, 0, 1), 2);
            }

            else{
                Debug.Log("object not focused");
                StartApplicationSphere.material = NonFocusedMaterial;
                //transform.Rotate(new Vector3(-1, 0, 0), Time.deltaTime);
            }

        }
	}
}
