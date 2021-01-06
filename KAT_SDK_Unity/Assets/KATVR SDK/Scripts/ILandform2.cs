using KATVR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ILandform2 
{

    /// <summary>
    /// 快速复位，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    int RESET_QUICKLY {  set; }

    /// <summary>
    /// 缓慢复位，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    int RESET_SLOWLY { set; }

    /// <summary>
    /// 超重，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    int OVERWEIGHT {  set; }

    /// <summary>
    /// 失重，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    int WEIGHTLESSNESS {  set; }

    /// <summary>
    /// 短颤，需要内容置1后触发，动作完成后Runtime置0
    /// </summary>
    int TREMOR_SHORT { set; }

    /// <summary>
    /// 震动，需要内容置震动等级0,1,2
    /// 0为不震动
    /// </summary>
    int QUIVER { get; set; }

    /// <summary>
    /// 晃动，需要内容置晃动等级,0,1,2,3。
    /// 0为不晃动
    /// </summary>
    int SHAKE_LEVEL { get; set; }

    /// <summary>
    /// 楼层位置
    /// 五个档位，0档位为初始位置
    /// 2
    /// 1
    /// 0
    /// -1
    /// -2
    /// </summary>
    int LIFT { get; set; }

    /// <summary>
    /// 地形变化，需要内容更新
    /// </summary>
    Matrix33 MATRIX { get;}

    /// <summary>
    /// 数据更新
    /// </summary>
    /// <param name="transform"></param>
    void UpdateData(Transform transform);


}
