using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpecialAttackCanvas : MonoBehaviour
{
    public GameObject[] sacGO;
    public int specialAttackCount, totalCount;
    public GameObject BtnSpecialAttackOn, BtnSpecialAttackOff, Thunder; //shooting button
    private Player player;
    private PlayerMoving playerMov;
    protected Vector3 currentTarget;

    void Start()
    {
        sacGO[0].SetActive(true);
        player = FindObjectOfType<Player>();
        playerMov = FindObjectOfType<PlayerMoving>();
    }

    void Update()
    {
        player = FindObjectOfType<Player>();
        currentTarget = player.transform.position;
        if (currentTarget == null || player.transform.position == null)
            Debug.LogWarning("Everything is OK, just for prevent ");
    }

    public void SpecialShot() //when Special Attack is loaded, this happens when player touch SA Button
    {
        totalCount = 0;
        specialAttackCount = 0;
        FindObjectOfType<SFXManager>().Play("ShotSA");
        Instantiate(player.specialAttackProjectile, currentTarget, Quaternion.Euler(Vector3.zero));
        foreach (GameObject obj in sacGO)
        {
            obj.SetActive(false);
        }
        StartCoroutine(Movement());
        BtnSpecialAttackOff.SetActive(true);
        BtnSpecialAttackOn.SetActive(false);
        Thunder.SetActive(false);
    }

    IEnumerator Movement() //fix a bug: when pressing button, player moves in that direction
    {
        playerMov.enabled = false;
        yield return new WaitForSeconds(0.3f);
        playerMov.enabled = true;
    }

}
