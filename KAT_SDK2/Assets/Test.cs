using KATVR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{

    /// <summary>
    /// 快速复位，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    public int RESET_QUICKLY;

    /// <summary>
    /// 缓慢复位，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    public int RESET_SLOWLY;

    /// <summary>
    /// 超重，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    public int OVERWEIGHT;

    /// <summary>
    /// 失重，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    public int WEIGHTLESSNESS;

    /// <summary>
    /// 短颤，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    public int TREMOR_SHORT;

    /// <summary>
    /// 震动，需要内容置震动等级0,1,2
    /// 0为不震动
    /// </summary>
    public int QUIVER;

    /// <summary>
    /// 晃动，需要内容置晃动等级,0,1,2,3。
    /// 0为不晃动
    /// </summary>
    public int SHAKE_LEVEL;

    /// <summary>
    /// 楼层位置
    /// 五个档位，0档位为初始位置
    /// 2
    /// 1
    /// 0
    /// -1
    /// -2
    /// </summary>
    public int LIFT;


    private void Update()
    {
        KATVR_Global.KDevice_Landform2.LIFT = LIFT;
        KATVR_Global.KDevice_Landform2.SHAKE_LEVEL = SHAKE_LEVEL;
        KATVR_Global.KDevice_Landform2.QUIVER = QUIVER;
        KATVR_Global.KDevice_Landform2.TREMOR_SHORT = TREMOR_SHORT;
        KATVR_Global.KDevice_Landform2.WEIGHTLESSNESS = WEIGHTLESSNESS;
        KATVR_Global.KDevice_Landform2.OVERWEIGHT = OVERWEIGHT;
        KATVR_Global.KDevice_Landform2.RESET_SLOWLY = RESET_SLOWLY;
        KATVR_Global.KDevice_Landform2.RESET_QUICKLY = RESET_QUICKLY;

    }



}
