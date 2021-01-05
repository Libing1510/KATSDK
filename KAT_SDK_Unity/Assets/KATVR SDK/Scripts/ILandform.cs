using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

namespace KATVR
{
    public interface ILandform 
    {
        /// <summary>
        /// 震动，优先级1，需要内容置1和0
        /// </summary>
        int Quiver { get; set; }

        /// <summary>
        /// 晃动，优先级2，需要内容置晃动等级,0,1,2,3。
        /// </summary>
        int ShakeLevel { get; set; }

        /// <summary>
        /// 地形控制数据【实时发送】
        /// </summary>
        Walk_Pro_Landform_Control_Data LandformControlData { get;}

        /// <summary>
        /// 动作控制数据
        /// </summary>
        Walk_Pro_Action_Control_Data Action { get; set; }

        /// <summary>
        ///Walk Pro 反馈状态 
        /// </summary>
        Walk_Pro_Replay_Data ReplayData { get; }

        /// <summary>
        /// 数据更新
        /// </summary>
        /// <param name="transform"></param>
        void UpdateData(Transform transform);
    }
}