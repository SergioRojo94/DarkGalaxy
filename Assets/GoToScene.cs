using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToScene : MonoBehaviour
{
    [SerializeField]
    private string scene;

    //The two next variables are used in case that the player select a skin to buy 
    [SerializeField]
    private int playerSelec;
    [SerializeField]
    private bool shopShip = false;

    public void GoTo()
    {
        if (shopShip == true)
            PlayerPrefs.SetInt("ShipForSkin", playerSelec);
        SceneManager.LoadScene(scene);
    }
}
