using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Loot : MonoBehaviour
{
    private float speed = 0.05f;
    private Vector3 playerPos; //the projectile will be moving to the player position

    private Animator _animScore;
    private int intScore;
    private Score score;

    private void Start()
    {
        /*if (score != null && intScore != null)
        {
            score = FindObjectOfType<Score>();
            _animScore = score.GetComponent<Animator>();
        }*/
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
            float coins = PlayerPrefs.GetFloat("Coins");
            coins += 10;
            FindObjectOfType<SFXManager>().Play("TakeCoin");
            PlayerPrefs.SetFloat("Coins", coins);
           /* intScore = int.Parse(score.GetComponent<TextMeshProUGUI>().text); //aquí tenemos el score pasado a int
            intScore += 10; //le sumamos los puntos del enemy al destruirlo
            _animScore.SetTrigger("WinPoint"); //el marcador se mueve de arriba abajo
            score.GetComponent<TextMeshProUGUI>().text = intScore.ToString(); //lo volvemos a pasar a String para mostrarlo por pantalla*/
            Destroy(gameObject);
        }
    }
    public IEnumerator IncreaseSpeed()
    {
        for (int i = 0; i < 750; i++)
        {
            yield return new WaitForSeconds(0.01f);
            speed += 0.0015f;
        }
    }
}
