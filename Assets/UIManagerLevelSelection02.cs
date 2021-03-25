using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManagerLevelSelection02 : MonoBehaviour
{
    public Text starsText;
    public Button finalBattleButton;

    private int finalBattle2;

    private void Awake()
    {
        finalBattle2 = PlayerPrefs.GetInt("FinalBattle2");
        if (finalBattle2 == 1)
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

        for (int i = 29; i < 50; i++)
        {
            sum += PlayerPrefs.GetInt("Lv" + i.ToString());//Add the level 1 stars number, level 2 stars number.....
        }

        starsText.text = sum + "/" + 84;
    }
}
