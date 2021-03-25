using GoogleMobileAds.Api;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsScriptx3Coins : MonoBehaviour
{
    private LevelController lc;
    private RewardedAd rewardedAd;
    void Start()
    {
        lc = FindObjectOfType<LevelController>();
        MobileAds.Initialize(initStatus => { });
    }

    public void CreateAndLoadRewardedAd()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-1544592079656391/3071725558";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-1544592079656391/3071725558";
#else
            string adUnitId = "ca-app-pub-1544592079656391/3071725558";
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
        lc.Multiply3();
    }

    private void RewardedAd_OnAdClosed(object sender, System.EventArgs e)
    {
        //ad has been closed
    }
}
