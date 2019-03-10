using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateSphere : MonoBehaviour {

    #region Public Variables
    public GameObject RandomPositionDecider;
    #endregion

    #region Private Variables
    private MeshRenderer bigSphere;
    private Quaternion _lookRotation;
    private Vector3 _direction;
    private Quaternion previousFrameRotation;

    private float runTime;
    private float firstRotationDelay = 1.0f;
    #endregion

    #region Unity Methods
	void Start () {
        bigSphere = gameObject.GetComponent<MeshRenderer>();
	}

    void OnEnable(){
        Debug.Log("last session took: " + runTime);
        runTime = 0;
    }
	
	void Update () {

        runTime = runTime + Time.deltaTime;
        //Wait firstRotationDelay seconds before first rotation. This is so that the UFO does not move instantly after session start.
        if(runTime > firstRotationDelay){
        
            //The _direction variable decides in which direction the bigSphere should rotate. It is decided from the RandomPositionDecider (a cube which jumps between positions).
            //When the rotation of the bigSphere is complete, the previousFrameRotation varible is 0 since it does not have to rotate anymore. When that happens RandomPositionDecider changes its position and the bigSphere's rotation starts again.

            //Get the rotationSpeed which varies depending on session from the RandomPositionDecider script.
            float rotationSpeed = RandomPositionDecider.GetComponent<randomPosition>().rotationSpeed;


            _direction = (RandomPositionDecider.transform.position - bigSphere.transform.position).normalized;
            //This IF-statement is just to escape the "Look Rotation Viewing Vector Is Zero" spam in console, it is not required.
            //if (_direction != Vector3.zero) {
            _lookRotation = Quaternion.LookRotation(_direction);
            transform.rotation = Quaternion.RotateTowards(transform.rotation, _lookRotation, rotationSpeed * Time.deltaTime);
            //}


            //When transform.rotation is same as previousFrameRotation we have turned 0° since last frame. Coordinate is reached. Time for a new position for the RandomPositionDecider.
            if (transform.rotation.ToString("F4") == previousFrameRotation.ToString("F4")){  
                //Debug.Log("They are the same:" + transform.rotation.ToString("F4"));
                //Debug.Log("They are the same:" + previousFrameRotation.ToString("F4"));

                randomPosition RandomPositionScript = RandomPositionDecider.GetComponent<randomPosition>();
                RandomPositionScript.setNewCoord();
            }

            //IMPORTANT NOTE
            //transform.rotation == previousFrameRotation does not work well for slow rotationspeed (<10°). 
            //In some cases unity believes that they are the same even though they are not.
            //              transform.rotation             =                previousFrameRotation
            //(0.0000000, 0.0067529, 0.0000000, 0.9999772) = (0.0000000, 0.0053367, 0.0000000, 0.9999858)
            //We can force a better calculation by adding ToString("F4")), which makes it much more accurate, but it is more expensive.
            //4 digits is enough

            //Debug.Log("transform.rotation: " + transform.rotation.ToString("F4"));
            //Debug.Log("deltaRotation: " + previousFrameRotation.ToString("F4"));

            //Rotation has been made (transform.rotation), it has been compared with the previous rotation and passed. The amount of rotation for this frame is saved to previousFrameRotation and the process starts over.
            previousFrameRotation = transform.rotation;

        }

	}
    #endregion
}
