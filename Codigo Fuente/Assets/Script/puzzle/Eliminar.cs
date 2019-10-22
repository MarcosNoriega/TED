using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eliminar : MonoBehaviour {

    private void FixedUpdate()
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
    }
}
