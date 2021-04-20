using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using TMPro;

public class FortuneWheelManager : MonoBehaviour
{
    #region for turn calculations
    private bool _isStarted;
    private float[] _sectorsAngles;
    private float _finalAngle;
    private float _startAngle = 0;
    private float _currentLerpRotationTime;
    #endregion

    #region UIElements
    public Button TurnButton;
    public GameObject Circle; 			// Rotatable Object with rewards
    public TextMeshProUGUI CoinsDeltaText, HeartsDeltaText, GemsDeltaText; 		// Pop-up text with wasted or rewarded coins amount
    
    public TextMeshProUGUI CurrentCoinsText, CurrentHeartsText, CurrentGemsText, maxHeartsText; 		// Pop-up text with wasted or rewarded coins amount
    public int hearts,gems;
    public float coins;
    public float PreviousCoinsAmount, PreviousHeartsAmount, PreviousGemsAmount;		// For wasted coins animation
    public TextMeshProUGUI coinsText, heartsText, gemsText;
    #endregion

    //private bool GiveAward = false;
    private void Awake ()
    {
        // PreviousCoinsAmount = CurrentCoinsAmount;
        //CurrentCoinsText.text = CurrentCoinsAmount.ToString ();
        SFXManager.instance.ControlHearts();
        CheckMaxHearts();
        coins = PlayerPrefs.GetFloat("Coins") / 1000;
        hearts = PlayerPrefs.GetInt("Hearts");
        gems = PlayerPrefs.GetInt("Gems");

        coinsText.text = coins.ToString("F1");
        heartsText.text = hearts.ToString();
        gemsText.text = gems.ToString();
        Debug.Log("Coins: " + coins * 1000 + " Hearts: " + hearts + " Gems: " + gems);
    }


    /*private void Start()
    {
       // PlayerPrefs.SetInt("ObtainSpaceHawk", 0); //quitar al empezar
    
    }*/

    public void TurnWheel()
    {
        StartCoroutine(TurnWheelRoutine());
    }
    IEnumerator TurnWheelRoutine()
    {
        // Player has enough money to turn the wheel
        // if (CurrentCoinsAmount >= TurnCost) {
        _currentLerpRotationTime = 0f;
        TurnButton.interactable = false;
        FindObjectOfType<SFXManager>().Play("RollingRoulette");
       // GiveAward = true;
    	    // Fill the necessary angles (for example if you want to have 12 sectors you need to fill the angles with 30 degrees step)
    	    _sectorsAngles = new float[] { 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360 };
    	
    	    int fullCircles = 5;
    	    float randomFinalAngle = _sectorsAngles [UnityEngine.Random.Range (0, _sectorsAngles.Length)];
        float randomFinalAngle2 = _sectorsAngles[UnityEngine.Random.Range(0, _sectorsAngles.Length)];

        // Here we set up how many circles our wheel should rotate before stop
        _finalAngle = -(fullCircles * 360 + randomFinalAngle);
    	    _isStarted = true;
    	
    	    PreviousCoinsAmount = coins;
            PreviousHeartsAmount = hearts;
            PreviousGemsAmount = gems;

        yield return new WaitForSeconds(5f);
        _currentLerpRotationTime = 0f;
        FindObjectOfType<SFXManager>().Play("RollingRoulette");
        // GiveAward = true;
        _sectorsAngles = new float[] { 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360 };
        _finalAngle = -(fullCircles * 360 + randomFinalAngle2);
        _isStarted = true;

        PreviousCoinsAmount = coins;
        PreviousHeartsAmount = hearts;
        PreviousGemsAmount = gems;
        // Show wasted coins
        // CoinsDeltaText.text = "-" + TurnCost;
        //CoinsDeltaText.gameObject.SetActive (true);

        // Animate coins
        // StartCoroutine (HideCoinsDelta ());
        //StartCoroutine (UpdateCoinsAmount ());
        TurnButton.interactable = false;
        TurnButton.GetComponent<Image>().color = new Color(255, 255, 255, 0.5f);
        //GiveAward = false;
        //}
    }

    private void GiveAwardByAngle ()
    {
    	// Here you can set up rewards for every sector of wheel
    	switch ((int)_startAngle) {
    	case 0:
    	        ObtainSpaceHawk(); //Ship
    	        break;
    	case -330:
                Debug.Log("Nothing");   //X
    	        break;
    	case -300:
    	        RewardCoins (9);
                break;
    	case -270:
    	        RewardHearts (45);
                break;
    	case -240:
                RewardHearts(70);
                break;
    	case -210:
                RewardCoins(5);
                break;
    	case -180:
                RewardGems(5);
    	    break;
    	case -150:
                RewardHearts(70);
                break;
    	case -120:
                RewardGems(5);
                break;
    	case -90:
                RewardCoins(5);
                break;
    	case -60:
                RewardGems(3);
                break;
    	case -30:
                RewardHearts(30);
                break;
            default:
    	    break;
        }
    }

    void Update ()
    {
        if (!_isStarted)
            return;
        float maxLerpRotationTime = 4f;
    
    	// increment timer once per frame
    	_currentLerpRotationTime += Time.deltaTime;
    	if (_currentLerpRotationTime > maxLerpRotationTime || Circle.transform.eulerAngles.z == _finalAngle) {
    	    _currentLerpRotationTime = maxLerpRotationTime;
    	    _isStarted = false;
    	    _startAngle = _finalAngle % 360;
    
           // if (GiveAward == true)
           // {
                GiveAwardByAngle();
               // GiveAward = false;
            //}
    	    
    	   // StartCoroutine(HideCoinsDelta ());
    	}
    
    	// Calculate current position using linear interpolation
    	float t = _currentLerpRotationTime / maxLerpRotationTime;
    
    	// This formulae allows to speed up at start and speed down at the end of rotation.
    	// Try to change this values to customize the speed
    	t = t * t * t * (t * (6f * t - 15f) + 10f);
    
    	float angle = Mathf.Lerp (_startAngle, _finalAngle, t);
    	Circle.transform.eulerAngles = new Vector3 (0, 0, angle);
        SFXManager.instance.ControlHearts();
        CheckMaxHearts();
    }

    private void RewardCoins (int awardCoins)
    {
        coins += awardCoins;
        Debug.Log("Coins" + coins);
        CoinsDeltaText.text = "+" + awardCoins;
        coinsText.text = coins.ToString("F1");
        CoinsDeltaText.gameObject.SetActive (true);
        PlayerPrefs.SetFloat("Coins", coins * 1000);
        StartCoroutine (UpdateCoinsAmount ());
    }

     private void RewardHearts(int awardHearts)
    {
        hearts += awardHearts;
        if (hearts > 200) //set the maximum of energy
        {
            hearts = 200;
        }
        HeartsDeltaText.text = "+" + awardHearts;
        heartsText.text = hearts.ToString();
        HeartsDeltaText.gameObject.SetActive(true);
        PlayerPrefs.SetInt("Hearts", hearts);
        StartCoroutine(UpdateHeartsAmount());
    }

    private void RewardGems(int awardGems)
    {
        gems += awardGems;
        GemsDeltaText.text = "+" + awardGems;
        gemsText.text = gems.ToString();
        GemsDeltaText.gameObject.SetActive(true);
        PlayerPrefs.SetInt("Gems", gems);
        StartCoroutine(UpdateGemsAmount());
    }

    void ObtainSpaceHawk()
    {
        PlayerPrefs.SetInt("ObtainSpaceHawk", 1);
    }

    private IEnumerator HideCoinsDelta ()
    {
        yield return new WaitForSeconds (1f);
	CoinsDeltaText.gameObject.SetActive (false);
    }

    private IEnumerator UpdateCoinsAmount ()
    {
    	// Animation for increasing and decreasing of coins amount
    	const float seconds = 0.5f;
    	float elapsedTime = 0;
    
    	while (elapsedTime < seconds) {
    	    CurrentCoinsText.text = Mathf.Floor(Mathf.Lerp (PreviousCoinsAmount, coins, (elapsedTime / seconds))).ToString ();
    	    elapsedTime += Time.deltaTime;
    
    	    yield return new WaitForEndOfFrame ();
        }
    
    	//PreviousCoinsAmount = coins;
    	//CurrentCoinsText.text = coins.ToString ();
        CoinsDeltaText.text = coins.ToString("F1");
    }
    private IEnumerator UpdateHeartsAmount()
    {
        // Animation for increasing and decreasing of hearts amount
        const float seconds = 0.5f;
        float elapsedTime = 0;

        while (elapsedTime < seconds)
        {
            CurrentHeartsText.text = Mathf.Floor(Mathf.Lerp(PreviousHeartsAmount, hearts, (elapsedTime / seconds))).ToString();
            elapsedTime += Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }
        HeartsDeltaText.text = hearts.ToString();
    }
    private IEnumerator UpdateGemsAmount()
    {
        // Animation for increasing and decreasing of gems amount
        const float seconds = 0.5f;
        float elapsedTime = 0;

        while (elapsedTime < seconds)
        {
            CurrentGemsText.text = Mathf.Floor(Mathf.Lerp(PreviousGemsAmount, gems, (elapsedTime / seconds))).ToString();
            elapsedTime += Time.deltaTime;

            yield return new WaitForEndOfFrame();
        }
        CoinsDeltaText.text = gems.ToString();
    }

    public void CheckMaxHearts() //if hearts == maximum, appears an indicative text
    {
        if (hearts == 200)
            maxHeartsText.enabled = true;
        else
            maxHeartsText.enabled = false;
    }
}
