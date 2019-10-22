using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cable : MonoBehaviour {

    LineRenderer cable;
    public Transform extremoIzq;
    public Transform extremoDer;

    private void Awake()
    {
        cable = GetComponent<LineRenderer>();
    }
    // Use this for initialization
    void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        cable.SetPosition(0, extremoDer.position);
        cable.SetPosition(1, extremoIzq.position);
    }
}
