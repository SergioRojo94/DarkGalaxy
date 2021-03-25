using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AstroTurtle : MonoBehaviour
{
    public bool patrol = true;
    private Color defaultColor;
    private SpriteRenderer _spriteRend;
    private Collider2D _collider;
    private Animator _anim;

    protected Vector3 shadowPos = new Vector3(0, -13.93f, 0);
    [SerializeField]
    public Color colorNeb1;
    [SerializeField]
    public Color colorNeb2;
    private SpriteRenderer neb1, neb2;
    public GameObject Nebula1, Nebula2;

    public int health;
    public int maxHealth;
    public Slider healthBar;
    public GameObject healthBarCanvas;
    public bool _isDead = false;

    public GameObject TurtleShilouette;
    public GameObject Asteroid1, Asteroid2, Asteroid3, Earth, GiantAsteroid;
    public bool astroSpark = false;
    public bool regenerateAsteroid = false;
    private int damageContador = 0; //check if player can avoid A'Cthuin asteroid regeneration
    public GameObject destructionVFX;

    [SerializeField]
    private Color colorToTurnTo;
    [SerializeField]
    private Color colorWhenThrowAsteroid;
    private int contador; //used in asteroid regeneration


    void Start()
    {
        healthBar.maxValue = maxHealth;
        healthBar.value = health;
        contador = 0;
        _spriteRend = gameObject.GetComponentInChildren<SpriteRenderer>();
        _collider = gameObject.GetComponent<PolygonCollider2D>();
        _anim = gameObject.GetComponentInChildren<Animator>();
        defaultColor = _spriteRend.material.color;
        neb1 = Nebula1.GetComponent<SpriteRenderer>();
        neb2 = Nebula2.GetComponent<SpriteRenderer>();
        StartCoroutine(Appears());
    }

    void Update()
    {
        healthBar.maxValue = maxHealth;
        healthBar.value = health;
    }

    private IEnumerator Appears()
    {
        yield return new WaitForSeconds(23f);
        Instantiate(TurtleShilouette, shadowPos, Quaternion.identity);
        yield return new WaitForSeconds(3f);
        neb1.color = colorNeb1;
        neb2.color = colorNeb2;
        yield return new WaitForSeconds(1f);
        _spriteRend.enabled = true;
        _collider.enabled = true;
        Asteroid1.SetActive(true);
        Asteroid2.SetActive(true);
        Asteroid3.SetActive(true);
        Earth.SetActive(true);
       // _anim.SetTrigger("Roar");
        healthBarCanvas.SetActive(true);
        StartCoroutine(AsteroidAttack());
    }

    private IEnumerator AsteroidAttack() 
    {
        
        while(true)
        {
            yield return new WaitForSeconds(16.5f);
            _spriteRend.color = colorWhenThrowAsteroid;
            yield return new WaitForSeconds(2.5f);
            Instantiate(GiantAsteroid, gameObject.transform.position, Quaternion.identity);
            ResetColor();
            contador++;
            if (contador == 3) //check if asteroids are destroyed. If true, player has a chance to avoid Boss regenerate the asteroids.
            {
                contador = 0;
                if (Asteroid1.activeInHierarchy)
                {
                    Debug.Log("Asteroide 1 activo");
                    
                }
                else
                {
                    Debug.Log("Asteroide 1 no activo");
                    StartCoroutine(Regeneration());
                    if (damageContador >= 20)
                    {
                        damageContador = 0;
                        // animación grito
                    }
            
                }
                if (Asteroid2.activeInHierarchy)
                {
                    Debug.Log("Asteroide 2 activo");
                }
                else
                {
                    Debug.Log("Asteroide 2 no activo");
                    StartCoroutine(Regeneration());
                    if (damageContador >= 20)
                    {
                        damageContador = 0;
                        // animación grito
                    }

                }
                if (Asteroid3.activeInHierarchy)
                {
                    Debug.Log("Asteroide 3 activo");

                }
                else
                {
                    Debug.Log("Asteroide 3 no activo");
                    StartCoroutine(Regeneration());
                    if (damageContador >= 20)
                    {
                        damageContador = 0;
                        // animación grito
                    }
                }
            }
        }
    }

    private IEnumerator Regeneration()
    {
        Debug.Log("Regenerando..."); //CAMBIAR COLOR TORTUGA
        regenerateAsteroid = true;
        _anim.SetBool("Hidden", true);
       
        yield return new WaitForSeconds(10);
        if (damageContador < 20)
        {
           // damageContador = 0;
            Asteroid1.SetActive(true);
            Asteroid2.SetActive(true);
            Asteroid3.SetActive(true);
            Debug.Log("Activaos");
        }
        else
        {
            //damageContador = 0;
            //animación grito
            Debug.Log("Te la he hecho fresca");
        }
        yield return new WaitForSeconds(1);
        regenerateAsteroid = false;
        _anim.SetBool("Hidden", false);
        damageContador = 0;
        Debug.Log("Se ha regenerado...");
    }
    void ResetColor() //used for back to sprite original color
    {
        _spriteRend.color = defaultColor;
    }


    public void GetDamage(int damage)
    {
        
        health -= damage;
        _spriteRend.color = colorToTurnTo; //no one knows why this works and not in "EldritchDragon" (smthing with materials I guess)
        Invoke("ResetColor", .4f);
        if (regenerateAsteroid == true)
        {
            damageContador++;
            Debug.Log("Damage Contador: " + damageContador); //cuando interrumpes la regenración sigue sumando, aunque parece que funciona
        }
        if (health <= 0)
        Destruction();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
                Player.instance.GetDamage(1);
        }
    }


    void Destruction()
    {
        Destroy(healthBarCanvas.gameObject);
        Instantiate(destructionVFX, transform.position, Quaternion.identity);
        _isDead = true;
        Destroy(gameObject);

    }
}
