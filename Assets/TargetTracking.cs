using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

//IO is needed for StreamWriter (logging the data)
using System.IO;

//system is used for Array.Clear
using System;

public class TargetTracking : MonoBehaviour
{

    #region Public Variables
    public GameObject Camera;
    public Material NonFocusedMaterial;

    public GameObject TargetPatternSphere;
    public Transform CustomPivotPointCube;
    #endregion

    #region Private Variables
    private Vector3[] positionsTarget = new Vector3[1000];
    private LineRenderer lineRendererTarget;
    private int coordNumber = 0;

    private Vector3 newOrgio;
    #endregion

    #region Unity Methods
    void Start(){
        MLEyes.Start();

        //set the empty gameobject where the line is attached to the camera's position.
        transform.position = Camera.transform.position;

        //"Camera.transform.forward" Returns the direction of current headpose.
        lineRendererTarget = gameObject.AddComponent<LineRenderer>();
        lineRendererTarget.material = NonFocusedMaterial;
        lineRendererTarget.positionCount = positionsTarget.Length;
        lineRendererTarget.startWidth = 0.05f;
        lineRendererTarget.endWidth = 0.05f;
        GetComponent<LineRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        lineRendererTarget.receiveShadows = false;
        lineRendererTarget.allowOcclusionWhenDynamic = false;
    }

	private void OnEnable(){
        newOrgio = TargetPatternSphere.transform.position;
	}

	private void OnDisable(){
        MLEyes.Stop();
    }

    void Update(){
        if (MLEyes.IsStarted){

            if (coordNumber >= 1000){
                Debug.Log("1000 points, reset TARGET Array");
                Array.Clear(positionsTarget, 0, positionsTarget.Length);
                coordNumber = 0;
            }

            positionsTarget[coordNumber] = (CustomPivotPointCube.position - newOrgio).normalized;

            lineRendererTarget.SetPositions(positionsTarget);
            coordNumber++;
        }

    }
    #endregion
}
