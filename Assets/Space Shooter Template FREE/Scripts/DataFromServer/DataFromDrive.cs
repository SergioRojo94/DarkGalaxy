using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

//Json element data
public struct Data {
    public string Name;
    public string ImageURL;
}
public class DataFromDrive : MonoBehaviour
{
    [SerializeField] Text uiNameText;
    [SerializeField] RawImage uiRawImage;

    string jsonURL = "https://drive.google.com/uc?export=download&id=1XnFQXEMCKjfCTJJqBTWJ6mxNMXNr9qbD";
    void Start() {
        StartCoroutine(GetData(jsonURL));
    }

    IEnumerator GetData (string url) {
        UnityWebRequest request = UnityWebRequest.Get(url);

        yield return request.SendWebRequest();

        if (request.isNetworkError) { 
        
        }
        else {
            Data data = JsonUtility.FromJson<Data>(request.downloadHandler.text);

            //print data in UI
            uiNameText.text = data.Name;

            //Load image:
            StartCoroutine(GetImage(data.ImageURL));
        }
        request.Dispose();
    }

    IEnumerator GetImage(string url)
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);

        yield return request.SendWebRequest();

        if (request.isNetworkError)
        {

        }
        else {
            uiRawImage.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }
        request.Dispose();
    }
}
