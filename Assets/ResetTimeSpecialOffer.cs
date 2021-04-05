using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ResetTimeSpecialOffer : MonoBehaviour
{
    //when special offer ends, redCross and text599 will be out, as well as cheapePriceButton. Expensive will replace it.
    public TextMeshProUGUI textTime, text599, textButton599;
    public Image redCross;
    public Button cheapPriceButton, expensivePriceButton;
    public float hours;
    public float mins;
    public float secs;

    public string retencionSpecialOfferName;

    double waitMs;
    double currentTime;
    double totalSecs;

    bool isInit = false, isFin = false;

    void Start()
    {
        /* GainCoinButton.interactable = false;*/
        //GainCoinButton.enabled = false;
        bool iniciar = false;
        textTime.text = "LOADING...";
        if (PlayerPrefs.HasKey(retencionSpecialOfferName))
        {
            totalSecs = double.Parse(PlayerPrefs.GetString(retencionSpecialOfferName));
            if (totalSecs < 0)
            {
                textTime.text = "END";
                cheapPriceButton.interactable = false;
                cheapPriceButton.enabled = false;

                expensivePriceButton.interactable = true;
                expensivePriceButton.enabled = true;
                textButton599.gameObject.SetActive(true);
                expensivePriceButton.gameObject.SetActive(true);
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
                textTime.text = "END";
                PlayerPrefs.SetString(retencionSpecialOfferName, "-1");

                cheapPriceButton.interactable = false;
                cheapPriceButton.enabled = false;
                redCross.gameObject.SetActive(false);
                text599.gameObject.SetActive(false);

                expensivePriceButton.interactable = true;
                expensivePriceButton.gameObject.SetActive(true);
                textButton599.gameObject.SetActive(true);
                return;
            }
            string r = "";

            secondsLeft = Math.Ceiling(secondsLeft);

            r += ((int)secondsLeft / 3600).ToString() + "h ";
            secondsLeft -= ((int)secondsLeft / 3600) * 3600;

            r += ((int)secondsLeft / 60).ToString("00") + "m ";

            r += ((int)secondsLeft % 60).ToString("00") + "s";
            textTime.text = r;

            cheapPriceButton.interactable = true;
            cheapPriceButton.enabled = true;
            redCross.gameObject.SetActive(true);
            text599.gameObject.SetActive(true);

            expensivePriceButton.interactable = false;
            expensivePriceButton.gameObject.SetActive(false);
            textButton599.gameObject.SetActive(false);
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
                PlayerPrefs.SetString(retencionSpecialOfferName, totalSecs.ToString());
            }

            if (!isInit) isInit = true;
            if (isFin) isFin = false;

        }
    }
}
