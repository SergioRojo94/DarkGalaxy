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
        var channel = new AndroidNotificationChannel() {
            Id = "channel_id",
            Name = "Notifications Channel",
            Importance = Importance.Default,
            Description = "Reminder notifications",
        };
        //Register our channel
        AndroidNotificationCenter.RegisterNotificationChannel(channel);

        //Create the Notification that is going to be sent
        var notification = new AndroidNotification();
        notification.Title = "Lucky Draw is ready for you!";
        notification.Text = "Get amazing prices for saving the Dark Galaxy";
        notification.FireTime = System.DateTime.Now.AddHours(3);

        //Send the notification
        var id = AndroidNotificationCenter.SendNotification(notification, "channel_id");

        //If the script is run and a message is already scheduled, cancel it and schedule another message
        if (AndroidNotificationCenter.CheckScheduledNotificationStatus(id) == NotificationStatus.Scheduled) {
            AndroidNotificationCenter.CancelAllNotifications();
            AndroidNotificationCenter.SendNotification(notification, "channel_id");
        }
    }

    void Update()
    {
        
    }
}
