using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EldritchDragonPatrol : MonoBehaviour
{
    public float speed;
    public Transform pointA, pointB, pointC, pointD;
    protected Vector3 currentTarget;
    private EldritchDragon ed;

    private void Start()
    {
        currentTarget = transform.position;
        ed = FindObjectOfType<EldritchDragon>();
    }

    private void Update()
    {
        Patrol();
    }
    void Patrol()
    {
        if (ed.patrol == true)
        {
            if (transform.position == pointA.position)
            {
                //Debug.Log("PUNTO A");
                StartCoroutine(Move(5.5f, pointB));
            }
            if (transform.position == pointB.position)
            {
                // currentTarget = pointC.position;
                // Debug.Log("PUNTO b");
                StartCoroutine(Move(2.5f, pointC));

            }
            if (transform.position == pointC.position)
            {
                //currentTarget = pointD.position;
                //Debug.Log("PUNTO C");
                StartCoroutine(Move(2, pointD));
            }
            if (transform.position == pointD.position)
            {
                //Debug.Log("PUNTO D");
                StartCoroutine(Move(2.5f, pointA));
            }
            transform.position = Vector3.MoveTowards(transform.position, currentTarget, speed * Time.deltaTime);
        }
       
    }

    private IEnumerator Move(float time, Transform newPos)
    {
        yield return new WaitForSeconds(time);
        currentTarget = newPos.position;
    }

}
