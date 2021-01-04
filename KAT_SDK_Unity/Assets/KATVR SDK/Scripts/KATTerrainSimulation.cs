using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class KATTerrainSimulation 
{

    /// <summary>
    /// 游戏角色
    /// </summary>
    GameObject KAT_Player;
    /// <summary>
    /// 角色脚底圆盘
    /// </summary>
    GameObject Ground;

    /// <summary>
    /// 用于触发震动的方块
    /// </summary>
    GameObject CUBE_QUIVER;
    /// <summary>
    /// 用户触发晃动的方块
    /// </summary>
    GameObject CUBE_SHAKE;

    /// <summary>
    /// 显示当前电梯层数
    /// </summary>
    GameObject CUBE_LIFT;

    bool Down_Step_1 = false, Down_Step_2 = false;

    bool Up = false;

    int Up_Count = 0;
    /// <summary>
    /// 地形角度系数
    /// </summary>
    float Angle_Ratio = 4.8f / 10.0f;

    /// <summary>
    /// 用于存储地形模拟数据
    /// </summary>
    Walk_Pro_Landform_Control_Data walk_pro_landform_control_data = new Walk_Pro_Landform_Control_Data();

    /// <summary>
    /// 用户存储Runtime返回数据
    /// </summary>
    Walk_Pro_Replay_Data walk_pro_replay_data = new Walk_Pro_Replay_Data();

    /// <summary>
    /// 是否晃动
    /// </summary>
    bool shake = false;
    /// <summary>
    /// 是的震动
    /// </summary>
    bool quiver = false;

    Vector3 position_last = new Vector3();



    #region API

    public void Update(Transform transform)
    {
        if (Init_2B() >= 0)
        {
            //读取地形模拟数据的结构体
            LANDFORM_CONTROL_DATA_GET(ref walk_pro_landform_control_data);
            //读取Runtime返回数据
            WALK_PRO_REPLAY_DATA_GET(ref walk_pro_replay_data);

            //对地形角度系数进行简单判断
            if (walk_pro_replay_data.Angle_Ratio > 0)
            {
                Angle_Ratio = walk_pro_replay_data.Angle_Ratio;
            }


            //根据角色当前位置判断是否触发震动
            if ((Ground.transform.position.x > 38 && Ground.transform.position.x < 42 && Ground.transform.position.z > 33 && Ground.transform.position.z < 37) && (position_last.x < 38 || position_last.x > 42 || position_last.z < 33 || position_last.z > 37))
            {
                if (quiver)
                {
                    quiver = false;
                    CUBE_QUIVER.GetComponent<TextMesh>().text = "震动【OFF】";
                }
                else
                {
                    quiver = true;
                    CUBE_QUIVER.GetComponent<TextMesh>().text = "震动【ON】";
                    shake = false;
                    CUBE_SHAKE.GetComponent<TextMesh>().text = "晃动【OFF】";
                }
            }


            //根据角色当前位置判断是否触发晃动
            if ((Ground.transform.position.x > 54 && Ground.transform.position.x < 58 && Ground.transform.position.z > 33 && Ground.transform.position.z < 37) && (position_last.x < 54 || position_last.x > 58 || position_last.z < 33 || position_last.z > 37))
            {
                if (shake)
                {
                    shake = false;
                    CUBE_SHAKE.GetComponent<TextMesh>().text = "晃动【OFF】";
                }
                else
                {
                    shake = true;
                    CUBE_SHAKE.GetComponent<TextMesh>().text = "晃动【ON】";
                    quiver = false;
                    CUBE_QUIVER.GetComponent<TextMesh>().text = "震动【OFF】";
                }
            }


            //电梯控制部分，根据角色当前位置判断电梯到多少层
            //walk_pro_landform_control_data.Action.lift为电梯层数【-2~2】
            if ((Ground.transform.position.x > -12 && Ground.transform.position.x < -8 && Ground.transform.position.z > 23 && Ground.transform.position.z < 27) && (position_last.x < -12 || position_last.x > -8 || position_last.z < 23 || position_last.z > 27))
            {
                if (walk_pro_landform_control_data.Action.lift < 2)
                {
                    walk_pro_landform_control_data.Action.lift++;
                    walk_pro_landform_control_data.Action.lift_active = true;
                }
            }

            if ((Ground.transform.position.x > 0 && Ground.transform.position.x < 4 && Ground.transform.position.z > 23 && Ground.transform.position.z < 27) && (position_last.x < 0 || position_last.x > 4 || position_last.z < 23 || position_last.z > 27))
            {
                if (walk_pro_landform_control_data.Action.lift > -2)
                {
                    walk_pro_landform_control_data.Action.lift--;
                    walk_pro_landform_control_data.Action.lift_active = true;
                }
            }

            //记录游戏角色上一帧的位置
            position_last = Ground.transform.position;

            CUBE_LIFT.GetComponent<TextMesh>().text = "【" + walk_pro_landform_control_data.Action.lift + "】";


            if (shake)
            {
                //晃动等级【0-3】：0是不晃动
                walk_pro_landform_control_data.SHAKE_LEVEL = 3;
            }
            else
            {
                walk_pro_landform_control_data.SHAKE_LEVEL = 0;
            }

            walk_pro_landform_control_data.QUIVER = quiver;



            //根据角色位置判断是否触发骤降
            if (Ground.transform.position.x > 19 && Ground.transform.position.x < 21 && Ground.transform.position.z > 19 && Ground.transform.position.z < 21)
            {
                Down_Step_1 = true;
            }

            if (Down_Step_1 && Ground.transform.position.x > 19 && Ground.transform.position.x < 21 && Ground.transform.position.z > 21 && Ground.transform.position.z < 23)
            {
                Down_Step_2 = true;
            }


            //根据角色判断是否触发骤升
            if (Ground.transform.position.x > 23 && Ground.transform.position.x < 27 && Ground.transform.position.z > 33 && Ground.transform.position.z < 37)
            {
                if (Up == false)
                {
                    Up = true;
                    walk_pro_landform_control_data.Action.Up = true;
                    Up_Count = 50;
                }
            }
            else if (Up)
            {
                Up = false;
            }

            //读取圆盘现在的欧拉角
            float X_Pro = Ground.transform.rotation.eulerAngles.x;
            float Y_Pro = Ground.transform.rotation.eulerAngles.y;
            float Z_Pro = Ground.transform.rotation.eulerAngles.z;

            if (X_Pro > 180)
            {
                X_Pro -= 360;
            }
            X_Pro *= Angle_Ratio;

            if (Y_Pro > 180)
            {
                Y_Pro -= 360;
            }
            Y_Pro *= Angle_Ratio;

            if (Z_Pro > 180)
            {
                Z_Pro -= 360;
            }
            Z_Pro *= Angle_Ratio;

            //把圆盘现有的欧拉角坐标系变化
            transform.eulerAngles = new Vector3(X_Pro, Z_Pro, Y_Pro);

            //给结构体欧拉角赋值
            walk_pro_landform_control_data.X = X_Pro;
            walk_pro_landform_control_data.Y = Z_Pro;
            walk_pro_landform_control_data.Z = Y_Pro;


            //游戏角色在内容中上升，该部分可忽略
            if (Up_Count > 0)
            {
                KAT_Player.transform.position = new Vector3(KAT_Player.transform.position.x, KAT_Player.transform.position.y + 0.2f, KAT_Player.transform.position.z);
                Up_Count--;
            }


            //骤降判断
            if (Down_Step_2)
            {
                walk_pro_landform_control_data.Action.Down = true;
                Down_Step_1 = false;
                Down_Step_2 = false;
            }

            //旋转矩阵赋值
            Matrix33 matrix = new Matrix33(
                transform.worldToLocalMatrix.m00, transform.worldToLocalMatrix.m01, transform.worldToLocalMatrix.m02,
                transform.worldToLocalMatrix.m10, transform.worldToLocalMatrix.m11, transform.worldToLocalMatrix.m12,
                transform.worldToLocalMatrix.m20, transform.worldToLocalMatrix.m21, transform.worldToLocalMatrix.m22);

            walk_pro_landform_control_data.mMatrix = matrix;

            //更新地形模拟数据
            LANDFORM_CONTROL_DATA_UPDATE(walk_pro_landform_control_data);

        }

    }
    

    #endregion API



    #region Data
    /// <summary>
    /// 地形控制数据【实时发送】
    /// </summary>
    public struct Walk_Pro_Landform_Control_Data
    {
        /// <summary>
        /// 心跳包，需要内容每一帧更新
        /// </summary>
        public int heart_beat;

        public float X;
        public float Y;
        public float Z;

        /// <summary>
        /// 震动，优先级1，需要内容置True和False
        /// </summary>
        public bool QUIVER;
        /// <summary>
        /// 晃动，优先级2，需要内容置晃动等级,0,1,2,3。
        /// 0为不晃动
        /// </summary>
        public int SHAKE_LEVEL;
        /// <summary>
        /// 特殊动作，优先级3
        /// </summary>
        public Walk_Pro_Action_Control_Data Action;
        /// <summary>
        /// 地形变化，优先级4，需要内容更新
        /// </summary>
        public Matrix33 mMatrix;
    }

    /// <summary>
    /// 动作控制数据
    /// </summary>
    public struct Walk_Pro_Action_Control_Data
    {
        /// <summary>
        /// 骤降，缓慢归位,优先级1，需要内容置True，由Runtime置False,触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public bool Down;

        /// <summary>
        /// 骤升，缓慢归位,优先级2，需要内容置True，由Runtime置False，触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public bool Up;

        /// <summary>
        /// 缓慢归位,优先级3，需要内容置True，由Runtime置False，触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public bool Reset_Slowly;

        /// <summary>
        /// 激活电梯
        /// </summary>
        public bool lift_active;

        /// <summary>
        /// 电梯式升降，不归位,优先级4
        /// 五个档位，0档位为初始位置
        /// 2
        /// 1
        /// 0
        /// -1
        /// -2
        /// </summary>
        public int lift;
    }

    /// <summary>
    /// Walk Pro 反馈状态
    /// </summary>
    public struct Walk_Pro_Replay_Data
    {
        /// <summary>
        /// 角度比例
        /// </summary>
        public float Angle_Ratio;

        /// <summary>
        /// 是否准备好接收地形变化数据【Down_Running、Up_Running、Reset_Slowly_Running 为False且lift为0】
        /// </summary>
        public bool Ready_For_Landform_Control_Data;

    }

    public struct Matrix33
    {
        public double m11, m12, m13;
        public double m21, m22, m23;
        public double m31, m32, m33;

        public Matrix33(double m11 = 1, double m12 = 0, double m13 = 0, double m21 = 0, double m22 = 1, double m23 = 0, double m31 = 0, double m32 = 0, double m33 = 1)
        {
            this.m11 = m11; this.m12 = m12; this.m13 = m13;
            this.m21 = m21; this.m22 = m22; this.m23 = m23;
            this.m31 = m31; this.m32 = m32; this.m33 = m33;
        }

        public Matrix33(Vector3 forword,Vector3 up)
        {
            Quaternion rotation= Quaternion.LookRotation(forword, up);
            Matrix4x4 matrix4 = Matrix4x4.Rotate(rotation);
            this.m11 = matrix4.m11; this.m12 = matrix4.m12; this.m13 = matrix4.m13;
            this.m21 = matrix4.m21; this.m22 = matrix4.m22; this.m23 = matrix4.m23;
            this.m31 = matrix4.m31; this.m32 = matrix4.m32; this.m33 = matrix4.m33;
        }

    }
    #endregion Data



    #region DLL

    /// <summary>
    /// 初始化
    /// </summary>
    /// <returns>
    /// -1：初始化失败
    /// -2：线程启动失败
    /// 0：初始化成功
    /// 1：已初始化
    /// </returns>
    [DllImport("WalkerBase_2B.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int Init_2B();

    [DllImport("WalkerBase_2B.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int LANDFORM_CONTROL_DATA_UPDATE(Walk_Pro_Landform_Control_Data data);

    [DllImport("WalkerBase_2B.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int LANDFORM_CONTROL_DATA_GET(ref Walk_Pro_Landform_Control_Data data);

    [DllImport("WalkerBase_2B.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int WALK_PRO_REPLAY_DATA_GET(ref Walk_Pro_Replay_Data data);

    #endregion DLL





}
