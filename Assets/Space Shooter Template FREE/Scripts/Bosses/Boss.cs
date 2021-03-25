using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Boss : MonoBehaviour
{
    #region FIELDS
    [Tooltip("Health points in integer")]
    protected int health;
    protected int maxHealth;

    //public Slider enemyHealthBar;
    //public GameObject healthBarCanvas;

    public bool _isDead = false;
    [Tooltip("VFX prefab generating after destruction")]
    public GameObject destructionVFX;
    public GameObject hitEffect;

    [Tooltip("Enemy's projectile prefab")]
    public GameObject Projectile;
    #endregion

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GetDamage(int damage)
    {
        health -= damage;
        Debug.Log("Health" + health);
        if (health <= 0)
            Destruction();
        else
            Instantiate(hitEffect, transform.position, Quaternion.identity, transform);
    }

    void Destruction()
    {
        Instantiate(destructionVFX, transform.position, Quaternion.identity);
        Destroy(gameObject);
        Debug.Log("estoy dead");
        _isDead = true;
    }
}
