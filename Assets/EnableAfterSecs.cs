using System.Collections;
using UnityEngine;

public class EnableAfterSecs : MonoBehaviour
{
    public GameObject gameObj;
    public float secs;
    void Start()
    {
        gameObj.SetActive(false);
        StartCoroutine(EnableIcon());
    }

    IEnumerator EnableIcon()
    {
        yield return new WaitForSeconds(secs);
        gameObj.SetActive(true);

    }

}
