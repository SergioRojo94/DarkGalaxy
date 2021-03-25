
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchLevel : MonoBehaviour
{
    private GameObject[] switchLevel;
    private int index;

    void Start()
    {
        index = PlayerPrefs.GetInt("LevelSelec");
        switchLevel = new GameObject[transform.childCount];

        for (int i = 0; i < transform.childCount; i++)
            switchLevel[i] = transform.GetChild(i).gameObject;

        foreach (GameObject objX in switchLevel)
            objX.SetActive(false);

        if (switchLevel[index])
            switchLevel[index].SetActive(true);
    }

    public void BtnLeftChoose()
    {
        switchLevel[index].SetActive(false);
        index--;
        if (index < 0)
            index = switchLevel.Length - 1;
        switchLevel[index].SetActive(true);
    }

    public void BtnRightChoose()
    {
        switchLevel[index].SetActive(false);
        index++;
        if (index == switchLevel.Length)
            index = 0;
        switchLevel[index].SetActive(true);
    }


    public void LoadScene()
    {
        PlayerPrefs.SetInt("LevelSelec", index);
        int LvlSelection = PlayerPrefs.GetInt("LevelSelec");
        switch (LvlSelection)
        {
            case 0:
                SceneManager.LoadScene("00_Level Selection");
                break;
            case 1:
                SceneManager.LoadScene("01_Level Selection");
                break;
        }
    }
}
