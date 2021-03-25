using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidBehaviour : MonoBehaviour
{
    public float speed, rotationSpeed;
    private LevelController lvlController;
    public bool rotationDirection; 
   /* private SpriteRenderer _sprite;
    private Animator _anim;*/


    private void Start()
    {
        lvlController = FindObjectOfType<LevelController>();
      /*  _sprite = GetComponent<SpriteRenderer>();
        _anim = _sprite.GetComponent<Animator>();*/
        rotationDirection = lvlController.asteroidGoToLeft;
        Destroy(gameObject, 15f);
    }
    void Update()
    {
        transform.Rotate(new Vector3(0f,0f,10f), rotationSpeed* Time.deltaTime);
        transform.Translate(Vector3.down * speed * Time.deltaTime);
        if (rotationDirection == true) //increase or decrease 'rotationSpeed' variable for increase the orbit movement
            rotationSpeed += 0.015f;
        else
            rotationSpeed -= 0.015f;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
       /* if (_anim == null)
            Debug.Log("El anim está nulo");
        else*/
        if (collision.tag == "Player")
        {
            Destroy(gameObject);
            //StartCoroutine(AsteroidDestroyed());
            Player.instance.GetDamage(1); 
        }
    }

   /* private IEnumerator AsteroidDestroyed()
    {
        _anim.SetTrigger("Destroy");
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }*/
}
