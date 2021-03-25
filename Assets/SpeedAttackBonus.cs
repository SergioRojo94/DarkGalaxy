using System.Collections;
using UnityEngine;

public class SpeedAttackBonus : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            FindObjectOfType<SFXManager>().Play("TakeBonus");
            Player.instance.IncreaseAttackSpeed();
            Destroy(gameObject);
        }
    }
}
