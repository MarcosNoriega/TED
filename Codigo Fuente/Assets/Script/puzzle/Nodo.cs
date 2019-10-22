using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nodo : MonoBehaviour {

    public GameObject objetoCorrecto;
    public GameObject objetoAsignado;
    public string tagCorrecto;
    public LayerMask componente;

    private void FixedUpdate()
    {
        bool c = Physics2D.OverlapCircle(this.transform.position, 0.34f, componente);

        if (!Input.GetKey(KeyCode.Mouse0) && c)
        {
            objetoAsignado.transform.SetParent(this.transform);
            objetoAsignado.transform.localPosition = new Vector2(-0.01f, -0.13f);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == 9 && objetoAsignado == null) 
            objetoAsignado = collision.gameObject;
        if (collision.CompareTag(tagCorrecto) && objetoCorrecto == null)
            objetoCorrecto = collision.gameObject;

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
        if (objetoCorrecto != null) return true;

        return false;
    }
}
