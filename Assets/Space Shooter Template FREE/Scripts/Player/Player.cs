using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// This script defines which sprite the 'Player" uses and its health.
/// </summary>

public class Player : MonoBehaviour
{
    public GameObject destructionFX, Smoke;
    public Canvas gameOverCanvas;
    private DissapearCanvas canvas;
    public static Player instance;
    public SpriteRenderer _playerSprite;
    public Animator _anim;
    public GameObject shield, temporalShield;
    private PlayerShooting pShooting;
    public Color speedIncreaseColor = new Color(255,29,4,255);
    public Color bigProjectileColor = new Color(0, 255, 123, 255);
    public int bigBonusCount; //for avoid too much size
    public static bool shieldOn = false;
    public static bool temporalShieldOn = false;
    public GameObject specialAttackProjectile;
    //private LevelController lc;

    public int objMissionAmount = 0; //amount of object mission in certain levels
    public int initialHealth;

    #region stats of the ship, used in shop
    public int damage;
    public int fireRate;
    public int projectile;
    public int Health = 1;
    public int maxPower;
    public int specialAttack;
    public string nameShip;

    public bool skins; 

    public bool coinButton, eurButton, gemButton;
    public float coinPrice, eurPrice, gemPrice;
    #endregion

    #region for locked/unlocked ships
    public bool unlocked;//Default value is false;
    private Color black = new Color(0, 0, 0);
    private Color white = new Color(255, 255, 255);
    public GameObject Engine, StartButton;
    public GameObject OuterSpaceName, AsteroidNebulaName; //we need the name of the world that is activated for not let active the start button with initial ship in case of changing ship.

    private int unlockGR, unlockAN, unlockIS, unlockSH; //control if ships have been bought in ShopShip --first set
    private int unlockCR, unlockSW, unlockBH, unlockGS, unlockES; //second set
    private int unlockIWelcome, equipIWelcome, unlockCupidN, equipCupidN, unlockCGrauss, equipCGrauss; //skins
    #endregion

    void Start()
    {
       
        temporalShield.SetActive(false);
        temporalShieldOn = false;
        _playerSprite = GetComponentInChildren<SpriteRenderer>();
        _anim = GetComponent<Animator>();
        pShooting = FindObjectOfType<PlayerShooting>();
        canvas = FindObjectOfType<DissapearCanvas>();
        initialHealth = Health;
        bigBonusCount = 0;

        #region  //unlock ships when purchased 
        //first set
        unlockGR = PlayerPrefs.GetInt("ObtainGalaxyRazor");
        unlockAN = PlayerPrefs.GetInt("ObtainApacheNebula");
        unlockIS = PlayerPrefs.GetInt("ObtainIronScarab");
        unlockSH = PlayerPrefs.GetInt("ObtainSpaceHawk");

        unlockCR = PlayerPrefs.GetInt("ObtainCosmosRanger");
        unlockSW = PlayerPrefs.GetInt("ObtainSkyWarrior");
        unlockBH = PlayerPrefs.GetInt("ObtainBiohazard");
        unlockGS = PlayerPrefs.GetInt("ObtainGrauss");
        unlockES = PlayerPrefs.GetInt("ObtainED");
        //second set

        //skins
        unlockIWelcome = PlayerPrefs.GetInt("ObtainInitialWelcome");
        equipIWelcome = PlayerPrefs.GetInt("InitialSoldierSkin");
        unlockCupidN = PlayerPrefs.GetInt("ObtainCupidNebula");
        equipCupidN = PlayerPrefs.GetInt("ApacheNebulaSkin");
        unlockCGrauss = PlayerPrefs.GetInt("ObtainCosmosGrauss");
        equipCGrauss = PlayerPrefs.GetInt("GraussSkin");
        #endregion


        if (SceneManager.GetActiveScene().name == "MainMenu" && unlocked == false) ///just for active ships unlocked in Main Menu
        {
            _playerSprite.color = black;
            pShooting.enabled = false;
            Engine.SetActive(false);
            StartButton.SetActive(false);
        }
        if (nameShip == "Initial Soldier" && equipIWelcome == 1)
        {
            unlocked = true;
            Player truePlayer = transform.GetChild(1).GetComponent<Player>();
            truePlayer.unlocked = true;
        }
        if (nameShip == "Galaxy Razor" && unlockGR == 1)       //first set
            unlocked = true;
        else if(nameShip == "Apache Nebula" && unlockAN == 1)
        {
            unlocked = true;
            Player realPlayer = transform.GetChild(0).GetComponent<Player>();
            realPlayer.unlocked = true;
            if (equipCupidN == 1)
            {
                Player truePlayer = transform.GetChild(1).GetComponent<Player>();
                if (truePlayer == null)
                {
                    Debug.Log("esta null");
                }
                truePlayer.unlocked = true;
            }
        }

        else if  (nameShip == "Iron Scarab" && unlockIS == 1)
            unlocked = true;
        else if (nameShip == "Star Hawk" && unlockSH == 1)
            unlocked = true;

        else if (nameShip == "Cosmos Ranger" && unlockCR == 1)   //second set
            unlocked = true;
        else if (nameShip == "Sky Warrior" && unlockSW == 1)
            unlocked = true;
        else if (nameShip == "Biohazard" && unlockBH == 1)
            unlocked = true;
        else if (nameShip == "Grauss" && unlockGS == 1)
        {
            unlocked = true;
            Player realPlayer = transform.GetChild(0).GetComponent<Player>();
            realPlayer.unlocked = true;
            Debug.Log("Dale aki 0");
            if (equipCGrauss == 1)
            {
                Debug.Log("Dale aki 1");
                Player truePlayer = transform.GetChild(1).GetComponent<Player>();
                truePlayer.unlocked = true;
            }
        }
    }

    private void Update() //perhaps this could be optimized in 'SwitchPlayer'
    {
       if (SceneManager.GetActiveScene().name == "MainMenu" && unlocked == false)
        {
            _playerSprite.color = black;
            pShooting.enabled = false;
            Engine.SetActive(false);
            StartButton.SetActive(false);
        }
        if (unlocked == true)
        {
            _playerSprite.color = white;
            pShooting.enabled = true;
            Engine.SetActive(true);
            if (StartButton != null)
            {
                if (OuterSpaceName.activeInHierarchy == true && unlocked == true)
                {
                    StartButton.SetActive(true);
                }

                else
                {
                    if (PlayerPrefs.GetInt("UnlockWorld2") == 1 && AsteroidNebulaName.activeInHierarchy == true)
                    {
                        StartButton.SetActive(true);
                    }
                    else StartButton.SetActive(false);
                }
            }
                
        }
    }
    private void Awake()
    {
        if (instance == null) 
            instance = this;
    }

    //method for damage proceccing by 'Player'
    public void GetDamage(int damage)   
    {
        if (temporalShieldOn == true)
            return;
        if (shieldOn == true)
            ShieldDown();
        else if (shieldOn == false)
        {
            Health--;
            if (Health == 0)
                Destruction();
             if (initialHealth > 1)
            {
                switch (Health)
                {
                    case 0:
                        Destruction();
                        break;
                    case 1:
                        _anim.SetTrigger("1Life"); //change ship sprite and grants temporal shield
                        //Smoke.SetActive(true);
                        TemporalShieldUp();
                        break;
                }
                
            }
                //Hacer animación "desmontar nave" -> segundos de invulnerabilidad???????
        }
       
    }    
    //'Player's' destruction procedure
    void Destruction()
    {
       // Vibrator.Vibrate(); //phone vibes when player is dead
        Instantiate(destructionFX, transform.position, Quaternion.identity); //generating destruction visual effect and destroying the 'Player' object
        FindObjectOfType<SFXManager>().Play("PlayerDead");
        _playerSprite.enabled = false;
        pShooting.shootingIsActive = false;
        // StartCoroutine(WaitforCanvas());
        canvas.Dark();
    }

    // Activate and desactivate shields
    public void ShieldUp()
    {
        shield.SetActive(true);
        FindObjectOfType<SFXManager>().Play("ShieldOn");
        shieldOn = true;
    }

    public void ShieldDown()
    {
        shield.SetActive(false);
        FindObjectOfType<SFXManager>().Play("ShieldOff");
        shieldOn = false;
    }

    public void TemporalShieldUp()
    {
        temporalShield.SetActive(true);
        FindObjectOfType<SFXManager>().Play("ShieldOn");
        temporalShieldOn = true;
        StartCoroutine(temporalShieldIsUp());
    }

    private IEnumerator temporalShieldIsUp()
    {
        yield return new WaitForSeconds(6f);
        temporalShield.SetActive(false);
        FindObjectOfType<SFXManager>().Play("ShieldOff");
        temporalShieldOn = false;
    }

    public void IncreaseAttackSpeed() //used in SpeedAttackBonus
    {
        PlayerShooting.instance.fireRate = PlayerShooting.instance.fireRate * 1.5f; 
        pShooting.guns.centralGun.transform.localScale = new Vector3(3, 3, 3); //Change color and size of the shoots
        pShooting.guns.centralGun.GetComponent<ParticleSystem>().startColor = speedIncreaseColor;
        pShooting.guns.leftGun.transform.localScale = new Vector3(3, 3, 3);
        pShooting.guns.leftGun.GetComponent<ParticleSystem>().startColor = speedIncreaseColor;
        pShooting.guns.rightGun.transform.localScale = new Vector3(3, 3, 3);
        pShooting.guns.rightGun.GetComponent<ParticleSystem>().startColor = speedIncreaseColor;
        StartCoroutine(ReturnToNormality());
    }


    private IEnumerator ReturnToNormality()
    {
         yield return new WaitForSeconds(5f); //return to previous variables
        PlayerShooting.instance.fireRate = PlayerShooting.instance.fireRate / 1.5f;
        pShooting.guns.centralGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.centralGun.GetComponent<ParticleSystem>().startColor = new Color(255,255,255,255);
        pShooting.guns.leftGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.leftGun.GetComponent<ParticleSystem>().startColor = new Color(255, 255, 255, 255);
        pShooting.guns.rightGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.rightGun.GetComponent<ParticleSystem>().startColor = new Color(255, 255, 255, 255);
    }

    public void BigProjectile()
    {
        if (bigBonusCount <2) { 
        pShooting.projectileObject.transform.localScale = pShooting.projectileObject.transform.localScale * 2f;
        pShooting.guns.centralGun.transform.localScale = new Vector3(3, 3, 3); //Change color and size of the shoots
        pShooting.guns.centralGun.GetComponent<ParticleSystem>().startColor = bigProjectileColor;
        pShooting.guns.leftGun.transform.localScale = new Vector3(3, 3, 3);
        pShooting.guns.leftGun.GetComponent<ParticleSystem>().startColor = bigProjectileColor;
        pShooting.guns.rightGun.transform.localScale = new Vector3(3, 3, 3);
        pShooting.guns.rightGun.GetComponent<ParticleSystem>().startColor = bigProjectileColor;
        bigBonusCount++;
        StartCoroutine(NormalSizeProjectile());
        }
    }

    IEnumerator NormalSizeProjectile()
    {
        yield return new WaitForSeconds(8);
        pShooting.projectileObject.transform.localScale = pShooting.projectileObject.transform.localScale / 2f;
        pShooting.guns.centralGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.centralGun.GetComponent<ParticleSystem>().startColor = new Color(255, 255, 255, 255);
        pShooting.guns.leftGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.leftGun.GetComponent<ParticleSystem>().startColor = new Color(255, 255, 255, 255);
        pShooting.guns.rightGun.transform.localScale = new Vector3(1, 1, 1);
        pShooting.guns.rightGun.GetComponent<ParticleSystem>().startColor = new Color(255, 255, 255, 255);
        bigBonusCount--;
    }

    //method created for verify if all the diamonds are collected in level controllers
    /*public void MissionEnd()
    {
        if (objMissionAmount == lc.objMissionGoal)
        {
            Debug.Log("cantidad conseguida");
            lc.MissionCompleted();
        }
    }*/
}
















