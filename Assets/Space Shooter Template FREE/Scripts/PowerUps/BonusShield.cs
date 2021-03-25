using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusShield : MonoBehaviour
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
            player.ShieldUp();
            Destroy(gameObject);
           // StartCoroutine(DisableShield());
        }
    }

    IEnumerator DisableShield()
    {
        yield return new WaitForSeconds(3.5f);
        player.ShieldDown();
    }
}
