using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DarkBallBehaviour : MonoBehaviour
{
    public int damage;
    [Tooltip("Moving speed on Y axis in local space")]
    public float speed = 5.5f;


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            Player.instance.GetDamage(damage);
            Destroy(gameObject);
        }
            
    }

    private void Update()
    {
        transform.Translate(Vector3.down * speed * Time.deltaTime);
    }
}

