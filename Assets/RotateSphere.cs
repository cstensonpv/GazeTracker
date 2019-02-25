using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateSphere : MonoBehaviour {

    #region Public Variables
    public float rotationSpeed = 1f;
    public Transform CustomPivotPointCube;
    public Transform Target;
    //public Transform ufo;
    #endregion

    #region Private Variables
    private MeshRenderer bigSphere;
    private Vector3 rotationAngle;
    private Vector3 bigSphereReferenceRotation;

    private Quaternion _lookRotation;
    private Vector3 _direction;
    #endregion

    #region Unity Methods
	void Start () {
        bigSphere = gameObject.GetComponent<MeshRenderer>();

        //Random a 'coordinate'.
        //rotationAngle.x = Random.Range(0, 180);
        //rotationAngle.y = Random.Range(-90, 90);

	}
	
	void Update () {

        //Sphere rotates towards the target, which jumps between coordinates.
        _direction = (Target.position - bigSphere.transform.position).normalized;
        _lookRotation = Quaternion.LookRotation(_direction);
        transform.rotation = Quaternion.Slerp(transform.rotation, _lookRotation, Time.deltaTime * rotationSpeed);


        //This is needed because bigSphereReferenceRotation can't directly go into the IF-statement.
        //bigSphereReferenceRotation = bigSphere.transform.rotation.eulerAngles;

        //if the rotation has reached the coordinate, change coordinate.
        //'Reach' in this case is that both x and y rotation are bigger.
        //if (bigSphereReferenceRotation.x >= rotationAngle.x && bigSphereReferenceRotation.y >= rotationAngle.y){
            //Debug.Log("Coordinate reached!");
            //rotationAngle.x = Random.Range(0f, 180f);
            //rotationAngle.y = Random.Range(-90f, 90f);
        //}

        //else {
            //Debug.Log("keep turning");
        //}

        //transform.Rotate(new Vector3(1,0,0), rotationSpeed * Time.deltaTime);
        //transform.Rotate(rotationAngle, rotationSpeed * Time.deltaTime);

        //Make sure the UFO is stable by de-rotate it.
        //ufo = this.gameObject.transform.GetChild(0);
        //ufo.Rotate(-rotationAngle, rotationSpeed * Time.deltaTime);



        //Debug.Log("rotationAngle: " + rotationAngle);
        //Debug.Log("transform.rotation: " + transform.rotation);
        //Debug.Log("bigSphere.rotation: " + bigSphere.transform.rotation.eulerAngles);

        //rotationAngle = transform.rotation;

        //Seems like this is the coordinate for the cube (UFO) in 3D space, which is awesome.
        //Debug.Log(CustomPivotPointCube.position);




        //FOUR FAILING TRIES
        //Vector3 rotation = transform.rotation.eulerAngles;
        //rotation.z = Mathf.Abs(rotation.z);
        //transform.eulerAngles = rotation;

        //Quaternion q = transform.rotation;
        //q.eulerAngles = new Vector3(q.eulerAngles.x, q.eulerAngles.y, 0);
        //transform.rotation = q;
        //Debug.Log("q: " + q);

        //rotationAngle.x = rotationSpeed * Time.deltaTime;
        //rotationAngle.y = rotationSpeed * Time.deltaTime;
        //transform.eulerAngles = rotationAngle;

        //Vector3 euler = transform.eulerAngles;
        //euler.z = Random.Range(0f, 360f);
        //transform.eulerAngles = euler;
        //END OF FOUR FAILS

	}
    #endregion
}
