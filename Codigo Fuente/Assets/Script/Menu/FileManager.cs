using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

public class FileManager : MonoBehaviour {

    string path;
    public RawImage tabla;

    public void openExplorer()
    {
        path = EditorUtility.OpenFilePanel("Overwrite with png", "", "png");
        getImagen();
    }

    void getImagen()
    {
        if (path != null)
        {
            WWW www = new WWW("file:///" + path);
            tabla.texture = www.texture;
        }
    }
}
