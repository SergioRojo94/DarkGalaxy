using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    private PlanetsRotation pr; //used for rotating planets
    void Start()
    {
        gameObject.transform.Rotate(0, 0, 180);
        pr = FindObjectOfType<PlanetsRotation>();
    }

    private void Update()
    {
       // gameObject.transform.position = pr.transform.position;
    }
}
