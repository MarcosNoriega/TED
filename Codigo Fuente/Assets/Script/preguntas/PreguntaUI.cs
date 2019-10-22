using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PreguntaUI : MonoBehaviour {
    [SerializeField] private Text pregunta;
    [SerializeField] private List<OpcionButton> botonesList;
    
    public void construir(Pregunta pregunta, Action<OpcionButton> callback)
    {
        this.pregunta.text = pregunta.texto;

        for (int i = 0; i < botonesList.Count; i++)
        {
            botonesList[i].construirButton(pregunta.opciones[i], callback);
        }
    }

}
