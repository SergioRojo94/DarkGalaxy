using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchSkin : MonoBehaviour
{
    public GameObject[] s4_1; //se ha eliminado s1 y s9
    private int index;
    public string shipArray;
    private Player _player;
    public TextMeshProUGUI shipName;
    private void Awake()
    {
        if (s4_1[0].name == "S1")
            s4_1 = FindObjectOfType<SkinManager>().ship1;
        if (s4_1[0].name =="S4")
        s4_1 = FindObjectOfType<SkinManager>().ship4;
        if (s4_1[0].name == "S9")
            s4_1 = FindObjectOfType<SkinManager>().ship9;
    }
    void Start()
    {
        index = 0;
        _player = FindObjectOfType<Player>();
    }

    private void Update()
    {
        _player = FindObjectOfType<Player>();
        shipName.text = _player.nameShip;
    }

    public void BtnLeftChoose()
    {

        s4_1[index].SetActive(false);
        index--;
        FindObjectOfType<SFXManager>().Play("PlayerSelection");
        if (index < 0)
            index = s4_1.Length - 1;
        s4_1[index].SetActive(true);
    }

    public void BtnRightChoose()
    {
        s4_1[index].SetActive(false);
        index++;
        FindObjectOfType<SFXManager>().Play("PlayerSelection");
        if (index == s4_1.Length)
            index = 0;
        s4_1[index].SetActive(true);
    }

    public void SelectSkin()
    {
        _player = FindObjectOfType<Player>();
        switch (_player.name)
        {
            case "1 - Initial Soldier":
                PlayerPrefs.SetInt("InitialSoldierSkin", 0);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 0);
                break;
            case "InitialWelcome ":
                PlayerPrefs.SetInt("InitialSoldierSkin", 1);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 0);
                break;
            case "4- Apache Nebula":
                PlayerPrefs.SetInt("ApacheNebulaSkin", 0);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 3);
                break;
            case "4- Cupid Nebula":
                PlayerPrefs.SetInt("ApacheNebulaSkin", 1);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 3);
                break;
            case "9 - Grauss":
                PlayerPrefs.SetInt("GraussSkin", 0);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 8);
                break;
            case "9 - Cosmos Grauss":
                PlayerPrefs.SetInt("GraussSkin", 1);
                PlayerPrefs.SetInt("FromShop", 1);
                PlayerPrefs.SetInt("PlayerSelec", 8);
                break;
        }
        SceneManager.LoadScene("MainMenu");
    }
}
