using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SelectStatSprite : MonoBehaviour
{
    private Player _player;
    private SpriteRenderer _sprite;
    private GameObject[] selectStatSprite;
    private int index;
    public int stat;
    public TextMeshProUGUI shipName, obtainedText;
    private TextMeshProUGUI coinPriceText, eurPriceText, gemPriceText;
    public GameObject CoinBtn, EurBtn, GemBtn;
    void Start()
    {
        _player = FindObjectOfType<Player>();
        _sprite = GetComponentInChildren<SpriteRenderer>();
        selectStatSprite = new GameObject[transform.childCount];
        shipName.text = _player.nameShip;
        coinPriceText = CoinBtn.GetComponentInChildren<TextMeshProUGUI>();
        eurPriceText = EurBtn.GetComponentInChildren<TextMeshProUGUI>();
        gemPriceText = GemBtn.GetComponentInChildren<TextMeshProUGUI>();
        if (_player.unlocked == true)
        {
            CoinBtn.SetActive(false);
            EurBtn.SetActive(false);
            GemBtn.SetActive(false);
            obtainedText.gameObject.SetActive(true);
        }

        else
        {
            obtainedText.gameObject.SetActive(false);
            if (_player.coinButton == true) //changes values of prices and some buttons are enabled
            {
                CoinBtn.SetActive(true);
                coinPriceText.text = _player.coinPrice.ToString();
            }

            else
            {
                CoinBtn.SetActive(false);
            }
            if (_player.eurButton == true)
            {
                EurBtn.SetActive(true);
                eurPriceText.text = _player.eurPrice.ToString();
            }

            else
            {
                EurBtn.SetActive(false);
            }
            if (_player.gemButton == true)
            {
                GemBtn.SetActive(true);
                gemPriceText.text = _player.gemPrice.ToString();
            }
            else
            {
                GemBtn.SetActive(false);
            }
        }
 

        switch (stat)
        {
            case 1:
                index = _player.damage;
                break;
            case 2:
                index = _player.fireRate;
                break;
            case 3:
                index = _player.projectile;
                break;
            case 4:
                index = _player.Health;
                break;
            case 5:
                index = _player.maxPower;
                break;
            case 6:
                index = _player.specialAttack;
                break;
        }

         for (int i = 0; i < transform.childCount; i++)
           selectStatSprite[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in selectStatSprite)
            objX.SetActive(false);

             if (selectStatSprite[index])
             selectStatSprite[index -1].SetActive(true);
    }


    void Update()
    {
        _player = FindObjectOfType<Player>();
        for (int i = 0; i < transform.childCount; i++)
            selectStatSprite[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in selectStatSprite)
            objX.SetActive(false);

        if (selectStatSprite[index])
            selectStatSprite[index - 1].SetActive(true);


        switch (stat)
        {
            case 1:
                index = _player.damage;
                break;
            case 2:
                index = _player.fireRate;
                break;
            case 3:
                index = _player.projectile;
                break;
            case 4:
                index = _player.Health;
                break;
            case 5:
                index = _player.maxPower;
                break;
            case 6:
                index = _player.specialAttack;
                break;
        }
        shipName.text = _player.nameShip;
        coinPriceText.text = CoinBtn.GetComponentInChildren<TextMeshProUGUI>().text;
        eurPriceText.text = EurBtn.GetComponentInChildren<TextMeshProUGUI>().text;
        gemPriceText.text = GemBtn.GetComponentInChildren<TextMeshProUGUI>().text;
        if (_player.unlocked == true)
        {
            CoinBtn.SetActive(false);
            EurBtn.SetActive(false);
            GemBtn.SetActive(false);
            obtainedText.gameObject.SetActive(true);
        }

        else
        {
            obtainedText.gameObject.SetActive(false);
            if (_player.coinButton == true) 
            {
                CoinBtn.SetActive(true);
                coinPriceText.text = _player.coinPrice.ToString();
            }

            else
            {
                CoinBtn.SetActive(false);
            }
            if (_player.eurButton == true)
            {
                EurBtn.SetActive(true);
                eurPriceText.text = _player.eurPrice.ToString();
            }

            else
            {
                EurBtn.SetActive(false);
            }
            if (_player.gemButton == true)
            {
                GemBtn.SetActive(true);
                gemPriceText.text = _player.gemPrice.ToString();
            }
            else
            {
                GemBtn.SetActive(false);
            }
        }

    }

    /*public void BtnRightStat()
    {
        _player[index].SetActive(false);
        index++;
        if (index == switchPlayer.Length)
            index = 0;
        switchPlayer[index].SetActive(true);
    }

    public void BtnLeftStat()
    {
        switchPlayer[index].SetActive(false);
        index--;
        if (index < 0)
            index = switchPlayer.Length - 1;
        switchPlayer[index].SetActive(true);
    }*/
}
