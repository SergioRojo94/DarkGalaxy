using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BonusBigProjectile : MonoBehaviour
{
    private float speed = 0.1f;
    private Vector3 playerPos; //the projectile will be moving to the player position
    private Player player;

    private void Start()
    {
        player = FindObjectOfType<Player>();
        StartCoroutine(IncreaseSpeed());
    }
    private void Update()
    {
        playerPos = Player.instance.transform.position;
        transform.Translate(playerPos * speed * Time.deltaTime);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            FindObjectOfType<SFXManager>().Play("TakeBonus");
            player.BigProjectile(); //antes estaba con Player.instance, quizá así se arregla el bug
            Destroy(gameObject);
        }
    }
    public IEnumerator IncreaseSpeed()
    {
        for (int i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.01f);
            speed += 0.0005f;
        }
    }

}
