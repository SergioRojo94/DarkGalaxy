using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PayWith : MonoBehaviour
{
    private string name;
    private float coinsCost, coinsPP, eursCost;
    private int gemsCost, gemsPP;
    private Player _player;

    #region aesthetic effects fo transactions
    public TextMeshProUGUI coinPriceText, eurPriceText, gemPriceText, CurrentCoinsText, CurrentGemsText;
    public float PreviousCoinsAmount, PreviousHeartsAmount, PreviousGemsAmount;     // For wasted coins animation
    #endregion

    private void Awake()
    {
        PlayerPrefs.SetInt("PlayerSelec", 2);
    }
    void Start()
    {
        name = gameObject.name;
        coinsCost = float.Parse(coinPriceText.text);
        gemsCost = int.Parse(gemPriceText.text);
        coinsPP = PlayerPrefs.GetFloat("Coins") / 1000;
        gemsPP = PlayerPrefs.GetInt("Gems"); 
        _player = FindObjectOfType<Player>();
       // Debug.Log("Aquí setteas a 0 las naves en la tienda");
       /* PlayerPrefs.SetInt("ObtainGalaxyRazor", 0);
        PlayerPrefs.SetInt("ObtainApacheNebula", 0);
        PlayerPrefs.SetInt("ObtainIronScarab", 0);*/
    }

    
    void Update()
    {
        name = gameObject.name;
        _player = FindObjectOfType<Player>();
    }

    public void Pay()
    {
        coinsCost = float.Parse(coinPriceText.text);
        gemsCost = int.Parse(gemPriceText.text);
        coinsPP = PlayerPrefs.GetFloat("Coins") / 1000;
        gemsPP = PlayerPrefs.GetInt("Gems");
        switch (name)
        {
            case "BuyButton1":
               // PlayerPrefs.SetFloat("Coins", 70000);
                if (coinsPP >= coinsCost)
                {
                    RewardCoins(coinsCost);
                    PreviousCoinsAmount = coinsPP;
                    PlayerPrefs.SetFloat("Coins", coinsPP * 1000);
                    if (_player.nameShip == "Galaxy Razor")
                    {
                        PlayerPrefs.SetInt("ObtainGalaxyRazor", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 2);
                    }
                    if (_player.nameShip == "Cosmos Ranger")
                    {
                        PlayerPrefs.SetInt("ObtainCosmosRanger", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 5);
                    }
                    if (_player.nameShip == "Grauss")
                    {
                        PlayerPrefs.SetInt("ObtainGrauss", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 8);
                    }

                }

                break;

            case "BuyButton2":
                //TODO PAY WITH REAL MONEY
                //apachenebula, ironscarab, biohazard, grauss

                break;

            case "BuyButton3":
                if (gemsPP >= gemsCost)
                {
                    RewardGems(gemsCost);
                    PreviousGemsAmount = gemsPP;
                    PlayerPrefs.SetInt("Gems", gemsPP);
                    if (_player.nameShip == "Galaxy Razor")
                    {
                        PlayerPrefs.SetInt("ObtainGalaxyRazor", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 2);
                    }
                    if (_player.nameShip == "Apache Nebula")
                    {
                        PlayerPrefs.SetInt("ObtainApacheNebula", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 3);
                    }
                    if (_player.nameShip == "Iron Scarab")
                    {
                        PlayerPrefs.SetInt("ObtainIronScarab", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 4);
                    }

                    if (_player.nameShip == "Cosmos Ranger")
                    {
                        PlayerPrefs.SetInt("ObtainCosmosRanger", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 5);
                    }
                    if (_player.nameShip == "Sky Warrior")
                    {
                        PlayerPrefs.SetInt("ObtainSkyWarrior", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 6);
                    }
                    if (_player.nameShip == "Biohazard")
                    {
                        PlayerPrefs.SetInt("ObtainBiohazard", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 7);
                    }

                    if (_player.nameShip == "Grauss")
                    {
                        PlayerPrefs.SetInt("ObtainGrauss", 1);
                        PlayerPrefs.SetInt("FromShop", 1);
                        PlayerPrefs.SetInt("PlayerSelec", 8);
                    }
                }
                break;
        }
    }

    private void RewardCoins(float coinsCost)
    {
        coinsPP -= coinsCost;
        Debug.Log("Coins" + coinsPP);
        CurrentCoinsText.text = "-" + coinsCost;
        CurrentCoinsText.text = coinsPP.ToString("F1");
        CurrentCoinsText.gameObject.SetActive(true);
        PlayerPrefs.SetFloat("Coins", coinsPP * 1000);
        StartCoroutine(UpdateCoinsAmount());
    }

    private IEnumerator UpdateCoinsAmount()
    {
        // Animation for increasing and decreasing of coins amount
        const float seconds = 0.5f;
        float elapsedTime = 0;

        while (elapsedTime < seconds)
        {
            CurrentCoinsText.text = Mathf.Floor(Mathf.Lerp(PreviousCoinsAmount, coinsPP, (elapsedTime / seconds))).ToString();
            elapsedTime += Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }
        CurrentCoinsText.text = coinsPP .ToString("F1") ;
        SceneManager.LoadScene("MainMenu");
    }

    private void RewardGems(int gemsCost)
    {
        gemsPP -= gemsCost;
        Debug.Log("Gems" + gemsPP);
        CurrentGemsText.text = "-" + gemsCost;
        CurrentGemsText.text = gemsPP.ToString("F1");
        CurrentGemsText.gameObject.SetActive(true);
        PlayerPrefs.SetInt("Gems", gemsPP);
        StartCoroutine(UpdateGemsAmount());
    }

    private IEnumerator UpdateGemsAmount()
    {
        const float seconds = 0.5f;
        float elapsedTime = 0;

        while (elapsedTime < seconds)
        {
            CurrentGemsText.text = Mathf.Floor(Mathf.Lerp(PreviousGemsAmount, gemsPP, (elapsedTime / seconds))).ToString();
            elapsedTime += Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }
        CurrentGemsText.text = gemsPP.ToString();
        SceneManager.LoadScene("MainMenu");
    }
}
