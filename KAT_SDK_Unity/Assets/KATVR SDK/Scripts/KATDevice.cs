using UnityEngine;
using System.Collections;
using KATVR;
public class KATDevice : MonoBehaviour {

    #region Common Variable - 通用变量
    public enum DeviceTypeList { KAT_WALK, ComingSoon };
    [HideInInspector]
    public DeviceTypeList device;
    public enum LanguageList { 简体中文, English}
    [HideInInspector]
    public LanguageList displayLanguage;

    [HideInInspector]
    public Transform targetMoveObject, targetRotateObject, vrCameraRig, vrHandset,landformArrow;
    #endregion

    [HideInInspector]
    public float multiply, multiplyBack;
    public enum MovementStyleList { Translate, Velocity }
    [HideInInspector]
    public MovementStyleList MovementStyle;
    [HideInInspector]
    public Rigidbody target_Rig;
    [HideInInspector]
    public KeyCode ResetCameraKey;

    public enum LandformList {Enable,Disable };
    [HideInInspector]
    public LandformList landform = LandformList.Enable;

    #region
    IWalk walkController;
    ILandform2 landformController;


    #endregion

    void Awake()
    {
        Debug.LogError(landform);
        KATVR_Global.KDevice = this;
        SetupDevice(device);
    }

    void Start()
    {
        ActiveDevice(device);

    }

    void LateUpdate () {
        if (landform==LandformList.Enable)
        {
            landformController?.UpdateData(landformArrow);
        }
    }

    public void FixedUpdate()
    {
        DeviceUpdate(device);
    }

    #region Common Function
    public void SetCameraController(Transform CameraRig)
    {

    }
    #endregion

    #region 启动函数

    public void SetupDevice(DeviceTypeList Type)
    {
        switch (Type)
        {
            case DeviceTypeList.KAT_WALK:
                walkController = new KATDevice_Walk();
                KATVR_Global.KDevice_Walk = walkController;
                switch (landform)
                {
                    case LandformList.Enable:
                        landformController = new KATDevice_Landform2(targetMoveObject.gameObject,targetRotateObject);
                        KATVR_Global.KDevice_Landform2 = landformController;
                        landformArrow?.SetParent(null);
                        landformArrow.localScale = Vector3.one;
                        break;
                    case LandformList.Disable:
                        landformArrow?.gameObject.SetActive(false);
                        break;
                    default:
                        break;
                }
                break;
            case DeviceTypeList.ComingSoon:
                break;
            default:
                break;
        }
    }

    public void ActiveDevice(DeviceTypeList Type)
    {
        switch (Type)
        {
            case DeviceTypeList.KAT_WALK:
                KATDevice_Dll.KAT_Init();
                if (target_Rig == null)
                    if (targetMoveObject.GetComponent<Rigidbody>())
                        target_Rig = targetMoveObject.GetComponent<Rigidbody>();
                    else {
                        MovementStyle = MovementStyleList.Translate;
                        Debug.LogWarning("未能找到目标移动对象上的Rigidbody组件,移动方式将转换为Translate。\nCan not find Rigidbody component in Movement Object, the Movement Style will be changed to Translate.");
                    }
                break;
            case DeviceTypeList.ComingSoon:
                break;
            default:
                break;
        }
    }
    public void DeviceUpdate(DeviceTypeList Type)
    {
        switch (Type)
        {
            case DeviceTypeList.KAT_WALK:
                walkController.UpdateData();
                switch (MovementStyle)
                {
                    case MovementStyleList.Translate:
                        walkController.TargetTransform(targetMoveObject, targetRotateObject, multiply, multiplyBack);
                        break;
                    case MovementStyleList.Velocity:
                        walkController.TargetTransform(target_Rig,targetRotateObject,multiply,multiplyBack);
                        break;
                    default:
                        break;
                }
                if (Input.GetKeyDown(ResetCameraKey))
                    walkController.ResetCamera(vrHandset);
                break;
            case DeviceTypeList.ComingSoon:
                break;
            default:
                break;
        }

    }
    #endregion

}
