using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragonSilhouetteBehaviour : MonoBehaviour
{
    public float speed = 0.07f;

    private void Start()
    {
        StartCoroutine(Destroy());
    }
    void Update()
    {
        Flying();
    }
    void Flying()
    {
        transform.position += Vector3.up * speed; //así de sencillo, se mueve hacia arriba
    }

    private IEnumerator Destroy()
    {
        yield return new WaitForSeconds(2.5f);
        Destroy(gameObject);
    }
}
