using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
[RequireComponent(typeof(Image))]
public class OpcionButton : MonoBehaviour {

    private Text texto;
    private Button button;
    private Image imagen;
    private Color originalColor;

    public Opcion opcion { get; set; }

    private void Awake()
    {
        button = GetComponent<Button>();
        imagen = GetComponent<Image>();
        texto = transform.GetChild(0).GetComponent<Text>();

        originalColor = imagen.color;
    }

    public void construirButton(Opcion op, Action<OpcionButton> callback)
    {
        texto.text = op.texto;
        button.enabled = true;
        imagen.color = originalColor;

        button.onClick.AddListener(delegate {
            callback(this);

        });
    }

    public void setColor(Color c)
    {
        button.enabled = false;
        imagen.color = c;
    }
}
