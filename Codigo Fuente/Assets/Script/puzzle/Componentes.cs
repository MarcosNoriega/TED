using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Componentes : MonoBehaviour {

    public string Nombre;

    public bool Equals(Componentes obj)
    {
        if ((obj == null) || !this.GetType().Equals(obj.GetType()))
        {
            return false;
        }

        else
        {
            return (Nombre == obj.Nombre);
        }
    }
}
