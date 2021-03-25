using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EldritchDragon : MonoBehaviour
{
    private SpriteRenderer _spriteRend;
    private Collider2D _collider;
    private Animator _anim;
    public Transform pointA1, pointA; //place where ED goes when do special Attacks
    public Vector3 p1, p2, p3, p4, p5, p6;
    protected Vector3 ultraFlamepos = new Vector3(0, -5,0);
    protected Vector3 flamePos = new Vector3(0, -25, 0);
    protected Vector3 shadowPos = new Vector3(0, -13.93f, 0);
    

    public int health;
    public int maxHealth;
    public Slider healthBar;
    public GameObject healthBarCanvas;

    public bool _isDead = false;
    public bool patrol = true;
    //public bool _ultraFlame = false;
    public int contador = 0; //used for do UltraFlame Attack

    public GameObject destructionVFX;
   
    private SpriteRenderer rend; //para cambiar el color al ser golpeado

    [SerializeField]
    private Color colorToTurnTo = Color.white;
    [SerializeField]
    private Color colorToTentacle = Color.white; //used when does DarkTentacle Attack
    [SerializeField]
    private Color colorToHitWhenCalamardo; //used when gets damage in Calamardo Mode
    [SerializeField]
   /* private Color colorToUltraFlame = Color.white; //used when does UltraFlame
    [SerializeField]
    private Color colorToHitWhenUltraFlame; //used when gets damage in UltraFlame Mode -- Al solaparse con otras rutinas no funciona bien */
    private Color defaultColor;
    [SerializeField]
    public Color colorNeb1;
    [SerializeField]
    public Color colorNeb2;
    public GameObject Nebula1, Nebula2;

    public GameObject Projectile;
    public GameObject DarkBall, DarkTentacles;
    public GameObject UltraFlame, Flame;
    public GameObject DragonShilouette;
    private SpriteRenderer neb1, neb2;
    protected Vector3 currentTarget;

    void Start()
    {
        _spriteRend = gameObject.GetComponentInChildren<SpriteRenderer>();
        _collider = gameObject.GetComponent<PolygonCollider2D>();
        _anim = gameObject.GetComponentInChildren<Animator>();
       // _anim = GetComponentInChildren<Animator>();
        defaultColor = _spriteRend.material.color;
        rend = GetComponentInChildren<SpriteRenderer>();
        neb1 = Nebula1.GetComponent<SpriteRenderer>();
        neb2 = Nebula2.GetComponent<SpriteRenderer>();
        StartCoroutine(Appears());
    }

    void Update()
    {
        currentTarget = gameObject.transform.position;
        healthBar.maxValue = maxHealth;
        healthBar.value = health;
    }

    private IEnumerator Appears()
    {
        yield return new WaitForSeconds(17f);
        Instantiate(DragonShilouette, shadowPos, Quaternion.identity);
        yield return new WaitForSeconds(3f);
        neb1.color = colorNeb1;
        neb2.color = colorNeb2;
        yield return new WaitForSeconds(1f);
        _spriteRend.enabled = true;
        _collider.enabled = true;
        _anim.SetTrigger("Roar");
        FindObjectOfType<SFXManager>().Play("EDShout");
        healthBarCanvas.SetActive(true);
        StartCoroutine(DarkBallC());
    }

    void ResetColor() //used for back to sprite original color
    {
        _spriteRend.material.color = defaultColor;
    }

    void ResetColorTentacles() //used for back to sprite tentacles routine color
    {
        _spriteRend.material.color = colorToTentacle;
    }

    public void GetDamage(int damage)
    {
        health -= damage;
 
        if (patrol == true)
        {
            _spriteRend.material.color = colorToTurnTo;
            Invoke("ResetColor", .4f);
        }
        else
        {
            _spriteRend.material.color = colorToHitWhenCalamardo;
            Invoke("ResetColorTentacles", .4f);
        }

        if (health <= 0)
            Destruction();
    }

   

    void CreateDarkBall(GameObject darkball, Vector3 pos, Quaternion q) 
    {
        FindObjectOfType<SFXManager>().Play("EDDarkBall");
        Instantiate(darkball, currentTarget, q);
    }

    void CreateDarkTentacles(GameObject darkTentacle, Vector3 pos, Quaternion q)
    {
        Instantiate(darkTentacle, CreateDarkTentacles(), q);
        FindObjectOfType<SFXManager>().Play("EDTentacles");
    }

    void CreateUltraFlame(GameObject ultraFlame, Vector3 pos, Quaternion q)
    {
        Instantiate(ultraFlame, ultraFlamepos, q);
    }
    private IEnumerator DarkBallC()
    {
        StopCoroutine(MegaFlame());
        ResetColor();
       // _ultraFlame = false;
        if (contador == 5)
        {
            StopCoroutine(DarkBallC());
            Bahamut();
        }
        patrol = true;
        for (int i = 0; i < 7; i++)
        {
            yield return new WaitForSeconds(6f);
            CreateDarkBall(DarkBall, currentTarget, Quaternion.identity);
        }
        contador++;
       // Debug.Log("Contador:" + contador);
        StopCoroutine(DarkBallC());
        StartCoroutine(DarkTentaclesC());
    }

    private IEnumerator DarkTentaclesC()
    {
      //  Debug.Log("DarkTentacles1");
        if (contador == 5)
        {
            StopCoroutine(DarkTentaclesC());
            Bahamut();
        }
        patrol = false;
        _spriteRend.material.color = colorToTentacle;
        StartCoroutine(Move(pointA1));
        yield return new WaitForSeconds(3f);
        for (int i = 0; i < 6; i++)
        {
            CreateDarkTentacles(DarkTentacles, CreateDarkTentacles(), Quaternion.identity);
            yield return new WaitForSeconds(2.5f);
        }
        StopCoroutine(DarkTentaclesC());
        Invoke("ResetColor", .4f);
        StartCoroutine(DarkBallC());
        Move(pointA);
        contador++;
       // Debug.Log("Contador:" + contador);
    }

    private IEnumerator MegaFlame()
    {
        patrol = false;
        ResetColor();
       // _spriteRend.material.color = colorToUltraFlame;
       // _ultraFlame = true;
        StopCoroutine(DarkBallC());
        StopCoroutine(DarkTentaclesC());
        //ED moves to A1Point , charge his mega flame and shoot
        StartCoroutine(Move(pointA1));
        yield return new WaitForSeconds(3);
        CreateUltraFlame(UltraFlame, ultraFlamepos, Quaternion.identity);
        FindObjectOfType<SFXManager>().Play("EDSA1");
        yield return new WaitForSeconds(2f);
        FindObjectOfType<SFXManager>().Play("EDSA2");
        CreateUltraFlame(Flame, flamePos, Quaternion.identity);
   
        contador = 0;
        yield return new WaitForSeconds(4);
        Move(pointA);  
        StartCoroutine(DarkBallC());

        yield break;
    }

    private void Bahamut() //cada vez que se le quite 400 de vida dispara la ultraFlame
    {
       StartCoroutine(MegaFlame());
    }
    private int RandomNumber() //using for choose randomly the position where DarkTentacles appear
    {
        int random = UnityEngine.Random.Range(1, 7);
        return random;
    }

    private Vector3 CreateDarkTentacles()
    {
        Vector3 pos = new Vector3();
        switch (RandomNumber())
        {
            case 1:
                pos = p1;
                break;
            case 2:
                pos = p2;
                break;
            case 3:
                pos = p3;
                break;
            case 4:
                pos = p4;
                break;
            case 5:
                pos = p5;
                break;
            case 6:
                pos = p6;
                break;
        }
        return pos;
    }

    IEnumerator Move(Transform point) // ED goes to APoint when do special Attacks
    {
        _spriteRend.enabled = false;
        yield return new WaitForSeconds(0.5f);
        Instantiate(DragonShilouette, shadowPos, Quaternion.identity);
        yield return new WaitForSeconds(2);       
       transform.position = pointA1.transform.position;
        _spriteRend.enabled = true;
        yield return new WaitForSeconds(2f);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            if (Projectile.GetComponent<Projectile>() != null)
                Player.instance.GetDamage(Projectile.GetComponent<Projectile>().damage);
            else
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
