using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateSphere : MonoBehaviour {

    #region Public Variables
    //public Transform CustomPivotPointCube;
    public GameObject RandomPositionDecider;
    //public GameObject EntireScene;
    #endregion

    #region Private Variables
    private MeshRenderer bigSphere;
    //private Vector3 rotationAngle;
    //private Vector3 bigSphereReferenceRotation;

    private Quaternion _lookRotation;
    private Vector3 _direction;

    private Quaternion previousFrameRotation;
    #endregion

    #region Unity Methods
	void Start () {
        bigSphere = gameObject.GetComponent<MeshRenderer>();
	}
	
	void Update () {

        //The sphere rotates towards the 'target' (RandomPositionDecider), which jumps between coordinates.
        _direction = (RandomPositionDecider.transform.position - bigSphere.transform.position).normalized;

        //Get the rotationSpeed from the RandomPositionDecider script
        float rotationSpeed = RandomPositionDecider.GetComponent<randomPosition>().rotationSpeed;

        //This IF-statement is just to escape the "Look Rotation Viewing Vector Is Zero" spam in console, it is not required.
        //if (_direction != Vector3.zero) {
        _lookRotation = Quaternion.LookRotation(_direction);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, _lookRotation, rotationSpeed * Time.deltaTime);
        //}

        //Debug.Log("transform.rotation: " + transform.rotation.ToString("F7"));
        //Debug.Log("deltaRotation: " + previousFrameRotation.ToString("F7"));
        //float angle = Quaternion.Angle(transform.rotation, previousFrameRotation);
        //Debug.Log("angle: " + angle);

        //transform.rotation == previousFrameRotation does not work well for slow rotationspeed (<10°)
        //However, we can force a better calculation by adding ToString("F7")), which makes it better. It is expensive tho.
        //if (transform.rotation.ToString("F7") == previousFrameRotation.ToString("F7")){
        if (transform.rotation == previousFrameRotation){  
            //Debug.Log("angle: " + angle);
            //Debug.Log("THEY ARE THE SAME:" + transform.rotation.ToString("F7"));
            //Debug.Log("THEY ARE THE SAME:" + previousFrameRotation.ToString("F7"));
            //When previousFrameRotation is same as transform.rotation we have turned zero ° since last frame! Means coordinate is reached.
            randomPosition RandomPositionScript = RandomPositionDecider.GetComponent<randomPosition>();
            RandomPositionScript.setNewCoord();
        }


        //Unity believes (0.0000000, 0.0067529, 0.0000000, 0.9999772) = (0.0000000, 0.0053367, 0.0000000, 0.9999858)
        //for the previousFrameRotation and transform.rotation.

        //Each frame the transform.rotation rotates the sphere a little bit. This rotation is compared with the rotation of
        //the previous frame. If they are the same (0). That means the sphere has reached its destination and does
        //not have to rotate anymore. That means a new coordinate should be set, and the rotation starts again.
        previousFrameRotation = transform.rotation;


	}
    #endregion
}
