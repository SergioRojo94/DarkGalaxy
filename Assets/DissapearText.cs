using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DissapearText : MonoBehaviour
{
    
    void Update()
    {
        if (gameObject.activeInHierarchy)
        StartCoroutine(DisableText());
    }

   IEnumerator DisableText()
    {
        yield return new WaitForSeconds(2);
        gameObject.SetActive(false);
    }
}
