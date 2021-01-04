using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using static KATDevice;

namespace KATVR
{
    public static class KATVR_Basic {
        #region Basic Variable - 基础变量
        public enum LanguageList { Chinese, Engligh };
        public static LanguageList Language;
        public static string LanguageFilePath = Application.dataPath + "/LanguageFile.xml";

        public static LandformList landform;

        #endregion
    }
    /// <summary>
    /// KAT 控制单列
    /// </summary>
    public class KATVR_Global
    {
        /// <summary>
        /// 移动控制相关的数据
        /// </summary>
        public static IWalk KDevice_Walk;
        /// <summary>
        /// 地形模拟和特殊操作设置
        /// </summary>
        public static ILandform KDevice_Landform;

        /// <summary>
        /// 地形模拟和特殊操作设置
        /// </summary>
        public static ILandform2 KDevice_Landform2;

        /// <summary>
        /// 整体控制,界面配置参数在这里面设置，包括前后移动速率
        /// </summary>
        public static KATDevice KDevice;
    }

}

