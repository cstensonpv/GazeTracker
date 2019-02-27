using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class SetBigSpherePosition : MonoBehaviour {

    #region Public Variables
    public GameObject Camera;
    #endregion

    #region private Variables
    public Quaternion initialRotation;
    #endregion

	void Start () {
        MLEyes.Start();
        //Set the bigSphere to where the camera (headset) is.
        transform.position = Camera.transform.position;
        initialRotation = transform.rotation;
	}

    private void OnDisable(){
        MLEyes.Stop();
    }

    void OnEnable(){
        //Reset the rotation after each enable so that the UFO's position goes back to normal.
        //Probably "lags" because this should be set BEFORE the object is enabled.
        transform.rotation = initialRotation;
    }
	
}
