using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MultiplyCoins : MonoBehaviour
{
    private Score score;
    private LevelController lc;
    public bool x1, x3;
    public TextMeshProUGUI finalScoreText, scoreTextx3;
    private float scorex3;

    void Start()
    {
        x1 = false;
        x3 = false;
        lc = FindObjectOfType<LevelController>();
        score = FindObjectOfType<Score>();
        finalScoreText.text = score.GetComponent<TextMeshProUGUI>().text;
        scorex3 = float.Parse(finalScoreText.text) * 3;
        scoreTextx3.text = scorex3.ToString();
    }


    public void Multiply1() //multiply methods for coins obtained
    {
        x1 = true;
        x3 = false;
        if (lc.canSave == true)
        {
            if (x1 == true)
            {
                lc.coins = float.Parse(score.GetComponent<TextMeshProUGUI>().text);
                Debug.Log("MONEDAS X 1");
            }
            else
            {
                //TODO WATCH AN AD
                lc.coins = (float.Parse(score.GetComponent<TextMeshProUGUI>().text)) * 3;
                Debug.Log("MONEDAS X 3");

            }
        }
    }
    public void Multiply3()
    {
        if (lc.canSave == true)
        {
            if (x1 == true)
            {
                lc.coins = float.Parse(score.GetComponent<TextMeshProUGUI>().text);
                Debug.Log("MONEDAS X 1");
            }
            else
            {
                //TODO WATCH AN AD
                lc.coins = (float.Parse(score.GetComponent<TextMeshProUGUI>().text)) * 3;
                Debug.Log("MONEDAS X 3");

            }
            x3 = true;
            x1 = false;
        }
    }


}
