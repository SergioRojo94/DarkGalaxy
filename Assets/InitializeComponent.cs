using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeComponent : MonoBehaviour
{
    private int cont;
    void Start()
    {
        foreach (Transform objX in transform)
        {
            if (cont > 0)
            {
                objX.gameObject.SetActive(false);

            }
            cont++;
        }
 
    }
}
