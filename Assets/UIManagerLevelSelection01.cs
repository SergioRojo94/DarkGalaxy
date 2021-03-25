using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManagerLevelSelection01 : MonoBehaviour
{
    public Text starsText;
    public Button finalBattleButton;

    private int finalBattle;

    private void Awake()
    {
        finalBattle = PlayerPrefs.GetInt("FinalBattle1");
        if (finalBattle == 1)
        {
            finalBattleButton.gameObject.SetActive(false);
        }
    }
    private void Update()
    {
        UpdateStarsUI();//TODO Not put inside the Update method later
    }

    public void UpdateStarsUI()
    {
        int sum = 0;

        for (int i = 1; i < 29; i++)
        {
            sum += PlayerPrefs.GetInt("Lv" + i.ToString());//Add the level 1 stars number, level 2 stars number.....
        }

        starsText.text = sum + "/" + 87;
        if (sum == 87)
        {
            PlayerPrefs.SetInt("ObtainED", 1);
            PlayerPrefs.SetInt("EDRewardCanvas", 1);
        }
    }
}
