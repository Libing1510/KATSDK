using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using static KATDevice;

namespace KATVR
{
    public class KATDevice_Walk:IWalk
    {



        #region Basic Variable - 基础变量


        /* 身体转向角度 */
        protected int bodyYaw;

        /* 是否移动 */
        protected int isMoving;

        /* 前进方向 -1 为前进 0 为停止 1 为倒退 */
        protected int moveDirection;

        /* 默认移动速度 从0到1*/

        protected float moveSpeed;

        /* 行走的能量值 */
        protected double WalkPower;

        /* 玩家在现实中行走的距离 单位是米 */
        protected int meter;

        /* 最大移动能量 */
        protected float maxMovePower, bodyRotation;


        protected float newBodyYaw, newCameraYaw;




        #region Rec
        //[HideInInspector]
        public float data_bodyYaw, data_meter, data_moveSpeed, data_DisplayedSpeed;
        //[HideInInspector]
        public double data_walkPower;
        //[HideInInspector]
        public int data_moveDirection;

        int IWalk.BodyYaw { get => bodyYaw;}
        int IWalk.IsMoving { get => isMoving; }
        int IWalk.MoveDirection { get => moveDirection; }
        float IWalk.MoveSpeed { get => moveSpeed; }
        double IWalk.WalkPower { get => WalkPower;}
        int IWalk.Meter { get => meter; }

        #endregion

        #endregion


        #region Function - 函数使用

        void IWalk.UpdateData()
        {
            KATDevice_Dll.KAT_GetWalkData(ref bodyYaw, ref WalkPower, ref moveDirection, ref isMoving, ref meter);
            bodyYaw = (int)Math.Floor((float)bodyYaw / 1024 * 360);
            //bodyRotation = newCameraYaw;
            bodyRotation = (float)bodyYaw - newBodyYaw + newCameraYaw;
 
            WalkPower = Math.Round((double)WalkPower, 2);
            //moveSpeed = (float)WalkPower / 3000f;

            moveSpeed = (float)WalkPower / 10f;
     
            data_moveDirection = -moveDirection;
            //if (moveSpeed > 1) moveSpeed = 1;
            //else if (moveSpeed < 0.3f) moveSpeed = 0;
            data_bodyYaw = bodyRotation;
            data_walkPower = WalkPower;
            data_moveSpeed = data_DisplayedSpeed = moveSpeed * Time.deltaTime;


        }

        void IWalk.ResetCamera(Transform handset)
        {
            if (handset != null)
            {
                newCameraYaw = handset.transform.localEulerAngles.y;
                int Yaw2=0;
                KATDevice_Dll.KAT_GetWalkData(ref Yaw2, ref WalkPower, ref moveDirection, ref isMoving, ref meter);
                Yaw2 = (int)Math.Floor((float)Yaw2 / 1024 * 360);
                newBodyYaw = (float)Yaw2;
            }
            else
            {
                Debug.LogError("数据不存在");
            }
        }

        void IWalk.TargetTransform(Transform targetMoveObject,Transform targetRotateObject,float multiply,float multiplyBack)
        {
            //vrCameraRig.position = targetRotateObject.position;
            if (data_moveDirection > 0) data_moveSpeed *= multiply;
            else if (data_moveDirection < 0) data_moveSpeed *= multiplyBack;

            targetMoveObject.position += (targetRotateObject.forward / 100 * data_moveSpeed * data_moveDirection);
            targetRotateObject.localEulerAngles = new Vector3(targetRotateObject.localEulerAngles.x, data_bodyYaw, targetRotateObject.localEulerAngles.z);

        }

        void IWalk.TargetTransform(Rigidbody target_Rig, Transform targetRotateObject, float multiply, float multiplyBack)
        {
            if (data_moveDirection > 0) data_moveSpeed *= multiply;
            else if (data_moveDirection < 0) data_moveSpeed *= multiplyBack;

            target_Rig.velocity = targetRotateObject.forward * data_moveSpeed * data_moveDirection;
            targetRotateObject.localEulerAngles = new Vector3(targetRotateObject.localEulerAngles.x, data_bodyYaw, targetRotateObject.localEulerAngles.z);
        }
        #endregion


    }
}

