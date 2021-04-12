using System.Collections;
using UnityEngine.Networking;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace UpgradeSystem {

    struct GameData
    {
        public string Description;
        public string Version;
        public string Url;
    }
    public class NewUpdatesPopupUI : MonoBehaviour {
        [Header("## UI References :")]
        [SerializeField] GameObject UiCanvas;
        [SerializeField] Button notNowButton;
        [SerializeField] Button updateButton;
        [SerializeField] TextMeshProUGUI descriptionText;

        [Space(20f)]
        [Header("## Settings : ")]
        [SerializeField] [TextArea(1, 5)] string jsonDataURL;

        static bool isAlreadyCheckedForUpdates = false;

        GameData latestGameData;

        void Start() {
            if( !isAlreadyCheckedForUpdates)
            {
                StopAllCoroutines();
                StartCoroutine(CheckForUpdates());
            }
        }

        IEnumerator CheckForUpdates() {
            UnityWebRequest request = UnityWebRequest.Get(jsonDataURL);
            request.chunkedTransfer = false;
            request.disposeDownloadHandlerOnDispose = true;
            request.timeout = 60;

            yield return request.Send();

            if (request.isDone)
                isAlreadyCheckedForUpdates = true;
            if (!request.isNetworkError)
            {
                latestGameData = JsonUtility.FromJson<GameData>(request.downloadHandler.text);

                //Compare version with version in JSON file
                if (!string.IsNullOrEmpty (latestGameData.Version) && !Application.version.Equals(latestGameData.Version)) {
                    //new update is available
                    descriptionText.text = latestGameData.Description;
                    ShowPopup();
                }
            }
            request.Dispose();
        }
        //Add buttons click listeners:
        void ShowPopup() {
            notNowButton.onClick.AddListener(() =>
          {
              HidePopup();
          });
            updateButton.onClick.AddListener(() =>
            {
                Application.OpenURL(latestGameData.Url);
                HidePopup();
            });
            UiCanvas.SetActive(true);
        }

        void HidePopup() {
            UiCanvas.SetActive(false);

            //Remove buttons click listeners:
            notNowButton.onClick.RemoveAllListeners();
            updateButton.onClick.RemoveAllListeners();
        }

        void OnDestroy()
        {
            StopAllCoroutines();
        }
    }
   
}
