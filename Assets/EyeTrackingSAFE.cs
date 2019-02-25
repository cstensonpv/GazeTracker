
/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

//IO is needed for StreamWriter (logging the data)
using System.IO;

//system is used for Array.Clear
using System;

public class EyeTracking : MonoBehaviour
{
    #region Public Variables
    public GameObject Camera;
    public Material FocusedMaterial, NonFocusedMaterial, lineColor;

    //lineRenderer stuff
    private int coordNumber = 0;
    //public int lengthOfLineRenderer = 300;
    public Vector3[] positions = new Vector3[300];
    #endregion

    #region Private Variables
    private Vector3 _heading;
    private MeshRenderer _meshRenderer;
    //lineRenderer should perhaps go here to not require to be in update();
    #endregion

    #region Unity Methods
    void Start()
    {
        MLEyes.Start();
        transform.position = Camera.transform.position + Camera.transform.forward * 2.0f;
        // Get the meshRenderer component
        _meshRenderer = gameObject.GetComponent<MeshRenderer>();

        //Add the line renderer to the scene.
        LineRenderer lineRenderer = gameObject.AddComponent<LineRenderer>();

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
        lineRenderer.material = lineColor;
        //lineRenderer.positionCount = lengthOfLineRenderer;
        lineRenderer.positionCount = positions.Length;
        lineRenderer.startWidth = 0.05f;
        lineRenderer.endWidth = 0.05f;

        //Not necessary, but turns of the shadows on the lines, to save some processing.    
        GetComponent<LineRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        lineRenderer.receiveShadows = false;
        lineRenderer.allowOcclusionWhenDynamic = false;

        //Vector3[] positions = new Vector3[300];
        //Debug.Log("start1: " + positions);

    }
    private void OnDisable()
    {
        MLEyes.Stop();
    }
    void Update()
    {
        if (MLEyes.IsStarted)
        {

            //Log the data to txt file.
            //string logPath = "Assets/logFiles/loggedData.txt";
            //StreamWriter writer = new StreamWriter(logPath, true);
            ////writer.WriteLine("point: " + MLEyes.FixationPoint);
            //writer.WriteLine(MLEyes.FixationPoint);
            //writer.Close();

            //End of logging data.

            //Draw a line at fixation points
            //OBS. having the GetCompontent here in update is expensive. It should not be here.
            LineRenderer lineRenderer = GetComponent<LineRenderer>();

            if (coordNumber >= 300)
            {
                Debug.Log("300 points, reset EYE Array");
                Array.Clear(positions, 0, positions.Length);
                coordNumber = 0;
            }

            //lineRenderer.SetPosition(coordNumber, new Vector3(1.0f, 1.0f, 1.0f));

            positions[coordNumber] = MLEyes.FixationPoint.normalized;
            //Debug.Log("positions[coordNumber]: " + positions[coordNumber]);
            //lineRenderer.positionCount = positions.Length;
            lineRenderer.SetPositions(positions);
            coordNumber++;

            //https://docs.unity3d.com/ScriptReference/LineRenderer.html calle used positionCount and SetPositions
            //END of drawing a line at fixation points

            //Debug.Log(MLEyes.FixationPoint);


            //THIS CAN BE REMOVED IF NEEDED
            //this shit works well
            //Vector3[] positions = new Vector3[3];
            //positions[0] = new Vector3(-2.0f, -2.0f, 0.0f);
            //positions[1] = new Vector3(0.0f, 2.0f, 0.0f);
            //positions[2] = new Vector3(2.0f, -2.0f, 0.0f);
            //lineRenderer.positionCount = positions.Length;
            //lineRenderer.SetPositions(positions);
            //END OF THIS CAN BE REMOVED IF NEEDED

            
            //RaycastHit rayHit;
            //_heading = MLEyes.FixationPoint - Camera.transform.position;
            //// Use the proper material
            //if (Physics.Raycast(Camera.transform.position, _heading, out rayHit, 10.0f))
            //{
            //    _meshRenderer.material = FocusedMaterial;
            //}
            //else
            //{
            //    _meshRenderer.material = NonFocusedMaterial;
            //}
        }
    }
    #endregion
}
*/