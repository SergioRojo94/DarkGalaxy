using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;

public class CheckInternet : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI connectionErrorText;
    [SerializeField] Button buyButton;
    void Start()
    {
        StartCoroutine(CheckInternetConnection());
    }

    IEnumerator CheckInternetConnection() //calls Gooogle and wait for response. 
    {
        UnityWebRequest request = new UnityWebRequest("http://google.com");
        yield return request.SendWebRequest();

        if (request.error != null)              //If its null, error text appears
        {
            buyButton.gameObject.SetActive(false);
            connectionErrorText.gameObject.SetActive(true);
        }
        else                                    //Else, buyButton appears
        {
            buyButton.gameObject.SetActive(true);
            connectionErrorText.gameObject.SetActive(false);
        }
    }
}
