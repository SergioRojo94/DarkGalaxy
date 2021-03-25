using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableGameObject : MonoBehaviour
{
    public GameObject GoToDisable;
   
    public void Disable()
    {
        GoToDisable.SetActive(false);
    }
}
