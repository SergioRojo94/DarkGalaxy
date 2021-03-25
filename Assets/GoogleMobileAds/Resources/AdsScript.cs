﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class AdsScript : MonoBehaviour //just a template for all admob reward ads
{
    private RewardedAd rewardedAd;
   
    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });
    }

    public void CreateAndLoadRewardedAd()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#else
            string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#endif

        this.rewardedAd = new RewardedAd(adUnitId);

        this.rewardedAd.OnAdLoaded += RewardedAd_OnAdLoaded;
        this.rewardedAd.OnUserEarnedReward += RewardedAd_OnAdLoaded;
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
         //reward your user
     }

     private void RewardedAd_OnAdClosed(object sender, System.EventArgs e)
     {
         //ad has been closed
     }
}
