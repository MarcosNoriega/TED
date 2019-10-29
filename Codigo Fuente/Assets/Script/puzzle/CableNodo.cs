using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CableNodo : MonoBehaviour {

    public Transform centro;
    public LayerMask cable;
    public GameObject objetoAsignado;
    public GameObject objetoCorrecto;
    public string tagCorrecto;

    private void FixedUpdate()
    {
        bool c = Physics2D.OverlapBox(centro.position, new Vector2(0.3f, 3.31f), 0, cable);
        if (!Input.GetKey(KeyCode.Mouse0) && c)
        {
            objetoAsignado.transform.SetParent(this.transform);
            objetoAsignado.transform.localPosition = new Vector2(-0.03999996f, 1.17f);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == 8 && objetoAsignado == null)
        {
            objetoAsignado = collision.gameObject;
        }
        if (collision.CompareTag(tagCorrecto))
        {
            objetoCorrecto = collision.gameObject;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject == objetoAsignado)
        {
            objetoAsignado.transform.parent = null;
            objetoAsignado = null;
            objetoCorrecto = null;
        }
    }

    public bool esCorrecto()
    {
        return (objetoCorrecto != null);
    }
}
