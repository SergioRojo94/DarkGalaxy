﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusTemporalShield : MonoBehaviour
{
    private Player player;

    private void Start()
    {
        player = FindObjectOfType<Player>();
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            player.TemporalShieldUp();
            Destroy(gameObject);
        }
    }
   
}
