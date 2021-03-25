using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAfterTime : MonoBehaviour
{
    public float timeToDestroy;
    void Start()
    {
        StartCoroutine(Destroy());
    }

    private IEnumerator Destroy()
    {
        yield return new WaitForSeconds(timeToDestroy);
        Destroy(gameObject); 
        
    }
}

