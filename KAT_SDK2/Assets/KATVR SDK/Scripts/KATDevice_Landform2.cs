using KATVR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KATDevice_Landform2 : ILandform2
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


    Walk_Pro_Landform_Control_Data_V2 walk_Pro_Landform_Set;
    Walk_Pro_Landform_Control_Data_V2 walk_Pro_Landform_Get;

    private RaycastHit hit;
    private Quaternion qua;



    public KATDevice_Landform2(GameObject player, Transform rotate)
    {
        this.player = player;
        rotateObj = rotate;
        walk_Pro_Landform_Get = new Walk_Pro_Landform_Control_Data_V2();
        walk_Pro_Landform_Set = new Walk_Pro_Landform_Control_Data_V2();

        walk_Pro_Landform_Set.QUIVER = 1;
        walk_Pro_Landform_Set.LIFT = 1;
        walk_Pro_Landform_Set.OVERWEIGHT = 1;
        walk_Pro_Landform_Set.RESET_QUICKLY = 0;
        walk_Pro_Landform_Set.RESET_SLOWLY = 1;
        walk_Pro_Landform_Set.SHAKE_LEVEL = 2;
        walk_Pro_Landform_Set.TREMOR_SHORT = 1;
        walk_Pro_Landform_Set.WEIGHTLESSNESS = 1;
    }




    #region

    int ILandform2.RESET_QUICKLY { get => walk_Pro_Landform_Set.RESET_QUICKLY; set => walk_Pro_Landform_Set.RESET_QUICKLY=value; }
    int ILandform2.RESET_SLOWLY { get => walk_Pro_Landform_Set.RESET_SLOWLY; set => walk_Pro_Landform_Set.RESET_SLOWLY = value; }
    int ILandform2.OVERWEIGHT { get => walk_Pro_Landform_Set.OVERWEIGHT; set => walk_Pro_Landform_Set.OVERWEIGHT=value; }
    int ILandform2.WEIGHTLESSNESS { get => walk_Pro_Landform_Set.WEIGHTLESSNESS; set => walk_Pro_Landform_Set.WEIGHTLESSNESS=value; }
    int ILandform2.TREMOR_SHORT { get => walk_Pro_Landform_Set.TREMOR_SHORT; set => walk_Pro_Landform_Set.TREMOR_SHORT=value; }
    int ILandform2.QUIVER { get => walk_Pro_Landform_Set.QUIVER; set => walk_Pro_Landform_Set.QUIVER=value; }
    int ILandform2.SHAKE_LEVEL { get => walk_Pro_Landform_Set.SHAKE_LEVEL; set =>walk_Pro_Landform_Set.SHAKE_LEVEL=value; }
    int ILandform2.LIFT { get => walk_Pro_Landform_Set.LIFT; set => walk_Pro_Landform_Set.LIFT=value; }
    Matrix33 ILandform2.MATRIX { get => walk_Pro_Landform_Set.MATRIX; }


    void ILandform2.UpdateData(Transform transform)
    {
        heart++;
        walk_Pro_Landform_Set.HEART_BEAT = heart;
        if (Physics.Raycast(player.transform.position, -player.transform.up, out hit))
        {
            if (player != null)
            {
                transform.position = hit.point;

                transform.forward = rotateObj.forward;
                transform.up = hit.normal;

                //qua = Quaternion.LookRotation(rotateObj.forward, hit.normal);

                qua = Quaternion.FromToRotation(Vector3.up, hit.normal);
                Debug.Log(qua.eulerAngles);
                transform.rotation = qua;
            }
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
        walk_Pro_Landform_Set.X = X_Pro;
        walk_Pro_Landform_Set.Y = Z_Pro;
        walk_Pro_Landform_Set.Z = Y_Pro;

        //旋转矩阵赋值
        Matrix33 matrix = new Matrix33(
            transform.worldToLocalMatrix.m00, transform.worldToLocalMatrix.m01, transform.worldToLocalMatrix.m02,
            transform.worldToLocalMatrix.m10, transform.worldToLocalMatrix.m11, transform.worldToLocalMatrix.m12,
            transform.worldToLocalMatrix.m20, transform.worldToLocalMatrix.m21, transform.worldToLocalMatrix.m22);

        walk_Pro_Landform_Set.MATRIX = matrix;




        var data = new Walk_Pro_Landform_Control_Data_V2();
        data.MATRIX = matrix;
        data.QUIVER = 1;
        data.HEART_BEAT = heart;

        //更新地形模拟数据
        KATDevice_Dll.KAT_LANDFORM_CONTROL_DATA_V2_UPDATE(walk_Pro_Landform_Set);



        //读取地形模拟数据的结构体
        KATDevice_Dll.KAT_LANDFORM_CONTROL_DATA_V2_GET(ref walk_Pro_Landform_Set);


    }


    #endregion 




}
