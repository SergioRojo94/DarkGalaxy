using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetSkinPlayerPref : MonoBehaviour
{
    //this script is used in shopship for selecting which ship will be examined for skins
    public GameObject[] PSelec;
    public int cont; //detect the ship that is active
    void Start()
    {
        cont = 0;
    }

    public void GetObjectActive()
    {
        foreach (GameObject obj in PSelec)
        {
            cont++;
            if (obj.activeInHierarchy)
            {
                PlayerPrefs.SetInt("ShipForSkin", cont);
            }
        }
    }
}
