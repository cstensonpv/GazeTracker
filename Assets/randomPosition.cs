using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class randomPosition : MonoBehaviour {

    #region Public Variables
    //public GameObject Camera;
    public GameObject EntireScene;
    public int pathIndexNumber = 0;

    //rotationSpeed is in degrees per second.
    public float rotationSpeed;
    #endregion

    #region Private Variables
    private Vector3[] path0 = new Vector3[10];
    private Vector3[] path1 = new Vector3[10];
    private Vector3[] path2 = new Vector3[10];
    #endregion

    void Awake(){
        //Last coordinate is never reached.
        //Starting in the middle. path0[0] goes 30° to the right.

        // 15° = 0.1444
        // 30° = 0.2887
        // 45° = 0.4331
        // 60° = 0.5774
        // 75° = 0.7218
        // 90° = 0.8661
        // 120°= 1.1548

        path0[0] = new Vector3(0.2887f, 0.0f, 0.5f);        //H: +30°   //V: +0°
        path0[1] = new Vector3(-0.1444f, -0.1444f, 0.5f);   //H: -45°   //V: -15°
        path0[2] = new Vector3(-0.5774f, 0.0f, 0.5f);       //H: -45°   //V: +15°
        path0[3] = new Vector3(0.5774f, 0.7218f, 0.5f);     //H: +120°  //V: +75°
        path0[4] = new Vector3(0.7218f, 0.5774f, 0.5f);     //H: +15°   //V: -15°
        path0[5] = new Vector3(0.5774f, -0.5774f, 0.5f);    //H: -15°   //V: -120°
        path0[6] = new Vector3(-0.2887f, -0.5774f, 0.5f);   //H: -90°   //V: +0°
        path0[7] = new Vector3(-0.1444f, 0.1444f, 0.5f);    //H: +15°   //V: +75°
        path0[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: +15°   //V: -15°
        path0[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.


        path1[0] = new Vector3(0.2887f, 0.0f, 0.5f);        //H: +30°   //V: +0°
        path1[1] = new Vector3(-0.1444f, -0.1444f, 0.5f);   //H: -45°   //V: -15°
        path1[2] = new Vector3(-0.5774f, 0.0f, 0.5f);       //H: -45°   //V: +15°
        path1[3] = new Vector3(0.5774f, 0.7218f, 0.5f);     //H: +120°  //V: +75°
        path1[4] = new Vector3(0.7218f, 0.5774f, 0.5f);     //H: +15°   //V: -15°
        path1[5] = new Vector3(0.5774f, -0.5774f, 0.5f);    //H: -15°   //V: -120°
        path1[6] = new Vector3(-0.2887f, -0.5774f, 0.5f);   //H: -90°   //V: +0°
        path1[7] = new Vector3(-0.1444f, 0.1444f, 0.5f);    //H: +15°   //V: +75°
        path1[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: +15°   //V: -15°
        path1[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.


        path2[0] = new Vector3(0.2887f, 0.0f, 0.5f);        //H: +30°   //V: +0°
        path2[1] = new Vector3(-0.1444f, -0.1444f, 0.5f);   //H: -45°   //V: -15°
        path2[2] = new Vector3(-0.5774f, 0.0f, 0.5f);       //H: -45°   //V: +15°
        path2[3] = new Vector3(0.5774f, 0.7218f, 0.5f);     //H: +120°  //V: +75°
        path2[4] = new Vector3(0.7218f, 0.5774f, 0.5f);     //H: +15°   //V: -15°
        path2[5] = new Vector3(0.5774f, -0.5774f, 0.5f);    //H: -15°   //V: -120°
        path2[6] = new Vector3(-0.2887f, -0.5774f, 0.5f);   //H: -90°   //V: +0°
        path2[7] = new Vector3(-0.1444f, 0.1444f, 0.5f);    //H: +15°   //V: +75°
        path2[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: +15°   //V: -15°
        path2[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.

    }

    void OnEnable(){
        //Every time a new session is started the pathCoordNumber must be reset so that the pathList starts from index 0.
        pathIndexNumber = 0;

        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        rotationSpeed = 11 + (EndSessionScript.selectedSession) * 10;
        Debug.Log("rotationSpeed: " + rotationSpeed);
    }
	
    public void setNewCoord(){
        //This is the position of the cube (RandomPositionDecider).

        //get selectedSession from the other script
        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        Debug.Log("Setting new pathcoord in session: " + EndSessionScript.selectedSession + " pathIndexNumber: " + pathIndexNumber);

        //Depending on which session, choose right pathList.
        if(EndSessionScript.selectedSession == 0){
            transform.position = path0[pathIndexNumber];
        }

        else if (EndSessionScript.selectedSession == 1){
            transform.position = path1[pathIndexNumber];
        }

        else {
            //(EndSessionScript.selectedSession == 2)
            transform.position = path2[pathIndexNumber];
        }

        //Debug.Log("setNewCoord" + transform.position);
        pathIndexNumber++;
    }

}