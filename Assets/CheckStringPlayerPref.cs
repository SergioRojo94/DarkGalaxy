using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CheckStringPlayerPref : MonoBehaviour
{
    public string playerPref;
    public Button playButton;
    void Start()
    {
        if (PlayerPrefs.GetInt(playerPref) == 1)
        {
            playButton.interactable = true;
        }
        else
        {
            playButton.interactable = false;
        }
    }
}
