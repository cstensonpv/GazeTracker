using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

//IO is needed for StreamWriter (logging the data)
using System.IO;

//system is used for Array.Clear
using System;

public class HeadTracking : MonoBehaviour {

    #region Public Variables
    public GameObject Camera;
    public Material lineColorHead;
    #endregion

    #region Private Variables
    private Vector3[] positionsHead = new Vector3[300];
    private LineRenderer lineRendererHead;
    private int coordNumber = 0;
    #endregion

    #region Unity Methods
	void Start () {
        MLEyes.Start();

        //set the empty gameobject where the line is attached to the camera's position.
        transform.position = Camera.transform.position;

        //"Camera.transform.forward" Returns the direction of current headpose.
        lineRendererHead = gameObject.AddComponent<LineRenderer>();
        lineRendererHead.material = lineColorHead;
        lineRendererHead.positionCount = positionsHead.Length;
        lineRendererHead.startWidth = 0.05f;
        lineRendererHead.endWidth = 0.05f;
        GetComponent<LineRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        lineRendererHead.receiveShadows = false;
        lineRendererHead.allowOcclusionWhenDynamic = false;
		
        //lineRendererHead.useWorldSpace = false;
	}

    private void OnDisable(){
        MLEyes.Stop();
    }
	
	void Update () {
        if (MLEyes.IsStarted){
            
            ////Log the data to txt file. Creates it if it does not exist.
            //string logPath = "Assets/logFiles/loggedDataHead.txt";
            //StreamWriter writer = new StreamWriter(logPath, true);
            ////writer.WriteLine("point: " + MLEyes.FixationPoint);
            //writer.WriteLine(Camera.transform.forward.normalized);
            //writer.Close();

            //HEAD TRACEING
            //Debug.Log("Camera.transform.forward: " + Camera.transform.forward);

            if (coordNumber >= 300){
                Debug.Log("300 points, reset HEAD Array");
                Array.Clear(positionsHead, 0, positionsHead.Length);
                coordNumber = 0;
            }


            positionsHead[coordNumber] = Camera.transform.forward.normalized;
            //positionsHead[coordNumber] = MLEyes.FixationPoint.normalized;

            lineRendererHead.SetPositions(positionsHead);
            coordNumber++;
        }
		
	}
    #endregion
}
