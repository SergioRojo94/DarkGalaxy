using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHuntedShip : MonoBehaviour
{
    private Enemy _enemy;
    private LevelController lc;
    void Start()
    {
        _enemy = GetComponent<Enemy>();
        if (_enemy == null)
            Debug.Log("No hay enemy");
    }

    void Update()
    {
        if (_enemy == null)
            Debug.Log("No hay enemy");
        if (_enemy.health != 0)
            Debug.Log("Health != 0");
        if (_enemy.health <= 0)
        {
            lc.enemyHunted++;
            Debug.Log("Enemigos destruidos: " + lc.enemyHunted);
        }
    }
}
