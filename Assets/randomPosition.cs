using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class randomPosition : MonoBehaviour {

    // Starting after 2 seconds.
    // A coordinate will be randomed every 1.5 seconds.

    #region Public Variables
    public float x;
    public float y;

    public GameObject Camera;
    public Vector3 origo;
    #endregion

	void Start () {
        MLEyes.Start();
        origo = Camera.transform.position;
        InvokeRepeating("randomizeNewCoord", 2.0f, 1.5f);
	}

    private void OnDisable(){
        MLEyes.Stop();
    }
	
    // randomizeNewCoord is called once every 1.5 seconds
    void randomizeNewCoord () {
        //This is the position of the cube (RandomPositionDecider).
        x = origo.x + Random.Range(-1f, 1f);
        y = origo.y + Random.Range(-1f, 1f);
        transform.position = new Vector3(x, y, 0);
	}
}
