using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DarkPause : MonoBehaviour
{
    public GameObject DarkScreen;
    private Image screen;
    private Color newAlpha = new Color(0f, 0f, 0f, 0.6f);
    void Start()
    {
        screen = DarkScreen.GetComponent<Image>();
    }

   public void Dark()
    {
        if (DarkScreen != null)
        {
            screen.color = newAlpha;
            Time.timeScale = 0.15f;
            Debug.Log(screen.color);
        }
    }
}
