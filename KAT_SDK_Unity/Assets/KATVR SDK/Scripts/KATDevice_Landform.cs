using KATVR;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class KATDevice_Landform :ILandform
{


    /// <summary>
    /// 角色脚底圆盘
    /// </summary>
    GameObject player;

    Transform rotateObj;

    /// <summary>
    /// 心跳计数
    /// </summary>
    private int heart;

    /// <summary>
    /// 地形角度系数
    /// </summary>
    private float Angle_Ratio = 4.8f / 10.0f;

    /// <summary>
    /// 用于存储地形模拟数据
    /// </summary>
    Walk_Pro_Landform_Control_Data walk_pro_landform_control_data = new Walk_Pro_Landform_Control_Data();

    /// <summary>
    /// 用户存储Runtime返回数据
    /// </summary>
    Walk_Pro_Replay_Data walk_pro_replay_data = new Walk_Pro_Replay_Data();

    Walk_Pro_Action_Control_Data walk_pro_action_data = new Walk_Pro_Action_Control_Data();

    private int _quiver=0;
    private int shakeLevel=0;
    private  RaycastHit hit;
    private Quaternion qua;
    private bool setAction;
    #region API

    public KATDevice_Landform(GameObject player,Transform rotate)
    {
        this.player = player;
        rotateObj = rotate;

    }

    Walk_Pro_Landform_Control_Data ILandform.LandformControlData => walk_pro_landform_control_data;

    Walk_Pro_Replay_Data ILandform.ReplayData => walk_pro_replay_data;

    int ILandform.Quiver { get => _quiver; set => _quiver=value; }
    int ILandform.ShakeLevel { get => shakeLevel; set => shakeLevel=value; }
    Walk_Pro_Action_Control_Data ILandform.Action { get => walk_pro_action_data; set { walk_pro_action_data = value; setAction = true; } }

    void ILandform.UpdateData(Transform transform)
    {

        heart++;
        if (Physics.Raycast(player.transform.position, -player.transform.up, out hit))
        {
            if (player != null)
            {
                transform.position = hit.point;

                transform.forward = rotateObj.forward;
                transform.up = hit.normal;

                //qua = Quaternion.LookRotation(rotateObj.forward, hit.normal);

                qua = Quaternion.FromToRotation(Vector3.up, hit.normal);

                transform.rotation = qua;
            }
        }


        //读取地形模拟数据的结构体
        KATDevice_Dll.KAT_GetLandformData(ref walk_pro_landform_control_data);
        if (!setAction)
        {
            walk_pro_action_data= walk_pro_landform_control_data.Action;
        }

        //读取Runtime返回数据
        KATDevice_Dll.KAT_GetReplayData(ref walk_pro_replay_data);

        //对地形角度系数进行简单判断
        if (walk_pro_replay_data.Angle_Ratio > 0)
        {
            Angle_Ratio = walk_pro_replay_data.Angle_Ratio;
        }


        //读取圆盘现在的欧拉角
        float X_Pro = transform.rotation.eulerAngles.x;
        float Y_Pro = transform.rotation.eulerAngles.y;
        float Z_Pro = transform.rotation.eulerAngles.z;

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

        //旋转矩阵赋值
        Matrix33 matrix = new Matrix33(
            transform.worldToLocalMatrix.m00, transform.worldToLocalMatrix.m01, transform.worldToLocalMatrix.m02,
            transform.worldToLocalMatrix.m10, transform.worldToLocalMatrix.m11, transform.worldToLocalMatrix.m12,
            transform.worldToLocalMatrix.m20, transform.worldToLocalMatrix.m21, transform.worldToLocalMatrix.m22);

        walk_pro_landform_control_data.mMatrix = matrix;

        walk_pro_landform_control_data.HEART_BEAT = heart;
        walk_pro_landform_control_data.QUIVER = _quiver;
        walk_pro_landform_control_data.SHAKE_LEVEL = shakeLevel;
        if (setAction)
        {
            walk_pro_landform_control_data.Action = walk_pro_action_data;
            setAction = false;
        }


        //更新地形模拟数据
        KATDevice_Dll.KAT_UpdateLandformData(walk_pro_landform_control_data);



        //transform.rotation = qua;



    }



    #endregion API



}
