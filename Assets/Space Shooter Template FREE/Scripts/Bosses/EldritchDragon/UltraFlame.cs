using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UltraFlame : MonoBehaviour
{
    public int damage;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            Player.instance.GetDamage(damage);
        }

    }
}
