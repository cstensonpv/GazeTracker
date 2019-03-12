using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ApplicationLogicScript : MonoBehaviour {

    #region Public Variables
    public GameObject StartApplicationSphere;
    public GameObject EntireScene;
    public GameObject FireBaseLogic;
    public GameObject RandomPositionDecider;
    #endregion

    //AWAKE IS NEW, THIS IS SO THAT THE STARTAPPSPHERE FOLLOWS THE CAMERA SO IT'S WELL POSITIONED WHEN SITTING.
    void Awake(){
        StartApplicationSphere.SetActive(true);
    }

    //This script runs all the time.
	void Update () {
        
        if (StartApplicationSphere.transform.rotation.eulerAngles.z > 350){
            //Debug.Log("Full turn has been made, start session");
            EntireScene.SetActive(true);
            //Start gathering the data in FireBaseLogicScript.
            FireBaseLogic.SetActive(true);
            //Reset the rotation of the StartApplicationSphere. Otherwise the script keeps going in here every frame.
            StartApplicationSphere.transform.rotation = Quaternion.identity;
            StartApplicationSphere.SetActive(false);
        }

        randomPosition randomPositionScript = RandomPositionDecider.GetComponent<randomPosition>();
        if (randomPositionScript.pathIndexNumber == 10){
            Debug.Log("Session is complete.");

            //Reset the index, Otherwise the script keeps going in here every frame.
            randomPositionScript.pathIndexNumber = 0;

            //Push data from latest session to database.
            FirebaseScript FirebaseScript = FireBaseLogic.GetComponent<FirebaseScript>();
            FirebaseScript.SendToDatabase();

            EntireScene.SetActive(false);
            //Stop collecting data in FireBaseLogic and 'restart' the process. This time with a new session.
            FireBaseLogic.SetActive(false);
            StartApplicationSphere.SetActive(true);
        }


	}
}
