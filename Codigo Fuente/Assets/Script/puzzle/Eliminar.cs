using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eliminar : MonoBehaviour {

    /* private void FixedUpdate()
    {
        if (Input.GetKey(KeyCode.Mouse1))
        {
            Vector2 worldPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(worldPoint, Vector2.zero);
            if (hit.collider != null)
            {
                if (transform.childCount > 0)
                {
                    for(int i=0; i < transform.childCount; i++)
                    {
                        Destroy(transform.GetChild(i));
                    }
                }

                Destroy(gameObject);
            }
        }
    }*/

    public GameObject objetoAsignado;
    public Transform center;
    public Animator animator;

    private void FixedUpdate()
    {
        bool c = Physics2D.OverlapBox(center.position, new Vector2(5.12f, 5.12f), 0f);
        if (!Input.GetKey(KeyCode.Mouse0) && c && animator != null)
        {
            StartCoroutine(delete());
        }

        if (!Input.GetKey(KeyCode.Mouse0) && c && animator == null)
        {
            Destroy(objetoAsignado);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == 9 || collision.gameObject.layer == 8)
        {
            objetoAsignado = collision.gameObject;
            animator = objetoAsignado.GetComponent<Animator>();
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject == objetoAsignado)
        {
            objetoAsignado = null;
            animator = null;
        }
    }

    private IEnumerator delete()
    {
        animator.SetTrigger("delete");
        yield return new WaitForSeconds(1f);
        Destroy(objetoAsignado);
        objetoAsignado = null;
        animator = null;
    }

}
