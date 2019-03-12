using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class randomPosition : MonoBehaviour {

    #region Public Variables
    public GameObject EntireScene;
    public int pathIndexNumber = 0;

    //rotationSpeed is in degrees per second.
    public float rotationSpeed;

    public GameObject TargetPatternSphere;
    #endregion

    #region Private Variables
    private Vector3[] path0 = new Vector3[10];
    private Vector3[] path1 = new Vector3[10];
    private Vector3[] path2 = new Vector3[10];

    private int selectedSession;
    #endregion

    //void AwakeREMOVETHISFUNC(){
    //    //Last coordinate is never reached.
    //    //Starting in the middle. path0[0] goes 30° to the right.

    //    // 15° = 0.1444
    //    // 30° = 0.2887
    //    // 45° = 0.4331
    //    // 60° = 0.5774
    //    // 75° = 0.7218
    //    // 90° = 0.8661
    //    // 120°= 1.1548

    //    path0[0] = new Vector3(0.2887f, 0.0f, 0.5f);        //H: +30°   //V: +0°
    //    path0[1] = new Vector3(-0.1444f, -0.1444f, 0.5f);   //H: -45°   //V: -15°
    //    path0[2] = new Vector3(-0.5774f, 0.0f, 0.5f);       //H: -45°   //V: +15°
    //    path0[3] = new Vector3(0.5774f, 0.7218f, 0.5f);     //H: +120°  //V: +75°
    //    path0[4] = new Vector3(0.7218f, 0.5774f, 0.5f);     //H: +15°   //V: -15°
    //    path0[5] = new Vector3(0.5774f, -0.5774f, 0.5f);    //H: -15°   //V: -120°
    //    path0[6] = new Vector3(-0.2887f, -0.5774f, 0.5f);   //H: -90°   //V: +0°
    //    path0[7] = new Vector3(-0.1444f, 0.1444f, 0.5f);    //H: +15°   //V: +75°
    //    path0[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: +15°   //V: -15°
    //    path0[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.

    //    //path0 turned 180°
    //    path1[0] = new Vector3(-0.2887f, 0.0f, 0.5f);       //H: -30°   //V: +0°
    //    path1[1] = new Vector3(0.1444f, 0.1444f, 0.5f);     //H: +45°   //V: +15°
    //    path1[2] = new Vector3(0.5774f, 0.0f, 0.5f);        //H: +45°   //V: -15°
    //    path1[3] = new Vector3(-0.5774f, -0.7218f, 0.5f);   //H: -120°  //V: -75°
    //    path1[4] = new Vector3(-0.7218f, -0.5774f, 0.5f);   //H: -15°   //V: +15°
    //    path1[5] = new Vector3(-0.5774f, 0.5774f, 0.5f);    //H: +15°   //V: +120°
    //    path1[6] = new Vector3(0.2887f, 0.5774f, 0.5f);     //H: +90°   //V: +0°
    //    path1[7] = new Vector3(0.1444f, -0.1444f, 0.5f);    //H: -15°   //V: -75°
    //    path1[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: -15°   //V: +15°
    //    path1[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.

    //    //path0 backwards
    //    path2[0] = new Vector3(-0.1444f, 0.1444f, 0.5f);    //H: -15°   //V: +15°
    //    path2[1] = new Vector3(-0.2887f, -0.5774f, 0.5f);   //H: -15°   //V: -75°
    //    path2[2] = new Vector3(0.5774f, -0.5774f, 0.5f);    //H: +90°   //V: 0°
    //    path2[3] = new Vector3(0.7218f, 0.5774f, 0.5f);     //H: +15°   //V: +120°
    //    path2[4] = new Vector3(0.5774f, 0.7218f, 0.5f);     //H: -15°   //V: +15°
    //    path2[5] = new Vector3(-0.5774f, -0.0f, 0.5f);      //H: -120°  //V: -75°
    //    path2[6] = new Vector3(-0.1444f, -0.1444f, 0.5f);   //H: +45°   //V: -15°
    //    path2[7] = new Vector3(0.2887f, 0.0f, 0.5f);        //H: +45°   //V: +15°
    //    path2[8] = new Vector3(0.0f, 0.0f, 0.5f);           //H: -30°   //V: 0°
    //    path2[9] = new Vector3(0.0f, 0.0f, 0.5f);           //Last coordinate is not reached.

    //}

    void OnEnable(){
        //Every time a new session is started the pathCoordNumber must be reset so that the pathList starts from index 0.
        pathIndexNumber = 0;

        //EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        //rotationSpeed = 10 + (EndSessionScript.selectedSession) * 7.5f;
        selectedSession = EntireScene.GetComponent<EndSession>().selectedSession;
        rotationSpeed = 10 + selectedSession * 5f;

        Debug.Log("rotationSpeed: " + rotationSpeed);


        //Since the BigSphere(TargetPatternSphere) is being set to the camera position in the start of every session, so must the session path.
        //The RandomPositionDecider's coordinate (path) must be set with the TargetPatternSphere's new position in mind.

        //Transform BigSphereOrigo = TargetPatternSphere.GetComponent<SetBigSpherePosition>().BigSphereOrigo.transform;
        //newOrgio = BigSphereOrgigo/TargetPatternSphereOrigo.
        Vector3 newOrgio = TargetPatternSphere.transform.position;
        //Debug.Log("newOrgio: " + newOrgio);
        //Debug.Log("TargetPatternSphere.transform: " + TargetPatternSphere.transform.position);

        //Set RandomPositionDecider to its new origo so that the first coordinate is right as well.
        transform.position = newOrgio;

        if (selectedSession == 0) {
            
            path0[0] = new Vector3(newOrgio.x + 0.2887f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);        //H: +30°   //V: +0°
            path0[1] = new Vector3(newOrgio.x + -0.1444f, newOrgio.y + -0.1444f, newOrgio.z + 0.5f);   //H: -45°   //V: -15°
            path0[2] = new Vector3(newOrgio.x + -0.5774f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);       //H: -45°   //V: +15°
            path0[3] = new Vector3(newOrgio.x + 0.5774f, newOrgio.y + 0.7218f, newOrgio.z + 0.5f);     //H: +120°  //V: +75°
            path0[4] = new Vector3(newOrgio.x + 0.7218f, newOrgio.y + 0.5774f, newOrgio.z + 0.5f);     //H: +15°   //V: -15°
            path0[5] = new Vector3(newOrgio.x + 0.5774f, newOrgio.y + -0.5774f, newOrgio.z + 0.5f);    //H: -15°   //V: -120°
            path0[6] = new Vector3(newOrgio.x + -0.2887f, newOrgio.y + -0.5774f, newOrgio.z + 0.5f);   //H: -90°   //V: +0°
            path0[7] = new Vector3(newOrgio.x + -0.1444f, newOrgio.y + 0.1444f, newOrgio.z + 0.5f);    //H: +15°   //V: +75°
            path0[8] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //H: +15°   //V: -15°
            path0[9] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //Last coordinate is not reached.
        }

        else if (selectedSession == 1) {
            
            //path0 turned 180°
            path1[0] = new Vector3(newOrgio.x + -0.2887f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);       //H: -30°   //V: +0°
            path1[1] = new Vector3(newOrgio.x + 0.1444f, newOrgio.y + 0.1444f, newOrgio.z + 0.5f);     //H: +45°   //V: +15°
            path1[2] = new Vector3(newOrgio.x + 0.5774f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);        //H: +45°   //V: -15°
            path1[3] = new Vector3(newOrgio.x + -0.5774f, newOrgio.y + -0.7218f, newOrgio.z + 0.5f);   //H: -120°  //V: -75°
            path1[4] = new Vector3(newOrgio.x + -0.7218f, newOrgio.y + -0.5774f, newOrgio.z + 0.5f);   //H: -15°   //V: +15°
            path1[5] = new Vector3(newOrgio.x + -0.5774f, newOrgio.y + 0.5774f, newOrgio.z + 0.5f);    //H: +15°   //V: +120°
            path1[6] = new Vector3(newOrgio.x + 0.2887f, newOrgio.y + 0.5774f, newOrgio.z + 0.5f);     //H: +90°   //V: +0°
            path1[7] = new Vector3(newOrgio.x + 0.1444f, newOrgio.y + -0.1444f, newOrgio.z + 0.5f);    //H: -15°   //V: -75°
            path1[8] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //H: -15°   //V: +15°
            path1[9] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //Last coordinate is not reached.
        }

        else {
            
            //path0 backwards
            path2[0] = new Vector3(newOrgio.x + -0.1444f, newOrgio.y + 0.1444f, newOrgio.z + 0.5f);    //H: -15°   //V: +15°
            path2[1] = new Vector3(newOrgio.x + -0.2887f, newOrgio.y + -0.5774f, newOrgio.z + 0.5f);   //H: -15°   //V: -75°
            path2[2] = new Vector3(newOrgio.x + 0.5774f, newOrgio.y + -0.5774f, newOrgio.z + 0.5f);    //H: +90°   //V: 0°
            path2[3] = new Vector3(newOrgio.x + 0.7218f, newOrgio.y + 0.5774f, newOrgio.z + 0.5f);     //H: +15°   //V: +120°
            path2[4] = new Vector3(newOrgio.x + 0.5774f, newOrgio.y + 0.7218f, newOrgio.z + 0.5f);     //H: -15°   //V: +15°
            path2[5] = new Vector3(newOrgio.x + -0.5774f, newOrgio.y + -0.0f, newOrgio.z + 0.5f);      //H: -120°  //V: -75°
            path2[6] = new Vector3(newOrgio.x + -0.1444f, newOrgio.y + -0.1444f, newOrgio.z + 0.5f);   //H: +45°   //V: -15°
            path2[7] = new Vector3(newOrgio.x + 0.2887f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);        //H: +45°   //V: +15°
            path2[8] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //H: -30°   //V: 0°
            path2[9] = new Vector3(newOrgio.x + 0.0f, newOrgio.y + 0.0f, newOrgio.z + 0.5f);           //Last coordinate is not reached.
        }





    }
	
    public void setNewCoord(){
        //This is the position of the cube (RandomPositionDecider).

        //Get selectedSession from the other script
        //int selectedSession = EntireScene.GetComponent<EndSession>().selectedSession;
        Debug.Log("Setting new pathcoord in session: " + selectedSession + " PathIndexNumber: " + pathIndexNumber);

        //Depending on which session, choose right pathList.
        if (selectedSession == 0){
            transform.position = path0[pathIndexNumber];
        }

        else if (selectedSession == 1){
            transform.position = path1[pathIndexNumber];
        }

        else {
            //(EndSessionScript.selectedSession == 2)
            transform.position = path2[pathIndexNumber];
        }

        pathIndexNumber++;
    }

}