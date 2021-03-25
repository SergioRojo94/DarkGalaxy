using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GOCanvasManager : MonoBehaviour
{
    Scene mScene;
    string sceneName;
    private void Start()
    {
        mScene = SceneManager.GetActiveScene();
        sceneName = mScene.name;
    }
    public void Restart()
    {
        SceneManager.LoadScene(sceneName);
    }

   public void Exit()
    {
        Application.Quit();
    }
}
