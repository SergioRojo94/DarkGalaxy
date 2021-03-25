using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeMusic : MonoBehaviour
{
    public string oldSong, newSong;
    private SFXManager _sfx;
    void Start()
    {
        _sfx = FindObjectOfType<SFXManager>();
    }

   public void ChangeSong()
    {
        _sfx.StopSound(oldSong);
        _sfx.Play(newSong);
    }
}
