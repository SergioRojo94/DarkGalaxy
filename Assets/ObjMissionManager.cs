using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;

public class ObjMissionManager : MonoBehaviour
{
    public TextMeshProUGUI countText;
    private LevelController lc;
    void Start()
    {
        lc = FindObjectOfType<LevelController>();
    }
    void Update()
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append(Player.instance.objMissionAmount).Append(" / ").Append(lc.objMissionGoal);
        countText.text = stringBuilder.ToString();
        MissionEnd();
    }

    public void MissionEnd()
    {
        if (Player.instance.objMissionAmount == lc.objMissionGoal)
        {
            Debug.Log("cantidad conseguida");
            lc.MissionCompleted();
        }        
    }
}
