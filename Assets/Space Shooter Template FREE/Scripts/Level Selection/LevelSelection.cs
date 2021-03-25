using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelSelection : MonoBehaviour
{

    [SerializeField] private bool unlocked;//Default value is false;
    public Image unlockImage;
    public GameObject[] stars;

    public Sprite starSprite;

    private void Start()
    {
        //PlayerPrefs.DeleteAll();
      /*  for (int i = 0; i < 50; i++) //used for set the stars to 0
         {
             PlayerPrefs.SetInt("Lv" + i, 0);
            Debug.Log("PUNT LV: " + i + PlayerPrefs.GetInt("Lv" + i));
         }
        PlayerPrefs.SetInt("ObtainED", 0); //obtain ED Spear
        PlayerPrefs.SetInt("EDRewardCanvas", 0);*/
    }

    private void Update()
    {
        UpdateLevelImage();//TODO MOve this method later
        UpdateLevelStatus();//TODO MOve this method later
    }

    private void UpdateLevelStatus()
    {
        //if the current lv is 5, the pre should be 4
        int previousLevelNum = int.Parse(gameObject.name) - 1;
        //Debug.Log("PREV - NiVEL: " + previousLevelNum + "tiene estrellas: " + (PlayerPrefs.GetInt("Lv" + previousLevelNum.ToString())));
        if (PlayerPrefs.GetInt("Lv" + previousLevelNum.ToString()) > 0)//If the firts level star is bigger than 0, second level can play
        {
            unlocked = true;
        }
    }

    private void UpdateLevelImage()
    {
        if(!unlocked)//MARKER if unlock is false means This level is locked!
        {
            unlockImage.gameObject.SetActive(true);
            for(int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(false);
            }
        }
        else//if unlock is true means This level can play !
        {
            unlockImage.gameObject.SetActive(false);
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].gameObject.SetActive(true);
            }

            for(int i = 0; i < PlayerPrefs.GetInt("Lv" + gameObject.name); i++)
            {
                stars[i].gameObject.GetComponent<Image>().sprite = starSprite;
            }
        }
    }

    public void PressSelection(string _LevelName)//When we press this level, we can move to the corresponding Scene to play
    {
        if(unlocked)
        {
            int hearts = PlayerPrefs.GetInt("Hearts");
            if (hearts >= 5)
            {
                hearts -= 5;
                PlayerPrefs.SetInt("Hearts", hearts);
                FindObjectOfType<SFXManager>().StopSound("LevelSelection");
                SceneManager.LoadScene(_LevelName);
            }
            else
            {
                SceneManager.LoadScene("MainMenu"); //TODO Make an adevrtising message
            }
        }
    }

}
