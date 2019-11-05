using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Transiciones : MonoBehaviour {

    Animator animator;
    Image imagen;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        imagen = GetComponent<Image>();
    }

    private void Start()
    {
        StartCoroutine(desactivarme());
    }

    IEnumerator desactivarme()
    {
        yield return new WaitForSeconds(1f);
        imagen.enabled = false;
        
    }

    public void loadScene(string Scene)
    {
        imagen.enabled = true;
        StartCoroutine(transicion(Scene));
    }

    IEnumerator transicion(string Scene)
    {
        animator.SetTrigger("Salida");
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(Scene);
    }
}
