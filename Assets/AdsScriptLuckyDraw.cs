using GoogleMobileAds.Api;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsScriptLuckyDraw : MonoBehaviour
{
    private FortuneWheelManager fwm;
    private RewardedAd rewardedAd;
    void Start()
    {
        fwm = FindObjectOfType<FortuneWheelManager>();
        MobileAds.Initialize(initStatus => { });
    }

    public void CreateAndLoadRewardedAd()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-1544592079656391/4900291475";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-1544592079656391/4900291475";
#else
            string adUnitId = "ca-app-pub-1544592079656391/4900291475";
#endif

        this.rewardedAd = new RewardedAd(adUnitId);

        this.rewardedAd.OnAdLoaded += RewardedAd_OnAdLoaded;
        this.rewardedAd.OnUserEarnedReward += RewardedAd_OnUserEarnedReward;
        this.rewardedAd.OnAdClosed += RewardedAd_OnAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }
    private void RewardedAd_OnAdLoaded(object sender, System.EventArgs e)
    {
        rewardedAd.Show();
    }

    private void RewardedAd_OnUserEarnedReward(object sender, Reward e)
    {
        fwm.TurnWheel();
    }

    private void RewardedAd_OnAdClosed(object sender, System.EventArgs e)
    {
        //ad has been closed
    }
}
