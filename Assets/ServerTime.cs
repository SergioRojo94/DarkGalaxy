
using UnityEngine;
using System;
using System.Globalization;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.Networking;
using TMPro;

public class ServerTime : MonoBehaviour
{
    public TextMeshProUGUI textTime;
    public Button TurnButton;
    public float hora;
    public float minutos;
    public float segundos;

    public string retencionName;

    double esperaMs;
    double tiempoActual;
    double totalSecs;

    bool isInit = false, isFin = false;
    private int firstTimeRoulette;

    private FortuneWheelManager _ftm;

    private void Start()
    {
        firstTimeRoulette = PlayerPrefs.GetInt("FirstTimeRoulette");
        if (firstTimeRoulette == 0)
        {
            TurnButton.interactable = true;
            TurnButton.enabled = true;
            firstTimeRoulette = 1;

        }
        if (isFin)
        {
            TurnButton.interactable = true;
            TurnButton.enabled = true;
        }
        TurnButton.interactable = false;
          TurnButton.enabled = false;
        _ftm = GetComponent<FortuneWheelManager>();
        if (_ftm == null) Debug.Log("FWM NULL");
        bool iniciar = false;
        textTime.text = "LOADING...";
        if (PlayerPrefs.HasKey(retencionName))
        {
            totalSecs = double.Parse(PlayerPrefs.GetString(retencionName));
            if (totalSecs < 0)
            {
                textTime.text = "READY";
                TurnButton.interactable = true;
                TurnButton.enabled = true;
                isFin = true;
                return;
            }
        }
        else iniciar = true;

        StartCoroutine(GetTimer(iniciar));
    }
    public void Reset()
    {
        isInit = false;
        StartCoroutine(GetTimer(true));
    }

    void Update()
    {
        if (isFin)
        {
            TurnButton.interactable = true;
            TurnButton.enabled = true;
        }
        if (!isFin && isInit)
        {
            tiempoActual += Time.unscaledDeltaTime;
            var secondsLeft = totalSecs - tiempoActual;

            if (secondsLeft < 0)
            {
                isFin = true;
                textTime.text = "READY";
                PlayerPrefs.SetString(retencionName, "-1");
                TurnButton.interactable = true;
                return;
            }
            string r = "";

            secondsLeft = Math.Ceiling(secondsLeft);

            r += ((int)secondsLeft / 3600).ToString() + "h ";
            secondsLeft -= ((int)secondsLeft / 3600) * 3600;

            r += ((int)secondsLeft / 60).ToString("00") + "m ";

            r += ((int)secondsLeft % 60).ToString("00") + "s";
            textTime.text = r;
        }
    }

    IEnumerator GetTimer(bool init = false)
    {
        UnityWebRequest www = UnityWebRequest.Get("https://www.google.es");
        yield return www.SendWebRequest();
        string hoy = www.GetResponseHeader("date");
        double tiempo;
        if (hoy == null) Debug.Log("SERVER ERROR");
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
                PlayerPrefs.SetString(retencionName, totalSecs.ToString());
            }

            if (!isInit) isInit = true;
            if (isFin) isFin = false;

        }
    }
}
