using System.Collections;
using System.Collections.Generic;
using Unity.Notifications.Android;
using UnityEngine;

public class MobileNotifications : MonoBehaviour
{
    void Start() {
        //Remove notifications that have already been displayed -- I don't want this but just in case
        //AndroidNotificationCenter.CancelAllDisplayedNotifications();

        //Create the Android Notification Channel to send messages though
        //Lucky Draw
        var rouletteChannel = new AndroidNotificationChannel() {
            Id = "rouletteChannel_id",
            Name = "Notifications Channel",
            Importance = Importance.Default,
            Description = "Reminder notifications",
        };
        //Register our channel
        AndroidNotificationCenter.RegisterNotificationChannel(rouletteChannel);

        //Create the Notification that is going to be sent
        var rouletteNotification = new AndroidNotification();
        rouletteNotification.Title = "Lucky Draw is ready for you!";
        rouletteNotification.Text = "Get amazing prices for saving the Dark Galaxy";
        rouletteNotification.SmallIcon = "app_icon_small";
        rouletteNotification.LargeIcon = "app_icon_large";
        rouletteNotification.FireTime = System.DateTime.Now.AddHours(3);

        //Send the notification
        var id = AndroidNotificationCenter.SendNotification(rouletteNotification, "rouletteChannel_id");

        //If the script is run and a message is already scheduled, cancel it and schedule another message
        if (AndroidNotificationCenter.CheckScheduledNotificationStatus(id) == NotificationStatus.Scheduled) {
           // AndroidNotificationCenter.CancelAllNotifications();
            AndroidNotificationCenter.SendNotification(rouletteNotification, "rouletteChannel_id");
        }


        //Free Coins
        var freeCoinChannel = new AndroidNotificationChannel()
        {
            Id = "freeCoinChannel_id",
            Name = "Notifications Channel",
            Importance = Importance.Default,
            Description = "Reminder notifications",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(freeCoinChannel);

        var freeCoinNotification = new AndroidNotification();
        rouletteNotification.Title = "Free items for you!";
        rouletteNotification.Text = "Disconnect from work and have a good time...";
        rouletteNotification.SmallIcon = "app_icon_small";
        rouletteNotification.LargeIcon = "app_icon_large";
        rouletteNotification.FireTime = System.DateTime.Now.AddHours(11);

        var coinid = AndroidNotificationCenter.SendNotification(freeCoinNotification, "freeCoinChannel_id");

        if (AndroidNotificationCenter.CheckScheduledNotificationStatus(coinid) == NotificationStatus.Scheduled)
        {
          //  AndroidNotificationCenter.CancelAllNotifications();
            AndroidNotificationCenter.SendNotification(freeCoinNotification, "freeCoinChannel_id");
        }


    }
}
