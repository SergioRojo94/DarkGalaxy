using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipPatrol : MonoBehaviour
{
    public Transform pointA, pointB, pointC, pointD;
    protected Vector3 currentTarget;
    public float speed;
    void Start()
    {
        currentTarget = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        Patrol();
    }

    void Patrol()
    {
            if (transform.position == pointA.position)
            {
                StartCoroutine(Move(0.2f, pointB));
            }
            if (transform.position == pointB.position)
            {
                StartCoroutine(Move(0.2f, pointC));

            }
            if (transform.position == pointC.position)
            {
                StartCoroutine(Move(0.2f, pointD));
            }
            if (transform.position == pointD.position)
            {
                StartCoroutine(Move(0.2f, pointA));
            }
            transform.position = Vector3.MoveTowards(transform.position, currentTarget, speed * Time.deltaTime);
    }

    private IEnumerator Move(float time, Transform newPos)
    {
        yield return new WaitForSeconds(time);
        currentTarget = newPos.position;
    }
}
