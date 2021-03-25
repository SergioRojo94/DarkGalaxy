using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


//guns objects in 'Player's' hierarchy
[System.Serializable]
public class Guns
{
    public GameObject rightGun, leftGun, centralGun;
    [HideInInspector] public ParticleSystem leftGunVFX, rightGunVFX, centralGunVFX; 
}

public class PlayerShooting : MonoBehaviour {

    [Tooltip("shooting frequency. the higher the more frequent")]
    public float fireRate;

    [Tooltip("projectile prefab")]
    public GameObject projectileObject;

    //time for a new shot
    [HideInInspector] public float nextFire;

    [SerializeField]
    public bool inMenu = false;

    [Tooltip("current weapon power")]
    [Range(1, 4)]       //change it if you wish
    public int weaponPower = 1; 

    public Guns guns;
    public bool shootingIsActive = true; 
     public int maxweaponPower = 4; 
    public static PlayerShooting instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
    }
    private void Start()
    {
        //receiving shooting visual effects components
        guns.leftGunVFX = guns.leftGun.GetComponent<ParticleSystem>();
        guns.rightGunVFX = guns.rightGun.GetComponent<ParticleSystem>();
        guns.centralGunVFX = guns.centralGun.GetComponent<ParticleSystem>();
        if (SceneManager.GetActiveScene().name.Equals("MainMenu")) //great vfx in menu
        {
            StartCoroutine(IncreaseShot());
        }
    }

    private void Update()
    {
        if (shootingIsActive)
        {
            if (Time.time > nextFire)
            {
                MakeAShot();
                if (SceneManager.GetActiveScene().name != "MainMenu" && SceneManager.GetActiveScene().name != "ShopShip" && SceneManager.GetActiveScene().name != "SkinShop")
                {
                    FindObjectOfType<SFXManager>().Play("Shot");
                }
                nextFire = Time.time + 1 / fireRate;
            }
        }
    }

    IEnumerator IncreaseShot()
    {
        for (int j = 0; j < 100; j++)
        {
            for (int i = 0; i < maxweaponPower; i++)
            {
                
                yield return new WaitForSeconds(1f);
                weaponPower++;
                if (weaponPower > maxweaponPower)
                {
                    weaponPower = 1;
                    i = 0;
                }

            }
   
        } 
    }
    //method for a shot
    void MakeAShot() 
    {
        
        switch (weaponPower) // according to weapon power 'pooling' the defined anount of projectiles, on the defined position, in the defined rotation
        {
            case 1:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                guns.centralGunVFX.Play();
                break;
            case 2:
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, Vector3.zero);
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, Vector3.zero);
                guns.rightGunVFX.Play();
                break;
            case 3:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                break;
            case 4:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, new Vector3(0, 0, -2));
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, new Vector3(0, 0, 2));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                break;
            case 5:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 15));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -15));
                break;
            case 6:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, new Vector3(0, 5, 0));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 15));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -15));
                break;
            case 7:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -10));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 10));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 15));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -15));
                break;
            case 8:
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
                CreateLazerShot(projectileObject, guns.centralGun.transform.position, new Vector3(0, 5, 0));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -10));
                guns.leftGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 10));
                guns.rightGunVFX.Play();
                CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 15));
                CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -15));
                break;
        }
    }

    void CreateLazerShot(GameObject lazer, Vector3 pos, Vector3 rot) //translating 'pooled' lazer shot to the defined position in the defined rotation
    {
        Instantiate(lazer, pos, Quaternion.Euler(rot));
    }
}
