﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[Serializable]
public class UserDataClass {

    public string userName;
    public string note;
    public string timeStamp;
    public float FixationConfidence;

    public List<Vector3> targetSession0 = new List<Vector3>();
    public List<Vector3> positionsEyeSession0 = new List<Vector3>();
    public List<Vector3> positionsHeadSession0 = new List<Vector3>();

    public List<Vector3> targetSession1 = new List<Vector3>();
    public List<Vector3> positionsEyeSession1 = new List<Vector3>();
    public List<Vector3> positionsHeadSession1 = new List<Vector3>();

    public List<Vector3> targetSession2 = new List<Vector3>();
    public List<Vector3> positionsEyeSession2 = new List<Vector3>();
    public List<Vector3> positionsHeadSession2 = new List<Vector3>();

    public UserDataClass(){

        timeStamp = System.DateTime.Now.ToString("yyyy-MM-dd\\THH:mm:ss");
        userName = "Anonymous";
        note = "---";
        //FixationConfidence = 0.1f;
    }
}