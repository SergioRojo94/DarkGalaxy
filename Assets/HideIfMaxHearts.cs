using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideIfMaxHearts : MonoBehaviour
{
    private int hearts;
    void Start()
    {
        hearts = PlayerPrefs.GetInt("Hearts");
        if (hearts == 200)
            gameObject.SetActive(false);
    }

    
    void Update()
    {
        hearts = PlayerPrefs.GetInt("Hearts");
        if (hearts == 200)
            gameObject.SetActive(false);
    }
}
