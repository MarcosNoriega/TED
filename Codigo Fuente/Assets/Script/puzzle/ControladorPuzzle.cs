using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ControladorPuzzle : MonoBehaviour {

    public static ControladorPuzzle instance;
    public Nodo[] nodos;
    public CableNodo[] cables;
    public Campos[] campos;
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

    public void comprobarNorma()
    {
        for (int i=0; i < cables.Length; i++)
        {
            if (!cables[i].esCorrecto())
            {
                panelError.active = true;
                return;
            }
        }

        panelOk.SetActive(true);
        return;
    }

    public void corregirTabla()
    {
        bool error = false;
        for (int i=0; i < campos.Length; i++)
        {
            if (!campos[i].esCorrecto())
            {
                panelError.SetActive(true);
                error = true;
            }
        }

        if (!error)
        {
            panelOk.SetActive(true);

        }
    }

    public void Reitentar()
    {
        panelError.SetActive(false);
    }


    public void loadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public void quitarCorrecciones()
    {
        for (int i=0; i < campos.Length; i++)
        {
            campos[i].limpiarCorreccion();
        }
    }
}
