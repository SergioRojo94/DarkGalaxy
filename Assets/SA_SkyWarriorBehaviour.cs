using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SA_SkyWarriorBehaviour : MonoBehaviour
{
    //used for Sky Warrior's Special Attack

    //this attack work similar to 'PlayerShooting' script
    [System.Serializable]
    public class Guns
    {
        public GameObject rightGun, leftGun, centralGun;
    }
    [Tooltip("second projectile prefab")]
    public GameObject projectileObject;
    public Guns guns;
    void Start()
    {
        StartCoroutine("NewShots");
    }

   IEnumerator NewShots()
    {
        yield return new WaitForSeconds(1.5f);
        CreateLazerShot(projectileObject, guns.centralGun.transform.position, Vector3.zero);
        CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -5));
        CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 5));
        CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -10));
        CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 10));
        CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 15));
        CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -15));
        CreateLazerShot(projectileObject, guns.leftGun.transform.position, new Vector3(0, 0, 25));
        CreateLazerShot(projectileObject, guns.rightGun.transform.position, new Vector3(0, 0, -25));
        Destroy(gameObject);
    }

    void CreateLazerShot(GameObject lazer, Vector3 pos, Vector3 rot) //translating 'pooled' lazer shot to the defined position in the defined rotation
    {
        Instantiate(lazer, pos, Quaternion.Euler(rot));
    }
}
