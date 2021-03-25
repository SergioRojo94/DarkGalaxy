using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DissapearCanvas : MonoBehaviour
{
    public GameObject text1, text2, text3, continueCanvas, PauseCanvas, PointsCanvas, continueButton;
    private Image DarkScreen, PauseScreen;
    private Image screen;
    private Color newAlpha = new Color(0f, 0f, 0f, 0.55f);
    private Color original = new Color(0f, 0f, 0f, 0f);
    private Player player;
    private PlayerShooting pShooting;
    private PlayerMoving pMoving;
    private LevelController lc;
    public bool canPause = false; //used for giving the game some time to start, an not be paused at start

    public string song;
    private int hearts;
    private bool firstTime = true; //controls that player cannot push twice continue button
    #region here comes the variables that allows show in the screen hype words when destroy enemies
    public bool hype;       
    public int hypeCounter, checkHype;

    #endregion
    void Start()
    {
        StartCoroutine(DestroyCanvas());
        DarkScreen = GetComponentInChildren<Image>();
        PauseScreen = PauseCanvas.GetComponentInChildren<Image>();
        screen = DarkScreen.GetComponent<Image>();
        lc = FindObjectOfType<LevelController>();
        StartCoroutine(ActivePause());
        FindObjectOfType<SFXManager>().Play(song);
        hypeCounter = 0;
        checkHype = 0;
        pMoving = FindObjectOfType<PlayerMoving>();
       // player = FindObjectOfType<Player>();
       // pShooting = FindObjectOfType<PlayerShooting>();
    }

     private void Update() //if player holds finger of screen, the game is paused
      {
         if (continueCanvas.activeInHierarchy == false)
           {
               if (Input.touchCount <= 0 && canPause == true)
               {
                   PauseGame();
               }
               if (Input.touchCount > 0 && continueCanvas.gameObject.activeInHierarchy == false)
               {
                   QuitPause();
               }
           }
        if (firstTime == false) //the first time the player dies, appears 'continue' button
          {
              continueButton.SetActive(false);
          }

      }

    IEnumerator ActivePause() //Routine than let the game start without pause
    {
        yield return new WaitForSeconds(3);
        canPause = true;
    }
    public void Dark() //when player is destroyed, screen goes dark and time goes slower
    {
        if (DarkScreen != null)
        {
            screen.color = newAlpha;
            Time.timeScale = 0.025f;
            continueCanvas.gameObject.SetActive(true);
        }
    }

    public void PauseGame()  //when player stop touch the screen, it pauses automatically
    {
        if (canPause == true)
        {
            if (PauseScreen != null)
            {
                pMoving = FindObjectOfType<PlayerMoving>();
                screen.color = newAlpha;
                FindObjectOfType<SFXManager>().PauseSound(song);
                //Time.timeScale = 0.04f; //hacer que se reduzca el tiempo gradualmente
                // StartCoroutine(SlowTime()); // improve in the future
                Time.timeScale = 0f;
                PauseCanvas.gameObject.SetActive(true);
                pMoving.enabled = false;
            }
             if (Input.touchCount > 0) //could be nice if quit pause were called here, for not overload update method.
              {
                QuitPause();
              }
        }
    }
       
    public void QuitPause()
    {
        PauseCanvas.gameObject.SetActive(false);
        FindObjectOfType<SFXManager>().UnpauseSound(song);
        pMoving = FindObjectOfType<PlayerMoving>();
        if (lc.hyperspace == false)
        {
            Time.timeScale = 1f;
            pMoving.enabled = true;
        }
        else
        {
            Time.timeScale = 1.5f; //if hyperspace is activated, scene comes back to hyper velocity
            pMoving.enabled = true;
        }
        screen.color = original;
    }

    public void BackTomenu()
    {
        if (lc.hyperspace == false)
        {
            Time.timeScale = 1f;
        }
        else
        {
            Time.timeScale = 1.5f; //if hyperspace is activated, scene comes back to hyper velocity
        }
        SceneManager.LoadScene("MainMenu");
        FindObjectOfType<SFXManager>().StopSound(song);
        FindObjectOfType<SFXManager>().Play("MainMenu");
    }
    public IEnumerator SlowTime() //improve in the future
    {

      /*  for (int i = 0; i < 150; i++)
        {
            yield return new WaitForSeconds(0.004f);
            Time.timeScale -= 0.015f;
        }*/
        for (int i = 0; i <= 8; i++)
        {
                yield return new WaitForSeconds(0.002f);
                Time.timeScale -= 0.197f;
        }

       /* yield return new WaitForSeconds(0.002f);
                Time.timeScale = 0f;*/
    }

    public void Continue()
    {
        continueCanvas.gameObject.SetActive(false);
        firstTime = false;
        player = FindObjectOfType<Player>();
        pShooting = FindObjectOfType<PlayerShooting>();
        player._playerSprite.enabled = true;
        player.TemporalShieldUp();
        pShooting.shootingIsActive = true;
        player.Health = player.initialHealth;

        if (player.initialHealth > 1)
        {
            player._anim.SetTrigger("Restore");
            player.Smoke.SetActive(false);
        }
 
        if (lc.hyperspace == false)
        {
            Time.timeScale = 1f;
        }
        else
        {
            Time.timeScale = 1.5f; //if hyperspace is activated, scene comes back to hyper velocity
        }
        screen.color = original;
    }

    public void Restart()
    {
        string scene = SceneManager.GetActiveScene().name;
        hearts = PlayerPrefs.GetInt("Hearts");
        if (hearts < 5)
            SceneManager.LoadScene("MainMenu");
        else
        {
            hearts -= 5;
            PlayerPrefs.SetInt("Hearts", hearts);
            if (scene == "1.9")
                SceneManager.LoadScene("00_Level Selection"); //just for fix a bug
            else
                SceneManager.LoadScene(scene);
            if (lc.hyperspace == false)
            {
                Time.timeScale = 1f;
            }
            else
            {
                Time.timeScale = 1.5f; //if hyperspace is activated, scene comes back to hyper velocity
            }
        }
       

    }

   /* public void PointsCanvasAppears()
    {
        PointsCanvas.SetActive(true);
    }*/
    IEnumerator DestroyCanvas()
    {
        yield return new WaitForSeconds(3.2f);
        text1.gameObject.SetActive(false);
        text2.gameObject.SetActive(false);
        StartCoroutine(AppearsText());
    }

    IEnumerator AppearsText()
    {
        yield return new WaitForSeconds(1f);
        text3.SetActive(true);
        yield return new WaitForSeconds(3f);
        text3.SetActive(false);
    }
}
