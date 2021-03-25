using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Fade : MonoBehaviour
{
    //this script controlls initial fade out of logo when the game starts
    public Image fade;
    void Start()
    {
        StartCoroutine(Fading());
    }

    IEnumerator Fading()
    {
           yield return new WaitForSeconds(2);
            fade.CrossFadeAlpha(0, 3, true);
    }
}
