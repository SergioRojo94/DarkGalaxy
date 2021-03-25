using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinsGrauss : MonoBehaviour
{
    public GameObject[] skins;
    private int skinSelected;

    private void Start()
    {
        skinSelected = PlayerPrefs.GetInt("GraussSkin");
        skins = new GameObject[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
            skins[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in skins)
            objX.SetActive(false);

        if (skins[skinSelected])
            skins[skinSelected].SetActive(true);
    }
}
