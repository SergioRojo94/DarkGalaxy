using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;

//this script is associated with "objpanel" in huntlevels, showing the amount of enemies hunted and controlling the flow of special enemies left
public class EnemyHunted : MonoBehaviour
{
    private Player player;
    private LevelController lc;
    public TextMeshProUGUI countText;
    void Start()
    {
 
        lc = FindObjectOfType<LevelController>();
        player = FindObjectOfType<Player>();
    }

    void Update()
    {
        StringBuilder stringBuilder = new StringBuilder().Append(lc.enemyHunted).Append(" / ").Append(lc.enemyGoalHunted);
        countText.text = stringBuilder.ToString();
        if (lc.enemyHunt == true)
        {
          
            if (lc.enemyHunted == lc.enemyGoalHunted)
                lc.MissionCompleted();
        }
      
    }
}
