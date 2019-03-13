using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

//IO is needed for StreamWriter (logging the data)
using System.IO;

//system is used for Array.Clear
using System;

public class EyeTracking : MonoBehaviour {

    #region Public Variables
    public GameObject Camera;
    public Material lineColorEye;
    //public int lengthOfLineRenderer = 300;
    #endregion

    #region Private Variables
    private Vector3[] positionsEye = new Vector3[1000];
    private LineRenderer lineRendererEyes;
    private int coordNumber = 0;
    #endregion

    #region Unity Methods
    void Start(){
        
        MLEyes.Start();

        //set the empty gameobject where the line is attached to the camera's position.
        transform.position = Camera.transform.position;

        //Add the line renderer to the scene.
        lineRendererEyes = gameObject.AddComponent<LineRenderer>();

        //The line is added to origo, but should be where the camera is.
        //Debug.Log("Camera.transform.position: " + Camera.transform.position);
        //Debug.Log("Camera.transform.forward: " + Camera.transform.forward);
        //Debug.Log("transform.position: " + transform.position);
        //lineRenderer.transform.localPosition = Vector3.zero;
        ////lineRenderer.SetPosition = Camera.transform.position;
        //Debug.Log("lineRenderer.transform.localPosition: " + lineRenderer.transform.localPosition);

        //If enabled, the points are considered as world space coordinates, instead of being subject to the transform of the GameObject to which this component is attached.
        //lineRenderer.useWorldSpace = false;

        //Works fine and dandy
        lineRendererEyes.material = lineColorEye;
        //lineRenderer.positionCount = lengthOfLineRenderer;
        lineRendererEyes.positionCount = positionsEye.Length;
        lineRendererEyes.startWidth = 0.05f;
        lineRendererEyes.endWidth = 0.05f;

        //Not necessary, but turns of the shadows on the lines, to save some processing.    
        GetComponent<LineRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        lineRendererEyes.receiveShadows = false;
        lineRendererEyes.allowOcclusionWhenDynamic = false;


    }

    private void OnDisable(){
        MLEyes.Stop();
    }

    void Update(){
        
        if (MLEyes.IsStarted){

            //Log the data to txt file. Creates it if it does not exist.
            //string logPath = "Assets/logFiles/loggedDataEyes.txt";
            //StreamWriter writer = new StreamWriter(logPath, true);
            ////writer.WriteLine("point: " + MLEyes.FixationPoint);
            /// .ToString("F7"). Here, the F means you're talking about Fixed-point, and the 4 means you want 4 decimals.
            //writer.WriteLine(MLEyes.FixationPoint.normalized.ToString("F7"));
            //writer.Close();

            //Draw a line between fixation points

            //If more than 300 points have been drawed, reset the array and start over.
            if (coordNumber >= 1000){
                Debug.Log("1000 points, reset EYE Array");
                Array.Clear(positionsEye, 0, positionsEye.Length);
                coordNumber = 0;
            }

            //lineRenderer.SetPosition(coordNumber, new Vector3(1.0f, 1.0f, 1.0f));

            positionsEye[coordNumber] = MLEyes.FixationPoint.normalized;
            //Debug.Log("positions[coordNumber]: " + positionsEye[coordNumber].ToString("F7"));
            //lineRenderer.positionCount = positions.Length;
            lineRendererEyes.SetPositions(positionsEye);
            coordNumber++;

        }
    }
    #endregion
}