using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class NeedKForContinue : MonoBehaviour
{
    //this script check if the player has enough coins to start a final battle
    private float coins;
    public Button goButton, checkButton;
    public Image cross;
    public float coinsToPay;
    public int finalBattle; //check if final battle is unlocked
    private int hearts;
    void Start()
    {
        Debug.Log("pp" + PlayerPrefs.GetInt("Lvl28Finish"));
            finalBattle = PlayerPrefs.GetInt("FinalBattle1");
        hearts = PlayerPrefs.GetInt("Hearts");
            if (finalBattle == 1)
        {
            checkButton.enabled = false;
            checkButton.gameObject.SetActive(false);
        }
            else
        {
            coins = PlayerPrefs.GetFloat("Coins");
            if (coins < coinsToPay)
            {
                goButton.interactable = false;
                cross.enabled = true;
            }
            else
            {
                goButton.interactable = true;
                cross.enabled = false;
            }
        }
           
    }

    public void LetsGo()
    {
        coins -= coinsToPay;
        PlayerPrefs.SetFloat("Coins",coins);
        PlayerPrefs.SetInt("FinalBattle1", 1);
        if (hearts < 5)
            SceneManager.LoadScene("MainMenu");
        else
        {
            SceneManager.LoadScene("1.29");
        }
    }

}
