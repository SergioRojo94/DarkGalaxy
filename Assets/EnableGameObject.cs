using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableGameObject : MonoBehaviour
{
    public GameObject GoToEnable;

    public void Enable()
    {
        GoToEnable.SetActive(true);
    }
}
