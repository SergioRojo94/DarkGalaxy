using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SA_BiohazardMoving : MonoBehaviour
{
    //this script manages the behaviour of Biohazard ship special attack
    [Tooltip("Moving speed on Y axis in local space")]
    public float speed;
    private bool up;
    void Start()
    {
       up = true;
       StartCoroutine(Back());
       Destroy(gameObject, 16);
    }

    //moving the object with the defined speed
    private void Update()
    {
       if (up == true)
        transform.Translate(Vector3.right * speed * Time.deltaTime);
       else
        {
            transform.Translate(Vector3.left * speed * Time.deltaTime);
        }
    }

    private IEnumerator Back() //when Biohazard Special Attack reaches top of the screen, it backs to the down
    {
        yield return new WaitForSeconds(2.2f);
        up = false;
    }
}
