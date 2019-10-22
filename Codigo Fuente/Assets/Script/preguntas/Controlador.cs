using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controlador : MonoBehaviour {
    private DBPreguntas dbPreguntas;
    private PreguntaUI preguntasUI;

    private void Start()
    {
        dbPreguntas = GameObject.FindObjectOfType<DBPreguntas>();
        preguntasUI = GameObject.FindObjectOfType<PreguntaUI>();

        nextPregunta();
    }

    private void nextPregunta()
    {
        preguntasUI.construir(dbPreguntas.getRandom(), giveAnswer);
    }

    public void giveAnswer(OpcionButton op)
    {

    }
}
