using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchPlayer : MonoBehaviour //used for choose Player in MainMenu
{
    private GameObject[] switchPlayer;
    private int index;

    void Start()
    {
        index = PlayerPrefs.GetInt("PlayerSelec");
        switchPlayer = new GameObject[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
            switchPlayer[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in switchPlayer)
            objX.SetActive(false);

        if (switchPlayer[index])
            switchPlayer[index].SetActive(true);
    }

    public void BtnLeftChoose()
    {
        switchPlayer[index].SetActive(false);
        index--;
        FindObjectOfType<SFXManager>().Play("PlayerSelection");
        if (index < 0)
            index = switchPlayer.Length - 1;
        switchPlayer[index].SetActive(true);
    }

    public void BtnRightChoose()
    {
        switchPlayer[index].SetActive(false);
        index++;
        FindObjectOfType<SFXManager>().Play("PlayerSelection");
        if (index == switchPlayer.Length)
            index = 0;
        switchPlayer[index].SetActive(true);
    }


    public void LoadScene()
    {
        PlayerPrefs.SetInt("PlayerSelec", index);
    }
}
