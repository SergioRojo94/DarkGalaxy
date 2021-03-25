using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToSceneAfterSecs : MonoBehaviour
{
    public float secs;
    public string scene;
    private string currentSceneName; //discriminate scene
    void Start()
    {
        currentSceneName = SceneManager.GetActiveScene().name;
        if (currentSceneName == "InitialScene")
        {
            StartCoroutine(GTSAIS());
        }
        else
        {
            StartCoroutine(GTSAS());
        }

    }

    IEnumerator GTSAS()
    {
        yield return new WaitForSeconds(secs);
        bl_SceneLoaderUtils.GetLoader.LoadLevel(scene);
    }

    IEnumerator GTSAIS()
    {
        yield return new WaitForSeconds(secs);
        SceneManager.LoadScene(scene);
    }
}
