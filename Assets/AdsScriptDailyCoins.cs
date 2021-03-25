using GoogleMobileAds.Api;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsScriptDailyCoins : MonoBehaviour
{
    private GainResources gr;
    private RewardedAd rewardedAd;
    void Start()
    {
        gr = FindObjectOfType<GainResources>();
        MobileAds.Initialize(initStatus => { });
    }

    public void CreateAndLoadRewardedAd()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-1544592079656391/9181838333";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-1544592079656391/9181838333";
#else
            string adUnitId = "ca-app-pub-1544592079656391/9181838333";
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
        gr.GainCoins(10000);
    }

    private void RewardedAd_OnAdClosed(object sender, System.EventArgs e)
    {
        //ad has been closed
    }
}
