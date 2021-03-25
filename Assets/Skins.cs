using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Skins : MonoBehaviour
{
    /*TODO: Would be if there were a only script called 'Skins' for all skins
        So, this is only for the first ship */
    public GameObject[] skins;
    private int skinSelected;

    private void Start()
    {
        skinSelected = PlayerPrefs.GetInt("InitialSoldierSkin");
        //if (skinSelected == 1)
       // {
            skins = new GameObject[transform.childCount];
            for (int i = 0; i < transform.childCount; i++)
                skins[i] = transform.GetChild(i).gameObject;

            foreach (GameObject objX in skins)
                objX.SetActive(false);

            if (skins[skinSelected])
                skins[skinSelected].SetActive(true);
       // }

    }
}
