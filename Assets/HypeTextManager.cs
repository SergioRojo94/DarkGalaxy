using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HypeTextManager : MonoBehaviour
{
    private DissapearCanvas dc;
    public GameObject[] HypeTexts;
    public bool streak = false;
    private int numberReference; 
    void Start()
    {
        dc = FindObjectOfType<DissapearCanvas>();
    }

    // Update is called once per frame
    void Update()
    {
        ChangeHypeText();
        if (streak == true)
            StartGoHype();
    }

    public void ChangeHypeText()
    {
        if (dc.hypeCounter > 5 && dc.hypeCounter <= 16)
        {
            HypeTexts[0].SetActive(true);
            numberReference = 16;
        }
        if (dc.hypeCounter > 16 && dc.hypeCounter <= 30)
        {
            HypeTexts[0].SetActive(false);
            HypeTexts[1].SetActive(true);
            numberReference = 30;
        }
        if (dc.hypeCounter > 30 && dc.hypeCounter <= 50)
        {
            HypeTexts[1].SetActive(false);
            HypeTexts[2].SetActive(true);
            numberReference = 50;
        }
        if (dc.hypeCounter > 50 && dc.hypeCounter <= 65)
        {
            HypeTexts[2].SetActive(false);
            HypeTexts[3].SetActive(true);
            numberReference = 65;
        }
        if (dc.hypeCounter > 65 && dc.hypeCounter <= 85)
        {
            HypeTexts[3].SetActive(false);
            HypeTexts[4].SetActive(true);
            numberReference = 85;
        }
        if (dc.hypeCounter > 85)
        {
            HypeTexts[4].SetActive(false);
            HypeTexts[5].SetActive(true);
        }
    }
    public void StartGoHype() //called everytime an enemy is destroyed
    {
        StartCoroutine(GoHype());
    }
    IEnumerator GoHype() //method that enable/disable hypetext
    {
        yield return new WaitForSeconds(2.5f);
        if (dc.checkHype == numberReference)
        {
            foreach (GameObject go in HypeTexts)
            {
                go.SetActive(false);
                dc.hypeCounter = 0;
                dc.checkHype = 0;
            }
        }
    }
}
