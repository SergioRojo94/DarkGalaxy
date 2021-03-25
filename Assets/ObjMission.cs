using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjMission : MonoBehaviour
{
   private void OnTriggerEnter2D(Collider2D collision) 
    {
        if (collision.tag == "Player") 
        {
            //Increase ObjMission Counter
            Player.instance.objMissionAmount++;
            FindObjectOfType<SFXManager>().Play("TakeBonus");
            Destroy(gameObject);
        }
    }
}
