using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class SetBigSpherePosition : MonoBehaviour {

    //The diameter is 2.4m, so that the UFO is always 1.2m away.

    #region Public Variables
    public GameObject Camera;
    #endregion

    private void OnDisable(){
        MLEyes.Stop();
    }

    void OnEnable(){

        //Reset the rotation after each enable so that the UFO's position goes back to normal.
        MLEyes.Start();
        //Set the bigSphere to where the camera (headset) is.
        transform.position = Camera.transform.position;
        transform.rotation = Quaternion.identity;

    }
	
}
