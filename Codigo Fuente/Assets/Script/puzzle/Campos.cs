using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Campos : MonoBehaviour {

    public string textCorrecto = "";
    InputField inputFied;
    Image image;

    private void Awake()
    {
        inputFied = GetComponent<InputField>();
        image = GetComponent<Image>();
    }

    public bool esCorrecto()
    {
        if (inputFied.text.ToLower() == textCorrecto.ToLower())
        {
            image.color = Color.green;
            return true;
        }
        image.color = Color.red;
        return false;
    } 

    public void limpiarCorreccion()
    {
        image.color = Color.white;
    }
}
