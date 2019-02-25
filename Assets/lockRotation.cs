using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Locks the rotation of the cube (pivotPoint) and thus also the UFO.

public class lockRotation : MonoBehaviour {

    #region private Variables
    public Quaternion initialRotation;
    #endregion

	void Start () {
        //Get initial rotation.
        initialRotation = transform.rotation;
	}
	
	void Update () {
        transform.rotation = initialRotation;
	}
}