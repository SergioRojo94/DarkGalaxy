using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DarkTentacleBehaviour : MonoBehaviour
{
    private Animator tentacle;
    private CircleCollider2D cc;


    private void Start()
    {
        tentacle =  GetComponentInChildren<Animator>();
        cc = GetComponent<CircleCollider2D>();
        StartCoroutine(DarkTentacle());
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            Player.instance.GetDamage(1);
        }
    }

    IEnumerator DarkTentacle()
    {
        yield return new WaitForSeconds(1.4f);
        cc.enabled = true;
        tentacle.SetTrigger("Tentacles");
        yield return new WaitForSeconds(1f);
        Destroy(gameObject);
    }
}
