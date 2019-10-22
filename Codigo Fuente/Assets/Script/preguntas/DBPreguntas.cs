using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DBPreguntas : MonoBehaviour {
    public List<Pregunta> listaPreguntas = null;
    private List<Pregunta> backoup;

    private void Awake()
    {
        backoup = listaPreguntas;
    }

    public Pregunta getRandom(bool remove = true)
    {
        if (listaPreguntas.Count == 0)
        {
            listaPreguntas = backoup;
        }

        int index = Random.Range(0, listaPreguntas.Count);

        if (!remove) return listaPreguntas[index];

        Pregunta q = listaPreguntas[index];
        listaPreguntas.RemoveAt(index);

        return q;
    }
}
