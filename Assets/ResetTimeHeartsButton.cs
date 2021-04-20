using System;
using System.Collections;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ResetTimeHeartsButton : MonoBehaviour
{
    public TextMeshProUGUI textTime;
    public Button GainHeartsButton;
    public float hours;
    public float mins;
    public float secs;

    public string retencionHeartsWinName;

    double waitMs;
    double currentTime;
    double totalSecs;

    bool isInit = false, isFin = false;
    private int firstTimeFreeResources;
    void Start()
    {
        firstTimeFreeResources = PlayerPrefs.GetInt("FirstTimeFreeResources"); //assigns energy first time player connects
        if (firstTimeFreeResources == 0)
        {
            isFin = true;
            textTime.text = "FINALIZADO";
            PlayerPrefs.SetString(retencionHeartsWinName, "-1");
            GainHeartsButton.interactable = true;
            GainHeartsButton.gameObject.SetActive(true);
            firstTimeFreeResources = 1;
            return;
        }
        bool iniciar = false;
        textTime.text = "CARGANDO...";
        if (PlayerPrefs.HasKey(retencionHeartsWinName))
        {
            totalSecs = double.Parse(PlayerPrefs.GetString(retencionHeartsWinName));
            if (totalSecs < 0)
            {
                textTime.text = "FINALIZADO";
                GainHeartsButton.interactable = true;
                GainHeartsButton.enabled = true;
                isFin = true;
                //return;
                Reset();
            }
        }
        else iniciar = true;

        StartCoroutine(GetTimer(iniciar));
    }
    void Update()
    {
        if (!isFin && isInit)
        {
            currentTime += Time.unscaledDeltaTime;
            var secondsLeft = totalSecs - currentTime;

            if (secondsLeft < 0)
            {
                isFin = true;
                textTime.text = "FINALIZADO";
                PlayerPrefs.SetString(retencionHeartsWinName, "-1");
                GainHeartsButton.interactable = true;
                GainHeartsButton.gameObject.SetActive(true);
                return;
            }
            string r = "";

            secondsLeft = Math.Ceiling(secondsLeft);

            r += ((int)secondsLeft / 3600).ToString() + "h ";
            secondsLeft -= ((int)secondsLeft / 3600) * 3600;

            r += ((int)secondsLeft / 60).ToString("00") + "m ";

            r += ((int)secondsLeft % 60).ToString("00") + "s";
            textTime.text = r;
            GainHeartsButton.interactable = false;
            GainHeartsButton.gameObject.SetActive(false);
        }
    }
    public void Reset()
    {
        isInit = false;
        StartCoroutine(GetTimer(true));
    }
    IEnumerator GetTimer(bool init = false)
    {
        UnityWebRequest www = UnityWebRequest.Get("https://www.google.es");
        yield return www.SendWebRequest();
        string hoy = www.GetResponseHeader("date");
        double tiempo;
        if (hoy == null) Debug.Log("ERROR SERVIDOR");
        else
        {
            System.DateTime dt = DateTime.ParseExact(hoy,
                "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                CultureInfo.InvariantCulture.DateTimeFormat,
                DateTimeStyles.AssumeUniversal);

            tiempo = dt.Ticks / TimeSpan.TicksPerMillisecond;

            currentTime = tiempo / 1000.0f;
            if (init)
            {
                waitMs = ((hours * 60.0f) + mins) * 60000.0f;
                totalSecs = tiempo + waitMs;
                totalSecs = totalSecs / 1000.0f;
                totalSecs += secs;
                PlayerPrefs.SetString(retencionHeartsWinName, totalSecs.ToString());
            }

            if (!isInit) isInit = true;
            if (isFin) isFin = false;

        }
    }
}
