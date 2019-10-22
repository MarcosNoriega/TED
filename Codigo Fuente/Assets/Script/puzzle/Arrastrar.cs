using UnityEngine;
using UnityEngine.EventSystems;

public class Arrastrar : MonoBehaviour, IDragHandler
{
    public float z = 0f;

    public void OnDrag(PointerEventData eventData)
    {
        Vector3 target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        target.z = z;

        transform.position = target;

    }
}
