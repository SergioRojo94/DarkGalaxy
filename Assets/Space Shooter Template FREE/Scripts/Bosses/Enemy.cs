using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

/// <summary>
/// This script defines 'Enemy's' health and behavior. 
/// </summary>
public class Enemy : MonoBehaviour {

    #region FIELDS
    [Tooltip("Health points in integer")]
    public int health;
    [Tooltip("Points given when destroyed")]
    public int points;

    [Tooltip("Enemy's projectile prefab")]
    public GameObject Projectile;

    [Tooltip("VFX prefab generating after destruction")]
    public GameObject destructionVFX;
    public GameObject hitEffect;

    private Score score;
    private LevelController lc;
    private Animator _animScore;
    private int intScore;
    private DissapearCanvas dc;
    private HypeTextManager htm; //change the 'Hype Text' on the screen when several enemies die in x time.

    public int shotChance; //probability of 'Enemy's' shooting during tha path
    public float shotTimeMin, shotTimeMax; //max and min time for shooting from the beginning of the path
    public int shotAmount = 0; //amount of lazers an enemy shoots
    public bool doubleShoot = false; //some enemies can shot 2 lasers in front of each other


    private Vector3 secondShot = new Vector3(0, 1, 0);

    public bool enemyHunted; //some enemies are hunted in any levels
    public bool motherShip = false; //certains strong enemies can "give birth" to other ships
    public GameObject[] miniwaves;
    #endregion

    #region enemies chance of loot
    public int lootBonusBigProjectile; //chance of loot bonus big projectile
    public GameObject BonusBigProjectile;
    public int lootCoins;
    public GameObject Coin;
    #endregion

    #region sound effects
    public string shotSound; //shot sound changes if the projectile enemy is stronger
    #endregion

    private void Start()
    {
        Invoke("ActivateShooting", Random.Range(shotTimeMin, shotTimeMax));
        score = FindObjectOfType<Score>();
        _animScore = score.GetComponent<Animator>();
        lc = FindObjectOfType<LevelController>();
        dc = FindObjectOfType<DissapearCanvas>();
        if (motherShip == true)
            StartCoroutine(CreateMiniWave());
    }

    //coroutine making a shot
    void ActivateShooting() 
    {
        if (Random.value < (float)shotChance / 100)                             //if random value less than shot probability, making a shot
        {
            FindObjectOfType<SFXManager>().Play(shotSound);
            if (doubleShoot == true)
            {
                Instantiate(Projectile, gameObject.transform.position, Quaternion.identity);
                Instantiate(Projectile,  secondShot, Quaternion.identity);
            }
            else if (shotAmount == 0)
                Instantiate(Projectile,  gameObject.transform.position, Quaternion.identity); 
            else
            {
                //if shotAmount > 0, shoots more than one laser
                StartCoroutine(VariousShoots());  
            }
        }
    }

    //Coroutine for shot several shoots
    IEnumerator VariousShoots() 
    {
        for (int i = 0; i < (shotAmount + 1); i++)
        {
            Instantiate(Projectile, gameObject.transform.position, Quaternion.identity);
            yield return new WaitForSeconds(0.15f);
        }
    }

    //method of getting damage for the 'Enemy'
    public void GetDamage(int damage) 
    {
        health -= damage;//reducing health for damage value, if health is less than 0, starting destruction procedure
        if (health <= 0)
            Destruction();
        else
            Instantiate(hitEffect,transform.position,Quaternion.identity,transform);
    }    

    //if 'Enemy' collides 'Player', 'Player' gets the damage equal to projectile's damage value
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

    //method of destroying the 'Enemy'
    void Destruction()                           
    {        
        if (enemyHunted == true)
            lc.enemyHunted++;
       // Debug.Log("Enemigos destruidos: " + lc.enemyHunted);
        Instantiate(destructionVFX, transform.position, Quaternion.identity);
        intScore = int.Parse(score.GetComponent<TextMeshProUGUI>().text); //aquí tenemos el score pasado a int
        intScore += points; //le sumamos los puntos del enemy al destruirlo
        _animScore.SetTrigger("WinPoint"); //el marcador se mueve de arriba abajo
        score.GetComponent<TextMeshProUGUI>().text = intScore.ToString(); //lo volvemos a pasar a String para mostrarlo por pantalla
        if (dc.hype == false)
            dc.hype = true;
        else
        {
            dc.hypeCounter++;
            dc.checkHype++;
        }
        //htm.streak = true;
        int num = RandomNumber100();
        if (num <= lootBonusBigProjectile)
        {
            Instantiate(BonusBigProjectile, transform.position, Quaternion.identity); //sonido especial para que se sepa que se ha instanciado

        }
        if (num <= lootCoins)
            Instantiate(Coin, transform.position, Quaternion.identity); //sonido especial para que se sepa que se ha instanciado
        Destroy(gameObject);
    }

    IEnumerator CreateMiniWave()
    {
        while (true)
        {
            int i = RandomNumber();
            FindObjectOfType<SFXManager>().Play("MotherShip");
            Instantiate(miniwaves[i]);
            yield return new WaitForSeconds(5.5f);
        }
  
    }

    private int RandomNumber() //using for choose randomly the miniwave that will be instantiated
    {
        int random = UnityEngine.Random.Range(0, 4);
        return random;
    }

    private int RandomNumber100()//used for chance of instantiate a bonus
    {
        int random = Random.Range(0, 101);
        return random;
    }
}
