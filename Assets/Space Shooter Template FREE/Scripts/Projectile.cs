using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Defines the damage and defines whether the projectile belongs to the ‘Enemy’ or to the ‘Player’, whether the projectile is destroyed in the collision, or not and amount of damage.
/// </summary>

public class Projectile : MonoBehaviour {

    [Tooltip("Damage which a projectile deals to another object. Integer")]
    public int damage;

    [Tooltip("Whether the projectile belongs to the ‘Enemy’ or to the ‘Player’")]
    public bool enemyBullet;

    [Tooltip("Whether the projectile is destroyed in the collision, or not")]
    public bool destroyedByCollision;

    
    private SpecialAttackCanvas sac;
    private Player player;
    public Vector3 scale;

    private void Start()
    {
        sac = FindObjectOfType<SpecialAttackCanvas>();
        player = FindObjectOfType<Player>();
        if ((SceneManager.GetActiveScene().name == "MainMenu") && !enemyBullet) //this fix a bug of interrupt game when player projectiles are big with bonusbigprojectile
        transform.localScale = scale;
        if (enemyBullet) return;
        if ((SceneManager.GetActiveScene().buildIndex >= 6 || SceneManager.GetActiveScene().buildIndex <= 53)) //controls that player couldnt have big projectiles at start
        {
            if (player.bigBonusCount == 0)
                transform.localScale = scale;
        }
        Destroy(gameObject,12);
    }

    private void OnTriggerEnter2D(Collider2D collision) //when a projectile collides with another object
    {
        if (enemyBullet && collision.tag == "Player") //if another object is 'player' or 'enemy sending the command of receiving the damage
        {
            Player.instance.GetDamage(damage); 
            if (destroyedByCollision)
                Destruction();
        }
         if (!enemyBullet && collision.tag == "Enemy")
        {
            
            if (collision.GetComponent<Enemy>() != null)
            {
                FillSpecialAttack();
                collision.GetComponent<Enemy>().GetDamage(damage);
                if (destroyedByCollision)
                    Destruction();
            }
            else if (collision.GetComponent<PlanetsRotation>() != null)
            {
                collision.GetComponent<PlanetsRotation>().GetDamage(damage);
                if (destroyedByCollision)
                    Destruction();
            }
            else if (collision.GetComponent<EldritchDragon>() != null)
            {
                FillSpecialAttack();
                collision.GetComponent<EldritchDragon>().GetDamage(damage);
                if (destroyedByCollision)
                    Destruction();
            }
            else if (collision.GetComponent<AstroTurtle>() != null)
            {
                FillSpecialAttack();
                collision.GetComponent<AstroTurtle>().GetDamage(damage);
                if (destroyedByCollision)
                    Destruction();
            }
        }
    }

    public void FillSpecialAttack()
    {
        sac.specialAttackCount++;
        if (sac.specialAttackCount == 6)
        {
            if (sac.totalCount != 25)
            {
                sac.specialAttackCount = 0;
                sac.totalCount++;
                foreach (GameObject obj in sac.sacGO)
                {
                    sac.sacGO[sac.totalCount].SetActive(true);
                }
            }
           else 
            {
                FindObjectOfType<SFXManager>().Play("SAReady");
                sac.BtnSpecialAttackOff.SetActive(false);
                sac.BtnSpecialAttackOn.SetActive(true);
                sac.Thunder.SetActive(true);
            }
            
        }
    }


    void Destruction() 
    {
        Destroy(gameObject);
    }
}


