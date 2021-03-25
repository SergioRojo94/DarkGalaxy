using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;

public class WavesCanvasText : MonoBehaviour
{
    public TextMeshProUGUI countText;
    private LevelController lc;
    void Start()
    {
        lc = FindObjectOfType<LevelController>();
        if (countText == null)
            return;
    }
    void Update()
    {
        if (countText == null)
            return;
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append(lc.countWaves).Append(" / ").Append(lc.enemyWaves.Length);
        countText.text = stringBuilder.ToString();
    }
}
