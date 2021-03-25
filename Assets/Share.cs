
using UnityEngine.UI;
using UnityEngine;

public class Share : MonoBehaviour
{
    public void OpenProfile()
    {
        Application.OpenURL("https://play.google.com/store/apps/developer?id=Serendipia+Games");
    }

    public void Rate()
    {
        // "market" works for android  (iOS: put your app link
        Application.OpenURL("market://details?id=com.SerendipiaGames.DarkGalaxy"); //your id and package name should be here
    }
}
