using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

#region Serializable classes
[System.Serializable]
public class EnemyWaves 
{
    [Tooltip("time for wave generation from the moment the game started")]
    public float timeToStart;

    [Tooltip("Enemy wave's prefab")]
    public GameObject wave;
}

#endregion

public class LevelController : MonoBehaviour {

    //Serializable classes implements
    public EnemyWaves[] enemyWaves;
    #region Powerups & Shields
    public GameObject powerUp, powerAttackSpeedUp;
    public GameObject shieldBonus, temporalShieldBonus;
    public GameObject asteroid; //useless until Asteroid Nebula world
    public float timeForNewPowerup, timeForNewPowerAttackSpeedUp;
    public float timeForNewShield, timeForNewTemporalShield;
    #endregion

    public float timeForNewAsteroid;
    public bool asteroidGoToLeft; //associated with the direction that asteroid has when is instanciated
    public GameObject[] planets;
    public float timeBetweenPlanets;
    public float planetsSpeed;
    public int countWaves = 0;
    private DissapearCanvas dCanvas;
    private Player spaceShip;
    private Collider2D _playerCollider; //when level ends, collider of player is disabled, for not getting damage of asteroids of r something like that
    public GameObject[] playerSelec;
    private PlayerShooting pShooting; //Needed here to stop it when level ends
    private PlayerMoving pMoving; //Neded to move Player up when scene ends
    List<GameObject> planetsList = new List<GameObject>();
    protected Vector3 currentTarget = new Vector3(0, 36, 0); //Move to that direction when the scene ends;
    Camera mainCamera;
    private SFXManager sfx;

    #region special levels, such as hyperspace or missions
    public bool hyperspace = false;
    public Animator _hyperspace1, _hyperspace2;

    [SerializeField]
    public bool isMission = false;
    [SerializeField]
    public GameObject ObjMission;
    public float timeForNewObjMission;

    public bool enemyHunt = false;
    public int enemyHunted, enemyGoalHunted;
    public int objMissionGoal;
    #endregion

    #region all about score, punctuaction
    private Score score;
    private SingleLevel singleLevel;
    [SerializeField]
    public int Star1, Star2;
    public float coins; //save in player prefs
    public bool canSave = true; //necessary for control of coins saved

    public GameObject pointsPanel;
    public GameObject Image1Star, Image2Stars, Image3Stars;
    public GameObject Imagecoin1, Imagecoin2, Imagecoin3, Imagecoin4;
    public bool x1, x3;
    public TextMeshProUGUI finalScoreText, scoreTextx1, scoreTextx3, k1, k3;
    private float scorex3;
    public Button x1Button, x3Button, nextLevelButton, retryButton;
    #endregion

    #region from here just things about bosses
    public GameObject particlesH; //added more particles for a higher speed effect
    public EldritchDragon eDragon;
    public AstroTurtle aTurtle;
    #endregion
    private void Start()
    {
        mainCamera = Camera.main;
        dCanvas = FindObjectOfType<DissapearCanvas>();
        //for each element in 'enemyWaves' array creating coroutine which generates the wave
        for (int i = 0; i<enemyWaves.Length; i++) 
        {
            StartCoroutine(CreateEnemyWave(enemyWaves[i].timeToStart, enemyWaves[i].wave));
        }
        StartCoroutine(PowerupBonusCreation());
        StartCoroutine(PowerAttackSpeedupBonusCreation());
        StartCoroutine(ShieldBonusCreation());
        StartCoroutine(TemporalShieldBonusCreation());
        StartCoroutine(AsteroidsCreation());
        StartCoroutine(PlanetsCreation());
        asteroidGoToLeft = true;
        /*foreach (GameObject objX in playerSelec)
        {
            if (objX.activeInHierarchy == true)
            {
                spaceShip = objX;
            }
        }*/
        /* spaceShip = FindObjectOfType<Player>();       Esta parte está comentada porque  al elegir personaje están todos desactivados
         pShooting = FindObjectOfType<PlayerShooting>();     entonces tiene que buscarlos una vez ya esté la escena iniciada
         pMoving = FindObjectOfType<PlayerMoving>();*/
        score = FindObjectOfType<Score>();
        x1 = false;
        x3 = false;
        sfx = FindObjectOfType<SFXManager>();
        singleLevel = FindObjectOfType<SingleLevel>();
        //In case of special levels:
        if (hyperspace == true)
            StartCoroutine(HyperSpace());
        if (isMission == true)
            StartCoroutine(ObjMissionCreation());
    }

    private void Update()
    {
        NextGalaxy();
        
    }

    public void MissionCompleted() //made for levels that pplayer needs to kill x enemies or collect some diamonds
    {

        StartCoroutine(ToInfiniteAndBeyondInSpecialLevels());
    }

    IEnumerator HyperSpace() //special tripping level
    {
        yield return new WaitForSeconds(6f);
        Time.timeScale = 1.5f;
        _hyperspace1.SetTrigger("HyperSpace");
        _hyperspace2.SetTrigger("HyperSpace");
        planetsSpeed = planetsSpeed * 4;
        timeBetweenPlanets = timeBetweenPlanets / 2;
    }

    private void NextGalaxy()
    {
        //dCanvas.canPause = false;
        if (SceneManager.GetActiveScene().name != "1.29" && SceneManager.GetActiveScene().name != "2.28")
        {
            if (countWaves == enemyWaves.Length)
            {
                dCanvas.canPause = false;
                StartCoroutine(ToInfiniteAndBeyond());
            }
        }
        else if (SceneManager.GetActiveScene().name == "1.29")
        {
            if (eDragon._isDead == true)
            {
                dCanvas.canPause = false;
                PlayerPrefs.SetInt("UnlockWorld2", 1);
                PlayerPrefs.SetInt("LevelSelec", 1);
                StartCoroutine(ToInfiniteAndBeyondAfterBoss());
            }   
        }
        else if (SceneManager.GetActiveScene().name == "2.28")
        {
            if (aTurtle._isDead == true)
            {
                dCanvas.canPause = false;
                StartCoroutine(ToInfiniteAndBeyondAfterBoss());
                //TODO LINK NEXT WORLDS
            }
        }
    }


    public void Multiply1() //multiply methods for coins obtained
    {
        x1Button.enabled = false;                   //disable buttons and coins
        x1Button.interactable = false;
        x1Button.gameObject.SetActive(false);
        x3Button.enabled = false;
        x3Button.interactable = false;
        x3Button.gameObject.SetActive(false);

        Imagecoin1.SetActive(false);
        Imagecoin2.SetActive(false);
        Imagecoin3.SetActive(false);
        Imagecoin4.SetActive(false);

        scoreTextx1.gameObject.SetActive(false);
        scoreTextx3.gameObject.SetActive(false);
        k1.gameObject.SetActive(false);
        k3.gameObject.SetActive(false);

        x1 = true;
        x3 = false;
        sfx.Play("PlayerSelection");
        if (canSave == true)
        {
            int points = int.Parse(score.GetComponent<TextMeshProUGUI>().text);
            if (x1 == true)
            {
                coins = float.Parse(score.GetComponent<TextMeshProUGUI>().text);
                Debug.Log("MONEDAS X 1");
            }
            else
            {
                //TODO WATCH AN AD
                coins = (float.Parse(score.GetComponent<TextMeshProUGUI>().text)) * 3;
                Debug.Log("MONEDAS X 3");

            }
            Debug.Log("Coins como tal: " + coins);
            float savedCoins = PlayerPrefs.GetFloat("Coins");
            savedCoins += coins;
            Debug.Log("Monedas que se vana  guardar: " + savedCoins);
            PlayerPrefs.SetFloat("Coins", savedCoins);
            canSave = false;
            pointsPanel.SetActive(false);
            Debug.Log("Points: " + points);
            if (points >= Star1 && points < Star2)              //set stars achieved and enable 'next level' and 'retry' buttons
            {
                singleLevel.PressStarsButton(2);
                Image2Stars.gameObject.SetActive(true);
                // Debug.Log("Has conseguido 2 estrellas ");
            }
            else if (points >= Star2)
            {
                singleLevel.PressStarsButton(3);
                Image3Stars.gameObject.SetActive(true);
                // Debug.Log("Has conseguido 3 estrellas ");
            }
            else
            {
                singleLevel.PressStarsButton(1);
                Image1Star.gameObject.SetActive(true);
                // Debug.Log("Has conseguido 1 estrella ");
            }
            nextLevelButton.gameObject.SetActive(true);      
            retryButton.gameObject.SetActive(true);
           // StartCoroutine(InvisibleShip());
        }
    }
    public void Multiply3()
    {
        x1Button.enabled = false;
        x1Button.interactable = false;
        x1Button.gameObject.SetActive(false);
        x3Button.enabled = false;
        x3Button.interactable = false;
        x3Button.gameObject.SetActive(false);

        Imagecoin1.SetActive(false);
        Imagecoin2.SetActive(false);
        Imagecoin3.SetActive(false);
        Imagecoin4.SetActive(false);

        scoreTextx1.gameObject.SetActive(false);
        scoreTextx3.gameObject.SetActive(false);
        k1.gameObject.SetActive(false);
        k3.gameObject.SetActive(false);

        x3 = true;
        x1 = false;
        sfx.Play("PlayerSelection");
        int points = int.Parse(score.GetComponent<TextMeshProUGUI>().text);
        if (canSave == true)
        {
            
            if (x1 == true)
            {
                coins = float.Parse(score.GetComponent<TextMeshProUGUI>().text);
                Debug.Log("MONEDAS X 1");
            }
            else
            {
                //TODO WATCH AN AD
                coins = (float.Parse(score.GetComponent<TextMeshProUGUI>().text)) * 3;
                Debug.Log("MONEDAS X 3");
            }
            }
            Debug.Log("Coins como tal: " + coins);
            float savedCoins = PlayerPrefs.GetFloat("Coins");
            savedCoins += coins;
            Debug.Log("Monedas que se vana  guardar: " + savedCoins);
            PlayerPrefs.SetFloat("Coins", savedCoins);
            canSave = false;
            pointsPanel.SetActive(false);
        

        if (points >= Star1 && points < Star2)
            {
                singleLevel.PressStarsButton(2);
                Image2Stars.gameObject.SetActive(true);
            }
            else if (points >= Star2)
            {
                singleLevel.PressStarsButton(3);
                Image3Stars.gameObject.SetActive(true);
            }
            else
            {
                singleLevel.PressStarsButton(1);
                Image1Star.gameObject.SetActive(true);
            }
        if (SceneManager.GetActiveScene().name == "2.13" || SceneManager.GetActiveScene().name == "2.26")
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        nextLevelButton.gameObject.SetActive(true);  
        retryButton.gameObject.SetActive(true);
        // StartCoroutine(InvisibleShip());
    }

    public void NextLevel()
    {
        sfx.Play("PlayerSelection");
        nextLevelButton.interactable = false;
        retryButton.interactable = false;
        nextLevelButton.gameObject.SetActive(false);
        retryButton.gameObject.SetActive(false);
        FindObjectOfType<SFXManager>().StopSound(dCanvas.song);
        StartCoroutine(InvisibleShip());
    }

    public void Retry()
    {
        sfx.Play("PlayerSelection");
        nextLevelButton.interactable = false;
        retryButton.interactable = false;
        nextLevelButton.gameObject.SetActive(false);
        retryButton.gameObject.SetActive(false);
        FindObjectOfType<SFXManager>().StopSound(dCanvas.song);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    IEnumerator ToInfiniteAndBeyond()
    {
 
        spaceShip = FindObjectOfType<Player>();
        pShooting = FindObjectOfType<PlayerShooting>();
        pMoving = FindObjectOfType<PlayerMoving>();
        _playerCollider = spaceShip.GetComponent<Collider2D>();
        yield return new WaitForSeconds(6.5f);  //canvas appears. The player can choose between take the score as coins or watch an ad and get x3 value coins.
       // FindObjectOfType<SFXManager>().Play("VictorySound");
        pMoving.controlIsActive = false;
        _playerCollider.enabled = false;
        pShooting.shootingIsActive = false;
        particlesH.SetActive(true);
        spaceShip.transform.position = Vector3.MoveTowards(spaceShip.transform.position, currentTarget, 9f * Time.deltaTime); //spaceship flies to infinity and beyond!

        yield return new WaitForSeconds(2f);
        pointsPanel.SetActive(true);



        //int points = int.Parse(score.GetComponent<TextMeshProUGUI>().text);
        finalScoreText.text = score.GetComponent<TextMeshProUGUI>().text;
        scorex3 = (float.Parse(finalScoreText.text) * 3)/1000;
        float score1 = (float.Parse(finalScoreText.text)) / 1000;
        scoreTextx1.text = score1.ToString();
        scoreTextx3.text = scorex3.ToString();
        /*if (canSave == true)
        {
            if (mCoins.x1 == true)
            {
                coins = float.Parse(score.GetComponent<TextMeshProUGUI>().text);
                Debug.Log("MONEDAS X 1");
            }
            else
            {
                //TODO WATCH AN AD
                coins = (float.Parse(score.GetComponent<TextMeshProUGUI>().text))*3;
                Debug.Log("MONEDAS X 3");

            }
            Debug.Log("Coins como tal: " + coins);
            float savedCoins = PlayerPrefs.GetFloat("Coins");
            savedCoins += coins;
            Debug.Log("Monedas que se vana  guardar: " + savedCoins);
            PlayerPrefs.SetFloat("Coins", savedCoins);
            canSave = false;
        }*/

        //set stars keeping in mind the score
       /* if (points >= Star1 && points < Star2)
            {
                singleLevel.PressStarsButton(2);
               // Debug.Log("Has conseguido 2 estrellas ");
            }
            else if (points >= Star2)
            {
                singleLevel.PressStarsButton(3);
               // Debug.Log("Has conseguido 3 estrellas ");
            }
            else
            {
                singleLevel.PressStarsButton(1);
               // Debug.Log("Has conseguido 1 estrella ");
            }
        
        StartCoroutine(InvisibleShip());*/
    }

    IEnumerator ToInfiniteAndBeyondInSpecialLevels()
    {
        spaceShip = FindObjectOfType<Player>();
        pShooting = FindObjectOfType<PlayerShooting>();
        pMoving = FindObjectOfType<PlayerMoving>();
        dCanvas.canPause = false;
        _playerCollider = spaceShip.GetComponent<Collider2D>();

        yield return new WaitForSeconds(1f);
        //FindObjectOfType<SFXManager>().StopSound(dCanvas.song);
       // FindObjectOfType<SFXManager>().Play("VictorySound");
        pMoving.controlIsActive = false;
        _playerCollider.enabled = false;
        pShooting.shootingIsActive = false;
        particlesH.SetActive(true);
        spaceShip.transform.position = Vector3.MoveTowards(spaceShip.transform.position, currentTarget, 9f * Time.deltaTime);

        yield return new WaitForSeconds(3f);
        pointsPanel.SetActive(true);

        finalScoreText.text = score.GetComponent<TextMeshProUGUI>().text;
        scorex3 = (float.Parse(finalScoreText.text) * 3) / 1000;
        float score1 = (float.Parse(finalScoreText.text)) / 1000;
        scoreTextx1.text = score1.ToString();
        scoreTextx3.text = scorex3.ToString();
    }


    IEnumerator ToInfiniteAndBeyondAfterBoss()
    {
        dCanvas.canPause = false;
        spaceShip = FindObjectOfType<Player>();
        pShooting = FindObjectOfType<PlayerShooting>();
        pMoving = FindObjectOfType<PlayerMoving>();
        _playerCollider = spaceShip.GetComponent<Collider2D>();
        yield return new WaitForSeconds(4f);
        //FindObjectOfType<SFXManager>().StopSound(dCanvas.song);
       // FindObjectOfType<SFXManager>().Play("VictorySound");
        pMoving.controlIsActive = false;
        pShooting.shootingIsActive = false;
        _playerCollider.enabled = false;
        particlesH.SetActive(true);


        spaceShip.transform.position = Vector3.MoveTowards(spaceShip.transform.position, currentTarget, 9f * Time.deltaTime);

        yield return new WaitForSeconds(2f);
        pointsPanel.SetActive(true);

        finalScoreText.text = score.GetComponent<TextMeshProUGUI>().text;
        scorex3 = (float.Parse(finalScoreText.text) * 3) / 1000;
        float score1 = (float.Parse(finalScoreText.text)) / 1000;
        scoreTextx1.text = score1.ToString();
        scoreTextx3.text = scorex3.ToString();

    }

    IEnumerator InvisibleShip()
    {
        yield return new WaitForSeconds(1.5f);
        spaceShip.GetComponent<SpriteRenderer>().enabled = false;
        if (SceneManager.GetActiveScene().name == "1.9" || SceneManager.GetActiveScene().name == "1.29" || SceneManager.GetActiveScene().name == "2.28")
            SceneManager.LoadScene("MainMenu");
        else if (SceneManager.GetActiveScene().name == "1.28")
        {
            PlayerPrefs.SetInt("Lvl28Finish", 1);
            SceneManager.LoadScene("00_Level Selection");
        }
        else if (SceneManager.GetActiveScene().name == "2.27")
        {
            PlayerPrefs.SetInt("Lvl57Finish", 1);
            SceneManager.LoadScene("01_Level Selection");
        }
        else
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    //Create a new wave after a delay
    IEnumerator CreateEnemyWave(float delay, GameObject Wave) 
    {
        if (delay != 0)
            yield return new WaitForSeconds(delay);
        if (Player.instance != null)
            Instantiate(Wave);
        countWaves++;
    }

    //endless coroutine generating 'levelUp' bonuses. 
    IEnumerator PowerupBonusCreation() 
    {
        while (true) 
        {
            yield return new WaitForSeconds(timeForNewPowerup);
            Instantiate(
                powerUp,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX, PlayerMoving.instance.borders.maxX), 
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + powerUp.GetComponent<Renderer>().bounds.size.y / 2), 
                Quaternion.identity
                );
        }
    }

    IEnumerator PowerAttackSpeedupBonusCreation()
    {
        while (true)
        {
            yield return new WaitForSeconds(timeForNewPowerAttackSpeedUp);
            Instantiate(
                powerAttackSpeedUp,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX, PlayerMoving.instance.borders.maxX),
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + powerUp.GetComponent<Renderer>().bounds.size.y / 2),
                Quaternion.identity
                );
        }
    }

    //coroutine generating asteroids (Asteroid Nebula world)
    IEnumerator AsteroidsCreation()
    {
        while (true)
        {
            yield return new WaitForSeconds(timeForNewAsteroid);
            if (asteroidGoToLeft == true) //used for change asteroid rotating direction when appears
                asteroidGoToLeft = false;
            else
                asteroidGoToLeft = true;
            Instantiate(
                asteroid,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX + 2.5f  , PlayerMoving.instance.borders.maxX -2.5f ),
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + powerUp.GetComponent<Renderer>().bounds.size.y / 2),
                Quaternion.identity
                );
        }
    }
    //endless coroutine generating 'shield' bonuses. 
    IEnumerator ShieldBonusCreation()
    {
        while (true)
        {
            yield return new WaitForSeconds(timeForNewShield);
            Instantiate(
                shieldBonus,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX, PlayerMoving.instance.borders.maxX),
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + shieldBonus.GetComponent<Renderer>().bounds.size.y / 2),
                Quaternion.identity
                );
        }
    }

    IEnumerator ObjMissionCreation()
    {
        while (true)
        {
            yield return new WaitForSeconds(timeForNewObjMission);
            Instantiate(
                ObjMission,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX, PlayerMoving.instance.borders.maxX),
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + ObjMission.GetComponentInChildren<Renderer>().bounds.size.y / 2),
                Quaternion.identity
                );
        }
    }
    IEnumerator TemporalShieldBonusCreation()
    {
        while (true)
        {
            yield return new WaitForSeconds(timeForNewTemporalShield);
            Instantiate(
                temporalShieldBonus,
                //Set the position for the new bonus: for X-axis - random position between the borders of 'Player's' movement; for Y-axis - right above the upper screen border 
                new Vector2(
                    Random.Range(PlayerMoving.instance.borders.minX, PlayerMoving.instance.borders.maxX),
                    mainCamera.ViewportToWorldPoint(Vector2.up).y + shieldBonus.GetComponent<Renderer>().bounds.size.y / 2),
                Quaternion.identity
                );
        }
    }

    IEnumerator PlanetsCreation()
    {
        //Create a new list copying the arrey
        for (int i = 0; i < planets.Length; i++)
        {
            planetsList.Add(planets[i]);
        }
        yield return new WaitForSeconds(10);
        while (true)
        {
            ////choose random object from the list, generate and delete it
            int randomIndex = Random.Range(0, planetsList.Count);
            GameObject newPlanet = Instantiate(planetsList[randomIndex]);
            planetsList.RemoveAt(randomIndex);
            //if the list decreased to zero, reinstall it
            if (planetsList.Count == 0)
            {
                for (int i = 0; i < planets.Length; i++)
                {
                    planetsList.Add(planets[i]);
                }
            }
            newPlanet.GetComponent<DirectMoving>().speed = planetsSpeed;

            yield return new WaitForSeconds(timeBetweenPlanets);
        }
    }
}
