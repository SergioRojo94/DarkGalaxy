using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SkinManager : MonoBehaviour
{
    private int ship, newShip;
    public GameObject[] AllShips;
    public GameObject[] ship1, ship4, ship9;
    public TextMeshProUGUI shipName;
    private Player _player;
    public Button leftButton1, rightButton1, leftButton4, rightButton4, leftButton9, rightButton9;
    void Start()
    {
        //tienes QUE METER AQUÍ LOS DIFETENTES GAMEOBJECTS[] EN LUGAR DE ESTOS OBJETOS
      if (newShip == 1)
        {
            foreach (GameObject objX in ship1)
                objX.SetActive(false);

            if (ship1[newShip])
                ship1[newShip].SetActive(true);

            _player = FindObjectOfType<Player>();
            shipName.text = _player.nameShip;
        }
        if (newShip == 4)
        {
            foreach (GameObject objX in ship4)
                objX.SetActive(false);

            if (ship4[newShip])
                ship4[newShip].SetActive(true);

            _player = FindObjectOfType<Player>();
            shipName.text = _player.nameShip;
        }
        if (newShip == 9)
        {
            foreach (GameObject objX in ship9)
                objX.SetActive(false);

            if (ship9[newShip])
                ship9[newShip].SetActive(true);

            _player = FindObjectOfType<Player>();
            shipName.text = _player.nameShip;
        }
        else
        {
            foreach (GameObject objX in AllShips)
                objX.SetActive(false);

            if (AllShips[newShip])
                AllShips[newShip].SetActive(true);

            _player = FindObjectOfType<Player>();
            shipName.text = _player.nameShip;
        }
      
        //AllShips = new GameObject[transform.childCount];*/

        /* for (int i = 0; i <ship; i++)
             AllShips[i] = transform.gameObject;

         foreach (GameObject objX in AllShips)
             objX.SetActive(false);

         if (AllShips[ship])
             AllShips[ship].SetActive(true);*/
    }

    private void Update()
    {
        _player = FindObjectOfType<Player>();
        shipName.text = _player.nameShip;
    }
    private void Awake()
    {
        DisableButtons();
        ship = PlayerPrefs.GetInt("ShipForSkin");
        if (ship== 1 )
        {
            leftButton1.gameObject.SetActive(true);
            rightButton1.gameObject.SetActive(true);
        }
        if (ship == 4)
        {
            leftButton4.gameObject.SetActive(true);
            rightButton4.gameObject.SetActive(true);
        }
        if (ship == 9)
        {
            leftButton9.gameObject.SetActive(true);
            rightButton9.gameObject.SetActive(true);
        }
        newShip = ship - 1;
    }

    void DisableButtons() {
        leftButton1.gameObject.SetActive(false);
        rightButton1.gameObject.SetActive(false);

        leftButton4.gameObject.SetActive(false);
        rightButton4.gameObject.SetActive(false);

        leftButton9.gameObject.SetActive(false);
        rightButton9.gameObject.SetActive(false);
    }
}
