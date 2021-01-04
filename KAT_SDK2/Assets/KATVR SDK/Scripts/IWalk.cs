using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace KATVR
{
    /// <summary>
    /// 移动功能接口
    /// </summary>
    public interface IWalk
    {


        /// <summary>
        /// 身体转向角度
        /// </summary>
        int BodyYaw { get; }


        /// <summary>
        /// 是否移动
        /// </summary>
        int IsMoving { get;  }


        /// <summary>
        /// 前进方向 -1 为前进 0 为停止 1 为倒退
        /// </summary>
        int MoveDirection { get; }


        /// <summary>
        /// 默认移动速度 从0到1
        /// </summary>
        float MoveSpeed { get;}

        /// <summary>
        /// /行走的能量值 
        /// </summary>
        double WalkPower { get;  }


        /// <summary>
        /// 玩家在现实中行走的距离 单位是米
        /// </summary>
        int Meter { get; }


        /// <summary>
        /// 更新移动数据
        /// </summary>
        void UpdateData();

        /// <summary>
        /// 相机数据归零
        /// </summary>
        void ResetCamera(Transform handset);

        /// <summary>
        /// 移动
        /// </summary>
        /// <param name="targetMoveObject"></param>
        /// <param name="targetRotateObject"></param>
        /// <param name="multiply"></param>
        /// <param name="multiplyBack"></param>
        void TargetTransform(Transform targetMoveObject, Transform targetRotateObject, float multiply, float multiplyBack);

        /// <summary>
        /// 刚体移动
        /// </summary>
        /// <param name="target_Rig"></param>
        /// <param name="targetRotateObject"></param>
        /// <param name="multiply"></param>
        /// <param name="multiplyBack"></param>
        void TargetTransform(Rigidbody target_Rig, Transform targetRotateObject, float multiply, float multiplyBack);
    }
}