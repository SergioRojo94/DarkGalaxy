using System;
using System.Collections;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ResetTimeGemButton : MonoBehaviour
{
    public TextMeshProUGUI textTime;
    public Button GainGemsButton;
    public float hours;
    public float mins;
    public float secs;

    public string retencionGemsName;

    double waitMs;
    double currentTime;
    double totalSecs;

    bool isInit = false, isFin = false;

    void Start()
    {
        /* GainCoinButton.interactable = false;*/
        //GainCoinButton.enabled = false;
        bool iniciar = false;
        textTime.text = "CARGANDO...";
        if (PlayerPrefs.HasKey(retencionGemsName))
        {

            totalSecs = double.Parse(PlayerPrefs.GetString(retencionGemsName));
            if (totalSecs < 0)
            {
                textTime.text = "FINALIZADO";
                GainGemsButton.interactable = true;
                GainGemsButton.enabled = true;
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
                PlayerPrefs.SetString(retencionGemsName, "-1");
                GainGemsButton.interactable = true;
                GainGemsButton.gameObject.SetActive(true);
                return;
            }
            string r = "";

            secondsLeft = Math.Ceiling(secondsLeft);

            r += ((int)secondsLeft / 3600).ToString() + "h ";
            secondsLeft -= ((int)secondsLeft / 3600) * 3600;

            r += ((int)secondsLeft / 60).ToString("00") + "m ";

            r += ((int)secondsLeft % 60).ToString("00") + "s";
            textTime.text = r;
            GainGemsButton.interactable = false;
            GainGemsButton.gameObject.SetActive(false);
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
                PlayerPrefs.SetString(retencionGemsName, totalSecs.ToString());
            }

            if (!isInit) isInit = true;
            if (isFin) isFin = false;

        }
    }
}
