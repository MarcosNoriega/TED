using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Conectar : MonoBehaviour {

    public LayerMask conector;
    private Transform cable;
    public Vector3 nuevaPosicion;

	// Use this for initialization
	void Start () {
		
	}

    // Update is called once per frame
    void FixedUpdate() {
        bool c = Physics2D.OverlapCircle(transform.position, 0.63f, conector);

        if (!Input.GetKey(KeyCode.Mouse0) && c && cable != null)
        {
            cable.parent = this.transform;
            cable.localPosition = nuevaPosicion;

        }
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("conector") && cable == null)
        {
            cable = collision.transform;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("conector") && cable.Equals(collision.transform)) {
            cable.parent = null;
            cable = null;
            
        }
    }
}
