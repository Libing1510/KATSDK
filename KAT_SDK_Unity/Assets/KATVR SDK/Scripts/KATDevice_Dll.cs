using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.AI;

namespace KATVR
{
    public class KATDevice_Dll 
    {

        public static bool LogOpen;
        public const string TAG = "[KATDevice_Dll]: ";
        #region API
        /// <summary>
        /// 初始化
        /// </summary>
        /// <returns>
        /// -1：初始化失败
        /// -2：线程启动失败
        /// 0：初始化成功
        /// 1：已初始化
        /// </returns>
        public static int KAT_Init()
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} Init_2B call");
                var result= Init_2B();
                Debug.LogWarning($"{TAG} Init_2B result={result}");
                return result;
            }
            else
            {
                return Init_2B();
            }        
        }

        /// <summary>
        /// 获取行走数据
        /// </summary>
        /// <param name="Bodyyaw">角度</param>
        /// <param name="WalkPower">速度</param>
        /// <param name="MoveDirection">方向 -1：前进/1：后退</param>
        /// <param name="IsMoving">是否在行走：1：是 0：否</param>
        /// <param name="Distance">总路程（暂不生效）</param>
        /// <returns>
        /// -1:未初始化
        /// 0:获取成功
        /// </returns>
        public static int KAT_GetWalkData(ref int Bodyyaw, ref double WalkPower, ref int MoveDirection, ref int IsMoving, ref int Distance)
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} Get_Data_2B call");
                var result = Get_Data_2B(ref Bodyyaw,ref WalkPower,ref MoveDirection,ref IsMoving,ref Distance);
                Debug.LogWarning($"{TAG} Get_Data_2B result={result} Bodyyaw={Bodyyaw} WalkPower={WalkPower} MoveDirection={MoveDirection} IsMoving={IsMoving} Distance={Distance}");
                return result;
            }
            else
            {
                return Get_Data_2B(ref Bodyyaw, ref WalkPower, ref MoveDirection, ref IsMoving, ref Distance);
            }
        }

        /// <summary>
        /// 获取特殊动作数据
        /// </summary>
        /// <param name="Action">-1：左平移 1：右平移 0：其他</param>
        /// <returns>
        /// -1:未初始化
        /// 0:获取成功
        /// </returns>
        public static int KAT_GetWalkAction(ref int Action)
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} Get_Action_2B call");
                var result = Get_Action_2C(ref Action);
                Debug.LogWarning($"{TAG} Get_Action_2B result={Action}");
                return result;
            }
            else
            {
                return Get_Action_2B(ref Action);
            }
        }

        /// <summary>
        /// 地形控制数据更新接口
        /// </summary>
        /// <param name="data">地形的相关数据</param>
        /// <returns>
        /// 0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        public static int KAT_UpdateLandformData(Walk_Pro_Landform_Control_Data data)
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} LANDFORM_CONTROL_DATA_UPDATE call");
                var result = LANDFORM_CONTROL_DATA_UPDATE(data);
                Debug.LogWarning($"{TAG} LANDFORM_CONTROL_DATA_UPDATE result={result}");
                return result;
            }
            else
            {
                return LANDFORM_CONTROL_DATA_UPDATE(data);
            }
        }

        /// <summary>
        /// 地形控制数据读取接口
        /// </summary>
        /// <param name="data"></param>
        /// <returns>
        /// 返回：0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        public static int KAT_GetLandformData(ref Walk_Pro_Landform_Control_Data data)
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} LANDFORM_CONTROL_DATA_GET call");
                var result = LANDFORM_CONTROL_DATA_GET(ref data);
                Debug.LogWarning($"{TAG} LANDFORM_CONTROL_DATA_GET result={result}");
                return result;
            }
            else
            {
                return LANDFORM_CONTROL_DATA_GET(ref data);
            }
        }

        /// <summary>
        /// Runtime返回数据读取接口
        /// </summary>
        /// <param name="data"></param>
        /// <returns>
        /// 返回：0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        public static int KAT_GetReplayData(ref Walk_Pro_Replay_Data data)
        {
            if (LogOpen)
            {
                Debug.LogWarning($"{TAG} WALK_PRO_REPLAY_DATA_GET call");
                var result = WALK_PRO_REPLAY_DATA_GET(ref data);
                Debug.LogWarning($"{TAG} WALK_PRO_REPLAY_DATA_GET result={result}");
                return result;
            }
            else
            {
                return WALK_PRO_REPLAY_DATA_GET(ref data);
            }
        }


        public static int KAT_LANDFORM_CONTROL_DATA_V2_UPDATE(Walk_Pro_Landform_Control_Data_V2 data)
        {
            return LANDFORM_CONTROL_DATA_V2_UPDATE(data);
        }

        public static int KAT_LANDFORM_CONTROL_DATA_V2_GET(ref Walk_Pro_Landform_Control_Data_V2 data)
        {
            return LANDFORM_CONTROL_DATA_V2_GET(ref data);
        }


        #endregion API

        /// <summary>
        /// 初始化
        /// </summary>
        /// <returns>
        /// -1：初始化失败
        /// -2：线程启动失败
        /// 0：初始化成功
        /// 1：已初始化
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int Init_2B();


        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int LANDFORM_CONTROL_DATA_V2_UPDATE(Walk_Pro_Landform_Control_Data_V2 data);


        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int LANDFORM_CONTROL_DATA_V2_GET(ref Walk_Pro_Landform_Control_Data_V2 data);

        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int Get_Action_2C(ref int Action);


        #region 行走
        /// <summary>
        /// 获取行走数据
        /// </summary>
        /// <param name="Bodyyaw">角度</param>
        /// <param name="WalkPower">速度</param>
        /// <param name="MoveDirection">方向 -1：前进/1：后退</param>
        /// <param name="IsMoving">是否在行走：1：是 0：否</param>
        /// <param name="Distance">总路程（暂不生效）</param>
        /// <returns>
        /// -1:未初始化
        /// 0:获取成功
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int Get_Data_2B(ref int Bodyyaw, ref double WalkPower, ref int MoveDirection, ref int IsMoving, ref int Distance);

        /// <summary>
        /// 获取特殊动作数据
        /// </summary>
        /// <param name="Action">-1：左平移 1：右平移 0：其他</param>
        /// <returns>
        /// -1:未初始化
        /// 0:获取成功
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int Get_Action_2B(ref int Action);
        #endregion 行走

        #region 地形模拟
        /// <summary>
        /// 地形控制数据更新接口
        /// </summary>
        /// <param name="data">地形的相关数据</param>
        /// <returns>
        /// 0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int LANDFORM_CONTROL_DATA_UPDATE(Walk_Pro_Landform_Control_Data data);

        /// <summary>
        /// 地形控制数据读取接口
        /// </summary>
        /// <param name="data"></param>
        /// <returns>
        /// 返回：0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int LANDFORM_CONTROL_DATA_GET(ref Walk_Pro_Landform_Control_Data data);

        /// <summary>
        /// Runtime返回数据读取接口
        /// </summary>
        /// <param name="data"></param>
        /// <returns>
        /// 返回：0：更新成功
        /// -1：更新失败，未初始化成功
        /// </returns>
        [DllImport("WalkerBase_2B", CallingConvention = CallingConvention.Cdecl)]
        extern static int WALK_PRO_REPLAY_DATA_GET(ref Walk_Pro_Replay_Data data);



        #endregion 地形模拟
    }
}