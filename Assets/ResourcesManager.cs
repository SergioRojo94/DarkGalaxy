using System;
using System.Collections;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using Yodo1.MAS; //Monetization with Yodo1


public class ResourcesManager : MonoBehaviour
{
    private int  hearts, gems, firstTime;
    private float coins;
    private float realCoins;
    public TextMeshProUGUI coinsText, heartsText, gemsText, maxHeartsText;

    #region canvas that appears in some events
    public GameObject WelcomeCanvas;

    public bool showObtainEDCanvas = false;
    public GameObject ObtainEDCanvas;
    private int obtainED, eDRewardCanvas;
    #endregion

    #region time used for give the player 25 hearts every 30 minutes
    public float hora;
    public float minutos;
    public float segundos;


    double esperaMs;
    double tiempoActual;
    double totalSecs;

    public string retencionHeartsName;
    bool isInit = false, isFin = false;
    #endregion

    private void Awake()
    {
        //PlayerPrefs.SetInt("FirstTime", 0);
        int fromShop = PlayerPrefs.GetInt("FromShop");
        if (fromShop == 0)
        {
            PlayerPrefs.SetInt("PlayerSelec", 0);
        }
        Yodo1U3dMas.SetCOPPA(false); //App for age 13 and above
    }
    void Start()
    {
        Yodo1U3dMas.InitializeSdk();
        //PlayerPrefs.SetInt("UnlockWorld2", 1);
        firstTime = PlayerPrefs.GetInt("FirstTime"); //assigns energy first time player connects
        if (firstTime == 0)
        {
            WelcomeCanvas.SetActive(true);
            PlayerPrefs.SetInt("Hearts", 200);
            StartCoroutine(Set200Hearts());
        }

        PlayerPrefs.SetInt("FromShop", 0);
        Time.timeScale = 1f;
        hearts = PlayerPrefs.GetInt("Hearts");
        Reset();
        CheckMaxHearts();
        /* Debug.Log("GraussSkin" + PlayerPrefs.GetInt("ObtainCosmosGrauss"));
         PlayerPrefs.SetInt("ObtainApacheNebula", 0);
         PlayerPrefs.SetInt("ObtainCupidNebula", 0);
         PlayerPrefs.SetInt("ObtainCosmosGrauss", 0);
         PlayerPrefs.SetInt("ObtainGrauss", 0);
         PlayerPrefs.SetInt("ApacheNebulaSkin", 0);
         PlayerPrefs.SetInt("GraussSkin", 0);*/
        /* PlayerPrefs.SetInt("Hearts", 200);
           PlayerPrefs.SetInt("Gems", 0);
           PlayerPrefs.SetFloat("Coins", 0);
         PlayerPrefs.SetInt("UnlockWorld2", 0);
        PlayerPrefs.SetInt("ObtainSpaceHawk", 0);
          PlayerPrefs.SetInt("ObtainGalaxyRazor", 0);
          PlayerPrefs.SetInt("ObtainApacheNebula", 0);
          PlayerPrefs.SetInt("ObtainIronScarab", 0);
        PlayerPrefs.SetInt("ObtainCosmosRanger", 0);
        PlayerPrefs.SetInt("ObtainSkyWarrior", 0);
        PlayerPrefs.SetInt("ObtainBiohazard", 0);
        PlayerPrefs.SetInt("ObtainGrauss", 0);*/


        realCoins = PlayerPrefs.GetFloat("Coins") / 1000;
        coinsText.text = realCoins.ToString("F1");
        heartsText.text = PlayerPrefs.GetInt("Hearts").ToString();
        gemsText.text = PlayerPrefs.GetInt("Gems").ToString();
        obtainED = PlayerPrefs.GetInt("ObtainED");
        eDRewardCanvas = PlayerPrefs.GetInt("EDRewardCanvas");
        /*Debug.Log("obtainED: " + obtainED);
        Debug.Log("edrewardCanvas: " + eDRewardCanvas);
        Debug.Log("Spache: " + PlayerPrefs.GetInt("ObtainSpaceHawk"));*/

        bool iniciar = false;

        if (PlayerPrefs.HasKey(retencionHeartsName))
        {
            totalSecs = double.Parse(PlayerPrefs.GetString(retencionHeartsName));
            if (totalSecs < 0)
            {
                isFin = true;
                return;
            }
        }
        else iniciar = true;
        StartCoroutine(GetTimer(iniciar));
    }

    private void Update()
    {
        CheckMaxHearts();
        if (!isFin && isInit) //this method is for grant 25 hearts every 30 minutes
        {
            tiempoActual += Time.unscaledDeltaTime;
            var secondsLeft = totalSecs - tiempoActual;

            if (secondsLeft < 0)
            {
                isFin = true;
                PlayerPrefs.SetString(retencionHeartsName, "-1");
                hearts += 25; //
                PlayerPrefs.SetInt("Hearts", hearts);
                heartsText.text = PlayerPrefs.GetInt("Hearts").ToString();
                Reset();
                //return;
            }
            string r = "";

            secondsLeft = Math.Ceiling(secondsLeft);

            r += ((int)secondsLeft / 3600).ToString() + "h";
            secondsLeft -= ((int)secondsLeft / 3600) * 3600;

            r += ((int)secondsLeft / 60).ToString("00") + "m";

            r += ((int)secondsLeft % 60).ToString("00") + "s";
        }
        ShowEDCanvas();
        realCoins = PlayerPrefs.GetFloat("Coins") / 1000;
        coinsText.text = realCoins.ToString("F1");
        heartsText.text = PlayerPrefs.GetInt("Hearts").ToString();
        gemsText.text = PlayerPrefs.GetInt("Gems").ToString();

    }

    public void Reset() 
    {
        isInit = false;
        StartCoroutine(GetTimer(true));
    }

    public void ExitGame() {
        Application.Quit();
    }
    IEnumerator Set200Hearts()
    {
        yield return new WaitForSeconds(0.1f);
        PlayerPrefs.SetInt("FirstTime", 1);
    }
    public void CheckMaxHearts() //if hearts == maximum, appears an indicative text
    {
        if (hearts == 200)
            maxHeartsText.enabled = true;
        else
            maxHeartsText.enabled = false;
    }
    void ShowEDCanvas() //used for show Special SHip buy
    {
        if (obtainED == 1 && eDRewardCanvas == 1)
        {
            Debug.Log("Se muestra el panel de recompensa de ED");
            ObtainEDCanvas.SetActive(true);
        }
    }

    IEnumerator GetTimer(bool init = false) //same method as FortuneWheelManager, but this time "reset" it's called automatically, you must set the time in inspector
    {
        UnityWebRequest www = UnityWebRequest.Get("https://www.google.es");
        yield return www.SendWebRequest();
        string hoy = www.GetResponseHeader("date");
        double tiempo;
        if (hoy == null) Debug.Log("ERROR SERVIDOR");
        else
        {
            DateTime dt = DateTime.ParseExact(hoy,
                "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                CultureInfo.InvariantCulture.DateTimeFormat,
                DateTimeStyles.AssumeUniversal);

            tiempo = dt.Ticks / TimeSpan.TicksPerMillisecond;

            tiempoActual = tiempo / 1000.0f;
            if (init)
            {
                esperaMs = ((hora * 60.0f) + minutos) * 60000.0f;
                totalSecs = tiempo + esperaMs;
                totalSecs = totalSecs / 1000.0f;
                totalSecs += segundos;
                PlayerPrefs.SetString(retencionHeartsName, totalSecs.ToString());
            }

            if (!isInit) isInit = true;
            if (isFin) isFin = false;

        }
    }
}
