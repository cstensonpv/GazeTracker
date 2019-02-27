using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class randomPosition : MonoBehaviour {

    #region Public Variables
    public GameObject Camera;
    public GameObject EntireScene;
    public int pathIndexNumber = 0;
    #endregion

    #region Private Variables
    //private float x;
    //private float y;
    //private Vector3 origo;

    private Vector3[] path0 = new Vector3[4];
    private Vector3[] path1 = new Vector3[4];
    private Vector3[] path2 = new Vector3[4];

    private float timer = 0.0f;
    private float nextCoordTime = 1.5f;
    #endregion

    void Awake(){
        //Last coordinate is never reached.
        path0[0] = new Vector3(-0.2f, 0.4f, 0.0f);
        path0[1] = new Vector3(-0.5f, 0.0f, 0.0f);
        path0[2] = new Vector3(0.5f, -0.3f, 0.0f);
        path0[3] = new Vector3(-0.0f, 0.0f, 0.0f);

        path1[0] = new Vector3(-0.1f, 0.1f, 0.0f);
        path1[1] = new Vector3(0.1f, 0.1f, 0.0f);
        path1[2] = new Vector3(0.1f, -0.1f, 0.0f);
        path1[3] = new Vector3(-0.0f, 0.0f, 0.0f);

        path2[0] = new Vector3(-1f, 1f, 0.0f);
        path2[1] = new Vector3(1f, -1f, 0.0f);
        path2[2] = new Vector3(-1f, -1f, 0.0f);
        path2[3] = new Vector3(-0.0f, 0.0f, 0.0f);

    }

    void OnEnable(){
        //Every time a new session is started the pathCoordNumber must be reset so that the pathList starts from index 0.
        pathIndexNumber = 0;
        timer = 0;
    }

	void Start () {
        MLEyes.Start();

        //origo = Camera.transform.position;
        //Deactivating a game object does not stop the InvokeRepeating().
        //InvokeRepeating("randomizeNewCoord", 2.0f, 1.5f);
	}

    private void OnDisable(){
        MLEyes.Stop();
    }
	
    void setNewCoord(){
        //This is the position of the cube (RandomPositionDecider).

        //get selectedSession from the other script
        EndSession EndSessionScript = EntireScene.GetComponent<EndSession>();
        Debug.Log("we're in session: " + EndSessionScript.selectedSession);

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

    void Update(){
        
        timer += Time.deltaTime;
        
        if (timer > nextCoordTime){
            //Set new coord every runSessionTime (1.5) second.
            timer = 0;
            setNewCoord();
        }
    }

    //Old and not used anymore.
    //// randomizeNewCoord is called once every 1.5 seconds
    //void randomizeNewCoord()
    //{
    //    //This is the position of the cube (RandomPositionDecider).
    //    x = origo.x + Random.Range(-1f, 1f);
    //    y = origo.y + Random.Range(-1f, 1f);
    //    transform.position = new Vector3(x, y, 0);
    //}

}