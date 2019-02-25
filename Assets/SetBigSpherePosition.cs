using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class SetBigSpherePosition : MonoBehaviour {

    #region Public Variables
    public GameObject Camera;
    #endregion

	void Start () {
        MLEyes.Start();
        //Set the bigSphere to where the camera (headset) is.
        transform.position = Camera.transform.position;
	}

    private void OnDisable(){
        MLEyes.Stop();
    }
	
	void Update () {
		
	}
}
