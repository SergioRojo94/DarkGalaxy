using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Score : MonoBehaviour
{
    void Start()
    {
        RectTransform rt = gameObject.GetComponent<RectTransform>();
        rt.sizeDelta = new Vector2(683.7611f, 168.5004f); //fix a 'red cross' size on the screen
    }
}
