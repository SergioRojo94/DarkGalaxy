
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopShipManager : MonoBehaviour
{
    private int hearts, gems;
    private float coins;

    public TextMeshProUGUI coinsText, heartsText, gemsText;
   // public Button skinButton;// IMPLEMENTED FOR SKINS
    private Player _player;

    [SerializeField]
    private TextMeshProUGUI obtainStarHawkText, obtainEldritchSpearText;
    private void Awake()
    {
        coins = PlayerPrefs.GetFloat("Coins") / 1000;
        hearts = PlayerPrefs.GetInt("Hearts");
        gems = PlayerPrefs.GetInt("Gems");

        coinsText.text = coins.ToString("F1");
        heartsText.text = hearts.ToString();
        gemsText.text = gems.ToString();
    }
    void Start()
    {
        _player = FindObjectOfType<Player>();
        //CheckSkin();
        CheckSpecialShips();
    }

    void Update()
    {
        _player = FindObjectOfType<Player>();
     //   CheckSkin();
        CheckSpecialShips();
    }

    //If selected ship has skins, appears skin button
  /*  void CheckSkin() {
        //TODO IF GALAXY RAZOR HAS SKIN, CHANGE THIS
        //If you have new skins, skin button must be activated 
        if (_player.nameShip == "Apache Nebula" || _player.nameShip == "Cupid Nebula" || _player.nameShip == "Initial Soldier" || _player.nameShip == "Grauss" || _player.nameShip == "Cosmos Grauss"
               || _player.nameShip == "Initial Welcome")
        {
            skinButton.gameObject.SetActive(true);
        }
        else
        {
            skinButton.gameObject.SetActive(false);
        }
    }*/

    //Method used for enable/ disable informative text of special ships
    void CheckSpecialShips() {
        if (_player.nameShip == "Star Hawk") {
            obtainStarHawkText.gameObject.SetActive(true);
        }
        else
            obtainStarHawkText.gameObject.SetActive(false);

        if (_player.nameShip == "Eldritch Spear") {
            obtainEldritchSpearText.gameObject.SetActive(true);
        }
        else
            obtainEldritchSpearText.gameObject.SetActive(false);
    }
}
