using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LevelMainMenu : MonoBehaviour
{
    #region variables for enable/disable the player to play
    public bool unlocked;
    public Color black = new Color(40, 40, 40);
    public string unknow = "??????";
    public GameObject StartButton;
    public TextMeshProUGUI worldName, trueWorldName;
    private Nebula1 Nebula1;
    private Nebula2 Nebula2;
    private SpriteRenderer _spriteN1, _spriteN2;

    private Player player;
    #endregion

    private void Awake() //enabled levels if we complete the previous world
    {
        switch (gameObject.name)
        {
            case "Level 2":
                if (PlayerPrefs.GetInt("UnlockWorld2") == 1)
                    unlocked = true;
                break;
        }
    }
    void Start()
    {
        player = FindObjectOfType<Player>();
        //PlayerPrefs.SetInt("UnlockWorld2", 0);
        Nebula1 = FindObjectOfType<Nebula1>();
        Nebula2 = FindObjectOfType<Nebula2>();
        _spriteN1 = Nebula1.GetComponent<SpriteRenderer>();
        _spriteN2 = Nebula2.GetComponent<SpriteRenderer>();
        if (unlocked == false)
        {
            StartButton.SetActive(false);
            worldName.text = unknow;
            _spriteN1.color = black;
            _spriteN2.color = black;
        }
    }

    void Update()
    {
        player = FindObjectOfType<Player>();
        Nebula1 = FindObjectOfType<Nebula1>();
        Nebula2 = FindObjectOfType<Nebula2>();
        _spriteN1 = Nebula1.GetComponent<SpriteRenderer>();
        _spriteN2 = Nebula2.GetComponent<SpriteRenderer>();
        if (unlocked == false)
        {
            StartButton.SetActive(false);
            worldName.text = unknow;
            _spriteN1.color = black;
            _spriteN2.color = black;
        }
        else
        {
            if (player.unlocked == true) //controls that player couldnt play with a ship that is not unlocked
            {
                StartButton.SetActive(true);
            }

            worldName.text = trueWorldName.text;
        }
    }
}
