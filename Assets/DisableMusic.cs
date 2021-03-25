using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableMusic : MonoBehaviour
{
    public GameObject OnButton, OffButton;
    private SFXManager sfx;
    private PlayerMoving playerMov;
    void Start()
    {
  
        sfx = FindObjectOfType<SFXManager>();
        if (sfx == null)
            return;
        if (sfx.musicIsActive == true)
        {
            OffButton.SetActive(true);
            OnButton.SetActive(false);
        }
        else
        {
            OffButton.SetActive(false);
            OnButton.SetActive(true);
        }
    }

    public void AllowMusic()
    {
        if (OnButton.activeInHierarchy == true)
        {
            OffButton.SetActive(true);
            OnButton.SetActive(false);
            sfx.ReanudeAllSound();
        }
        else
        {
            OffButton.SetActive(false);
            OnButton.SetActive(true);
            sfx.StopAllSound();
        }
    }

    IEnumerator Movement() //fix a bug: when pressing button, player moves in that direction
    {
        playerMov.enabled = false;
        yield return new WaitForSeconds(0.3f);
        playerMov.enabled = true;
    }
}
