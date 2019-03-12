using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndSession : MonoBehaviour {
    
    public GameObject FireBaseLogic;
    public int selectedSession;

    private IList<int> sessionList = new List<int>();
    private int randomIndex;

    //Runs first (and only) time 'EntireScene object' is enabled.
	void Awake () {
        //Debug.Log("First time in end session");
        //Add the three sessions to the list.
        sessionList.Add(0);
        sessionList.Add(1);
        sessionList.Add(2);

	}

    void OnEnable(){
        //Debug.Log("End session script");

        if (sessionList.Count == 0) {
            //Program should probably end here.
            Debug.Log("OUT OF SESSIONS");

            //Run send to SendToDatabase from FirebaseScript
            //FirebaseScript FirebaseScript = FireBaseLogic.GetComponent<FirebaseScript>();
            //FirebaseScript.SendToDatabase();

            //Application.Quit();
        }

        else {
            //Random an index from what is left in the list.
            randomIndex = Random.Range(0, sessionList.Count);

            //The index is now converted to corresponding session.
            selectedSession = sessionList[randomIndex];

            //remove the index from the list, so that session cannot be played again.
            sessionList.RemoveAt(randomIndex);
        }

    }
	
}
