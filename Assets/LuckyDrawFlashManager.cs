using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//used in 'LuckyDraw' scene
public class LuckyDrawFlashManager : MonoBehaviour
{
    private Animator _anim;
    public float seconds;
    void Start() {
        _anim = GetComponent<Animator>();
        if (_anim != null)
            _anim.enabled = false;
        InvokeRepeating("RepeatLights", seconds, 1f);
    }

    void RepeatLights() {
        StartCoroutine(LeaveTheLightsOn());
    }
    IEnumerator LeaveTheLightsOn() {
        yield return new WaitForSeconds(0.5f);
        _anim.enabled = true;
        yield return new WaitForSeconds(0.5f);
        _anim.enabled = false;
    }
}
