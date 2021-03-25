using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AstroTurtlePatrol : MonoBehaviour
{
    public float speed;
    public Transform pointA, pointB, pointC, pointD, pointE, pointF;
    protected Vector3 currentTarget;
    private AstroTurtle at;

    private void Start()
    {
        currentTarget = transform.position;
        at = FindObjectOfType<AstroTurtle>();
    }

    private void Update()
    {
        Patrol();
    }
    void Patrol()
    {
        if (at.regenerateAsteroid == true)
        {
            StartCoroutine(Move(1, pointD));
            StartCoroutine(Move(10, pointB));
        }
        else
        {
            if (at.patrol == true)
            {
                if (transform.position == pointA.position)
                {
                    StartCoroutine(Move(2f, pointB));
                }
                if (transform.position == pointB.position)
                {
                    StartCoroutine(Move(2f, pointC));

                }
                if (transform.position == pointC.position)
                {
                    StartCoroutine(Move(2, pointD));
                }
                if (transform.position == pointD.position)
                {
                    StartCoroutine(Move(2, pointE));
                }
                if (transform.position == pointE.position)
                {
                    StartCoroutine(Move(2, pointF));
                }
                if (transform.position == pointF.position)
                {
                    StartCoroutine(Move(2f, pointA));
                }
                transform.position = Vector3.MoveTowards(transform.position, currentTarget, speed * Time.deltaTime);
            }
        }
      
    }

    private IEnumerator Move(float time, Transform newPos)
    {
        yield return new WaitForSeconds(time);
        currentTarget = newPos.position;
    }

}
