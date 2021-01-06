using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace KATVR
{
    /// <summary>
    /// 数据扩展函数
    /// </summary>
    public static class KATDevice_Data
    {
        public static string GetString(this Matrix33 matrix)
        {
            string str = $"{matrix.m11} {matrix.m12} {matrix.m13}/n" +
                $"{matrix.m21} {matrix.m22} {matrix.m23}/n" +
                $"{matrix.m31} {matrix.m32} {matrix.m33}";

            return str;
        }

        public static string GetString(this Walk_Pro_Landform_Control_Data_V2 data)
        {
            string str =
                $"快速复位: {data.RESET_QUICKLY}/n" +
                $"缓慢复位: {data.RESET_SLOWLY}/n" +
                $"超重: {data.OVERWEIGHT}/n" +
                $"失重: {data.WEIGHTLESSNESS}/n" +
                $"短颤: {data.TREMOR_SHORT}/n" +
                $"震动: {data.QUIVER}/n" +
                $"晃动: {data.SHAKE_LEVEL}/n" +
                $"楼层: {data.LIFT}/n{data.MATRIX.GetString()}";


            return str;
        }


    }


    /// <summary>
    /// 地形控制数据【实时发送】
    /// </summary>
    [Serializable]
    public struct Walk_Pro_Landform_Control_Data
    {
        /// <summary>
        /// 心跳包，需要内容每一帧更新
        /// </summary>
        public int HEART_BEAT;

        public float X;
        public float Y;
        public float Z;

        /// <summary>
        /// 震动，优先级1，需要内容置1和0
        /// </summary>
        public int QUIVER;
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
    /// 地形控制数据V2【实时发送】
    /// </summary>
    [Serializable]
    public struct Walk_Pro_Landform_Control_Data_V2
    {
        /// <summary>
        /// 心跳包，需要内容每一帧更新
        /// </summary>
        public int HEART_BEAT;

        public float X;
        public float Y;
        public float Z;

        ///特殊动作部分///
        ///同时只生效一个动作///

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


        ///状态部分///
        ///建议震动晃动、只生效一个

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

        /// <summary>
        /// 地形变化，需要内容更新
        /// </summary>
        public Matrix33 MATRIX;

        public Walk_Pro_Landform_Control_Data_V2(int zero = 0, int one = 1 )
        {
            HEART_BEAT = zero;
            X = zero;
            Y = zero;
            Z = zero;
            RESET_QUICKLY = zero;
            RESET_SLOWLY = zero;
            OVERWEIGHT = zero;
            WEIGHTLESSNESS = zero;
            TREMOR_SHORT = zero;
            QUIVER = zero;
            SHAKE_LEVEL = zero;
            LIFT = zero;
            MATRIX = new Matrix33();
        }

    }




    /// <summary>
    /// 动作控制数据
    /// </summary>
    [Serializable]
    public struct Walk_Pro_Action_Control_Data
    {
        /// <summary>
        /// 骤降，缓慢归位,优先级1，需要内容置1，由Runtime置0,触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public int Down;

        /// <summary>
        /// 骤升，缓慢归位,优先级2，需要内容置1，由Runtime置0，触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public int Up;

        /// <summary>
        /// 缓慢归位,优先级3，需要内容置1，由Runtime置0，触发后在该动作结束前不接收任何动作，动作结束所有动作初始化
        /// </summary>
        public int Reset_Slowly;

        /// <summary>
        /// 激活电梯，1生效，0失效
        /// </summary>
        public int lift_active;

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
    [Serializable]
    public struct Walk_Pro_Replay_Data
    {
        /// <summary>
        /// 角度比例
        /// </summary>
        public float Angle_Ratio;

        /// <summary>
        /// 是否准备好接收地形变化数据【Down_Running、Up_Running、Reset_Slowly_Running 为False且lift为0】，1为True，0为False
        /// </summary>
        public int Ready_For_Landform_Control_Data;

    }
    /// <summary>
    /// 地形模拟的旋转矩阵
    /// </summary>
    [Serializable]
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

    }
}