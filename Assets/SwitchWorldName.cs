using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchWorldName : MonoBehaviour
{
    private GameObject[] switchWorldName;
    private int index;

    void Start()
    {
        index = PlayerPrefs.GetInt("LevelSelec");
        switchWorldName = new GameObject[transform.childCount];

        for (int i = 0; i < transform.childCount; i++)
            switchWorldName[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in switchWorldName)
            objX.SetActive(false);

        if (switchWorldName[index])
            switchWorldName[index].SetActive(true);
    }

    public void BtnLeftChoose()
    {
        switchWorldName[index].SetActive(false);
        index--;
        if (index < 0)
            index = switchWorldName.Length - 1;
        switchWorldName[index].SetActive(true);
    }

    public void BtnRightChoose()
    {
        switchWorldName[index].SetActive(false);
        index++;
        if (index == switchWorldName.Length)
            index = 0;
        switchWorldName[index].SetActive(true);
    }
}
