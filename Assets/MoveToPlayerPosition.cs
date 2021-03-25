using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveToPlayerPosition : MonoBehaviour
{
    public float speed;
    private Vector3 playerPos; //we need player position in order to throw an asteroid to the player

    void Start()
    {
        playerPos = Player.instance.transform.position;
    }

    void Update()
    {
        transform.Translate(playerPos * speed * Time.deltaTime);
    }
}
