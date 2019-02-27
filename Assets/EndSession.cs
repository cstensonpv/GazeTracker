using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndSession : MonoBehaviour {

    public GameObject StartApplicationSphere;
    public GameObject RandomPositionDecider;

    private IList<int> sessionList = new List<int>();
    private int randomIndex;
    public int selectedSession;

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
        StartApplicationSphere.SetActive(false);

        if (sessionList.Count == 0) {
            //Program should probably end here.
            Debug.Log("OUT OF SESSIONS");
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
	
	void Update () {

        //Have the list runned out of pathCoordNumbers? If so, session is complete. Each pathList has 4 items.
        randomPosition randomPositionScript = RandomPositionDecider.GetComponent<randomPosition>();
        if (randomPositionScript.pathIndexNumber == 4){
            Debug.Log("session is complete.");
            StartApplicationSphere.SetActive(true);
        }
	}
}
