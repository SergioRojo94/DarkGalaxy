using System;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

public class SFXManager : MonoBehaviour
{
    public Sound[] sounds;
    private float originalVolume;
    public static SFXManager instance;
    private AudioSource aSource;
    public bool musicIsActive = true;

    public int hearts; //as SFXManager is in all project, we used it for controlling the maximum amount of hearts that player can have
    private void Awake()
    {
        if (instance == null)
            instance = this;

        else
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);
        foreach (Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;

            s.source.volume = s.volume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;
        }
    }

    private void Start()
    {
        ControlHearts();
        Play("MainMenu");
        foreach (Sound sfx in sounds)
        {
            sfx.originalVolume = sfx.volume;
        }
        aSource = FindObjectOfType<AudioSource>();
        ControlHearts();
    }

    private void Update()
    {
        ControlHearts();
    }
    public void Play(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found");
            return;
        }
 
        s.source.Play();
    }

    public void StopSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Stopping Sound: " + name + " not found");
            return;
        }

        s.source.Stop();
    }

    public void PauseSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Pausing Sound: " + name + " not found");
            return;
        }

        s.source.Pause();
    }

    public void UnpauseSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning("Unpausing Sound: " + name + " not found");
            return;
        }

        s.source.UnPause();
    }

    public void StopAllSound() //stop all songs and sfx
    {
        musicIsActive = false;
        foreach (Sound sfx in sounds)
        {
            sfx.volume = 0;
            sfx.source.volume = 0;
        }
    }

    public void ReanudeAllSound()
    {
        musicIsActive = true;
        foreach (Sound sfx in sounds)
        {
            sfx.volume = sfx.originalVolume;
            sfx.source.volume = sfx.originalVolume;
        }
        aSource.enabled = true;
    }

    public void ControlHearts()
    {
        hearts = PlayerPrefs.GetInt("Hearts");
        if (hearts > 200)
            PlayerPrefs.SetInt("Hearts", 200);
    }
}
