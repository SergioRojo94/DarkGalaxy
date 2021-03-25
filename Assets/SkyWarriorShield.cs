using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyWarriorShield : MonoBehaviour
{
    private Collider2D _coll;
    void Start()
    {
        _coll = GetComponent<Collider2D>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Projectile" || collision.tag == "Enemy")
            Destroy(gameObject);
    }
}
