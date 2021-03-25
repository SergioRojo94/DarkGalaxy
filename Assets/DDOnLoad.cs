using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DDOnLoad : MonoBehaviour
{
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }
}
