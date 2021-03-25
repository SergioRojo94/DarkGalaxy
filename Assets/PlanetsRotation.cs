using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

public class PlanetsRotation : MonoBehaviour
{
    public Transform turtleGod; //object on which the planets will rotate
    public float speed;
    private Vector3 zAxis = new Vector3(0, 0, 1);
    private AstroTurtle at;
    private Vector3 thunderPos;

    public int health, maxHealth;
    private SpriteRenderer _spriteRend;
    [SerializeField]
    private Color colorToTurnTo = Color.white;
    private Color defaultColor;

    private Light2D light;
    public GameObject Bonus;
    public GameObject AsteroidSpark, TurtleThunder;
    private PlanetsRotation otherPlanets;

    private void Start()
    {
        maxHealth = health;
        _spriteRend = gameObject.GetComponent<SpriteRenderer>();
        light = gameObject.GetComponentInChildren<Light2D>();
        defaultColor = _spriteRend.material.color;
        otherPlanets = FindObjectOfType<PlanetsRotation>(); //solo saca un boom
        at = FindObjectOfType<AstroTurtle>();
    }

    void Update()
    {
        transform.RotateAround(turtleGod.transform.position, zAxis, speed * Time.deltaTime);
        thunderPos = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 7.5f, gameObject.transform.position.z);
        if (at.astroSpark == true)
            StartCoroutine(DeathStar());
    }

    public void GetDamage(int damage)
    {
        health -= damage;
        _spriteRend.color = colorToTurnTo;
        light.enabled = false;
            Invoke("ResetColor", .2f);

        if (health <= 0)
        {
            Instantiate(Bonus, gameObject.transform.position, Quaternion.identity);
            at.astroSpark = true;
            gameObject.SetActive(false);
            health = maxHealth;
        }
            
    }
 
    void ResetColor() //used for back to sprite original color
    {
        light.enabled = true;
        _spriteRend.color = defaultColor;
    }

    IEnumerator DeathStar() //when an asteroid shield is destroyed, the other 2 instantiate a lazer
    {
        AsteroidSpark.SetActive(true);
        at.astroSpark = false;
        yield return new WaitForSeconds(2f);
        AsteroidSpark.SetActive(false);
        speed = 0f;
        Instantiate(TurtleThunder, thunderPos, Quaternion.identity);
        yield return new WaitForSeconds(3f);
        speed = 20;
    }
}
