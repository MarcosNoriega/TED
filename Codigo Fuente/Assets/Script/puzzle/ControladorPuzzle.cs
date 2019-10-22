using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ControladorPuzzle : MonoBehaviour {

    public static ControladorPuzzle instance;
    public Nodo[] nodos;
    public GameObject panelError;
    public GameObject panelOk;

    private void Awake()
    {
        if (ControladorPuzzle.instance == null)
        {
            ControladorPuzzle.instance = this;
        } else if (ControladorPuzzle.instance != this)
        {
            Destroy(gameObject);
        }
    }

    private void OnDestroy()
    {
        if (ControladorPuzzle.instance == this)
        {
            ControladorPuzzle.instance = null;
        }
    }

    public void Terminar()
    {
        for (int i = 0; i < nodos.Length; i++)
        {
            if (!nodos[i].esCorrecto())
            {
                panelError.active = true;
                return;
            }  
        }

        panelOk.active = true;
    }

    public void Reitentar()
    {
        panelError.active = false;
    }

    public void SiguenteNivel()
    {
        SceneManager.LoadScene("modoPuzzle");
    }

    public void loadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }
}
