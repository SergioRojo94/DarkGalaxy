
using UnityEngine;
using UnityEngine.Purchasing;

public class GainResources : MonoBehaviour 
{
    private int gems, hearts;
    private float coins;
    private string gems100 = "100gems";
    private string gems350 = "350gems";
    private string gems1000 = "1000gems";
    private string specialoffer = "specialoffer1";

    //public GameObject restorePruchaseBtn;

    public int newgems, newhearts, gemsForPay; //amount of resources that player wins. GemsForPay is used sometimes for buy hearts or another resource.
    public float newcoins;

   /* private void Awake()
    {
        DisableRestorePurchaseBtn();
    }*/
    void Start()
    {
        gems = PlayerPrefs.GetInt("Gems");
        hearts = PlayerPrefs.GetInt("Hearts");
        coins = PlayerPrefs.GetFloat("Coins");
    }

    public void OnPurchaseComplete(Product product) //used for In App Purchases (buy gems)
    {
        if (product.definition.id == gems100)
        {
            gems = PlayerPrefs.GetInt("Gems");
            gems += 100;
            PlayerPrefs.SetInt("Gems", gems);
        }
        if (product.definition.id == gems350)
        {
            gems = PlayerPrefs.GetInt("Gems");
            gems += 350;
            PlayerPrefs.SetInt("Gems", gems);
        }
        if (product.definition.id == gems1000)
        {
            gems = PlayerPrefs.GetInt("Gems");
            gems += 1000;
            PlayerPrefs.SetInt("Gems", gems);
        }
        if (product.definition.id == specialoffer)
        {
            gems = PlayerPrefs.GetInt("Gems");
            gems += 300;
            PlayerPrefs.SetInt("Gems", gems);

            coins = PlayerPrefs.GetFloat("Coins");
            coins += 60000;
            PlayerPrefs.SetFloat("Coins", coins);
        }
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason reason)
    {
        Debug.Log("Purchase of " + product.definition.id + " failed due to" + reason);
    }

   /* void DisableRestorePurchaseBtn()
    {
        if (Application.platform != RuntimePlatform.IPhonePlayer)
        {
            restorePruchaseBtn.SetActive(false);
        }
    }*/
    public void GainGems(int wongems)
    {
        gems = PlayerPrefs.GetInt("Gems");
        Debug.Log("Gemas antes: " + gems);
        gems += wongems;
        Debug.Log("Gemas despues: " + gems);
        PlayerPrefs.SetInt("Gems", gems);
    }

    public void GainHearts(int wonhearts)
    {
        hearts = PlayerPrefs.GetInt("Hearts");
        Debug.Log("Hearts antes: " + hearts);
        hearts += wonhearts;
        Debug.Log("Hearts despues: " + hearts);
        PlayerPrefs.SetInt("Hearts", hearts);
    }

    public void GainCoins(int woncoins)
    {
        coins = PlayerPrefs.GetFloat("Coins");
        Debug.Log("Coins antes: " + coins);
        coins += woncoins;
        Debug.Log("Coins despues: " + coins);
        PlayerPrefs.SetFloat("Coins", coins);
    }

    public void GainHeartsWithGems()
    {
        hearts = PlayerPrefs.GetInt("Hearts");
        gems = PlayerPrefs.GetInt("Gems");
        if (gems < gemsForPay)
            return;
        Debug.Log("Hearts antes: " + hearts);
        Debug.Log("Gems antes: " + gems);
        hearts += newhearts;
        if (hearts > 200)
            hearts = 200;
        gems -= gemsForPay;
        Debug.Log("Hearts despues: " + hearts);
        Debug.Log("Gems despues: " + gems);
        PlayerPrefs.SetInt("Hearts", hearts);
        PlayerPrefs.SetInt("Gems", gems);
    }
}
