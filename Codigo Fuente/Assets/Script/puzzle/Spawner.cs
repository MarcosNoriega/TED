using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

	public void spawnear(GameObject objeto)
    {
        Instantiate(objeto, new Vector3(-2.35f, 3.49f, 0f), Quaternion.identity);
    }
}
