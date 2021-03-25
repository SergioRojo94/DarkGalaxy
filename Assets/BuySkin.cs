using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BuySkin : MonoBehaviour
{
    private int gemsCost, gemsPP;
    private Player _player;

    /*We discriminate between ships and skins PP in order to avoid the player
        can buy a skin and choose the original ship without achieve it */

    private int unlockIWelcome, unlockCupidN, unlockCGrauss; //Skins PlayerPrefs
    private int unlockApacheN, unlockGrauss; //Ships PlayerPrefs. 

    #region aesthetic effects fo transactions
    private int hearts, gems;
    private float coins;

    public TextMeshProUGUI coinsText, heartsText, gemsText;
    public TextMeshProUGUI gemPriceText, CurrentGemsText;
    public float PreviousGemsAmount;     // For wasted gems animation
    #endregion

    public Button equipButton, obtainButton, priceButton, purchasedButton;

    private void Awake()
    {
        coins = PlayerPrefs.GetFloat("Coins") / 1000; //Resources panel
        hearts = PlayerPrefs.GetInt("Hearts");
        gems = PlayerPrefs.GetInt("Gems");

        coinsText.text = coins.ToString("F1");
        heartsText.text = hearts.ToString();
        gemsText.text = gems.ToString();
        _player = FindObjectOfType<Player>();

        unlockIWelcome = PlayerPrefs.GetInt("ObtainInitialWelcome"); 
        unlockCupidN = PlayerPrefs.GetInt("ObtainCupidNebula");
        unlockCGrauss = PlayerPrefs.GetInt("ObtainCosmosGrauss");

        unlockApacheN = PlayerPrefs.GetInt("ObtainApacheNebula");
        unlockGrauss = PlayerPrefs.GetInt("ObtainGrauss");

        Debug.Log("Apache: " + unlockApacheN + "Grauss " + unlockGrauss);
        Debug.Log("Cupid: " + unlockCupidN);
        if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 1)//and their text changes into "Purchased"
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
        }
        else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 1)
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
        }

            if (_player.nameShip == "Initial Welcome " && unlockIWelcome == 1) //Name of the ship and their corresponding data (Initial Ship is always unlocked)
                _player.unlocked = true;
            else if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 1 && unlockApacheN == 1)
                _player.unlocked = true;
            else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 1 && unlockGrauss == 1)
                _player.unlocked = true;

        if (_player.unlocked == true || _player.nameShip == "Apache Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 1||
                                        _player.nameShip == "Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 1||
                                        _player.nameShip == "Initial Soldier")
        {
            equipButton.gameObject.SetActive(true);
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(false);
        }
    }
    void Start()
    {
        gemsPP = PlayerPrefs.GetInt("Gems");
        gemPriceText = priceButton.GetComponentInChildren<TextMeshProUGUI>();
        gemPriceText.text = _player.gemPrice.ToString();
        gemsCost = int.Parse(gemPriceText.text);
        _player = FindObjectOfType<Player>();

        if (_player.unlocked == true || _player.nameShip == "Apache Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 1 ||
                                       _player.nameShip == "Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 1 ||
                                       _player.nameShip == "Initial Soldier")
        {
            equipButton.gameObject.SetActive(true);
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(false);
        }

        else if (_player.nameShip == "Apache Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 0 ||
                                       _player.nameShip == "Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 0)
            {
                equipButton.gameObject.SetActive(false);
                obtainButton.gameObject.SetActive(false);
                purchasedButton.gameObject.SetActive(false);
                priceButton.gameObject.SetActive(false);
            }
        else if (_player.nameShip == "Cupid Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 1 && PlayerPrefs.GetInt("ObtainCupidNebula") == 0 ||
                                      _player.nameShip == "Cosmos Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 1 && PlayerPrefs.GetInt("ObtainCosmosGrauss") == 0)
        {
            Debug.Log("entra");
            equipButton.gameObject.SetActive(false);
            obtainButton.gameObject.SetActive(true);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(true);
        }
    }

    private void Update()
    {
        _player = FindObjectOfType<Player>();

        if (_player.nameShip == "Initial Welcome " && unlockIWelcome == 1)
            _player.unlocked = true;
        else if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 1 && unlockApacheN == 1)
            _player.unlocked = true;
        else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 1 && unlockGrauss == 1)
            _player.unlocked = true;

        if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 1 && unlockApacheN == 0)//and their text changes into "Purchased"
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
            priceButton.gameObject.SetActive(false);
        }
        else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 1 && unlockGrauss == 0)
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
            priceButton.gameObject.SetActive(false);
        }



        if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 0 && unlockApacheN ==1)//and their text changes into "Purchased"
        {
            obtainButton.gameObject.SetActive(true);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(true);
            equipButton.gameObject.SetActive(false);
            Debug.Log("Ahí lo llevas cupid");
        }
        else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 0 && unlockGrauss == 1)
        {
            obtainButton.gameObject.SetActive(true);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(true);
            equipButton.gameObject.SetActive(false);
            Debug.Log("Ahí lo llevas cosmos");
        }

        if ( _player.nameShip == "Apache Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 1 ||
                                        _player.nameShip == "Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 1 ||
                                        _player.nameShip == "Initial Soldier")
        {
            equipButton.gameObject.SetActive(true);
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(false);

        }
        else if (_player.nameShip == "Apache Nebula" && PlayerPrefs.GetInt("ObtainApacheNebula") == 0 ||
                                      _player.nameShip == "Grauss" && PlayerPrefs.GetInt("ObtainGrauss") == 0)
        {
            equipButton.gameObject.SetActive(false);
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(false);
            priceButton.gameObject.SetActive(false);
        }
        else if (_player.nameShip == "Cupid Nebula" && unlockCupidN == 1 && unlockApacheN == 0)//and their text changes into "Purchased"
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
            priceButton.gameObject.SetActive(false);
        }
        else if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 1 && unlockGrauss == 0)
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
            priceButton.gameObject.SetActive(false);
        }

      /*  if (_player.nameShip == "Cosmos Grauss" && unlockCGrauss == 0 && unlockGrauss == 1)
        {
            obtainButton.gameObject.SetActive(false);
            purchasedButton.gameObject.SetActive(true);
            priceButton.gameObject.SetActive(false);
        }*/
        /* else
          {
              equipButton.gameObject.SetActive(false);
              obtainButton.gameObject.SetActive(true);
              priceButton.gameObject.SetActive(true);
              gemPriceText.text = _player.gemPrice.ToString();
          }*/
    }

    public void Pay()
    {
        _player = FindObjectOfType<Player>();
        gemPriceText = priceButton.GetComponentInChildren<TextMeshProUGUI>();
        gemPriceText.text = _player.gemPrice.ToString();
        gemsCost = int.Parse(gemPriceText.text);

        if (gemsPP >= gemsCost)
             {
                    RewardGems(gemsCost);
                    PreviousGemsAmount = gemsPP;
                    PlayerPrefs.SetInt("Gems", gemsPP);
                    if (_player.nameShip == "Initial Welcome")
                    {
                        _player.unlocked = true;
                        PlayerPrefs.SetInt("InitialWelcome", 1);
                        equipButton.gameObject.SetActive(true);
                        obtainButton.gameObject.SetActive(false);
                        priceButton.gameObject.SetActive(false);
            }
            if (_player.nameShip == "Cupid Nebula")
            {
                _player.unlocked = true;
                PlayerPrefs.SetInt("ObtainCupidNebula", 1);
                /*Now we must check if original ship is bought
                 * In that case, equipButton is enabled,
                 * Else, just appears "Purchased" for inform the player*/
                if (PlayerPrefs.GetInt("ObtainApacheNebula") == 1)
                {
                    equipButton.gameObject.SetActive(true);
                    obtainButton.gameObject.SetActive(false);
                    priceButton.gameObject.SetActive(false);
                }
                else
                {
                    purchasedButton.gameObject.SetActive(true);
                    obtainButton.gameObject.SetActive(false);
                    priceButton.gameObject.SetActive(false);
                }
            }
            if (_player.nameShip == "Cosmos Grauss")
            {
                _player.unlocked = true;
                PlayerPrefs.SetInt("ObtainCosmosGrauss", 1);
                if (PlayerPrefs.GetInt("ObtainGrauss") == 1)
                {
                    equipButton.gameObject.SetActive(true);
                    obtainButton.gameObject.SetActive(false);
                    priceButton.gameObject.SetActive(false);
                }
                else
                {
                    purchasedButton.gameObject.SetActive(true);
                    obtainButton.gameObject.SetActive(false);
                    priceButton.gameObject.SetActive(false);
                }
            }
        SceneManager.LoadScene("ShopShip");
        }
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
    }
}
