using KATVR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Valve.VR.InteractionSystem;

public class LandformTrigger : MonoBehaviour
{
   
    public enum LandformType
    {
        None,
        ElevatorRise,
        ElevatorDown,
        GroundShaking,
        Quiver,
        Surge,
        Plummet

    }

    public LandformType landformType;
    public GameObject lift;
    public UnityEvent enterEvent;
    public UnityEvent exitEvent;

    public Vector2 moveHight;
    private bool move;
    private GameObject player;
    

    private void DefaultEnter()
    {
        enterEvent?.Invoke();
    }

    private void DefaultExit()
    {
        exitEvent?.Invoke();
    }

    private void ElevatorRiseEnter()
    {
        Walk_Pro_Action_Control_Data data= KATVR_Global.KDevice_Landform.Action;
        data.lift += 1;
        data.lift_active = 1;
        data.Reset_Slowly = 0;
        KATVR_Global.KDevice_Landform.Action = data;
        enterEvent?.Invoke();
        move = true;
        StartCoroutine(WaitResetLift(2f));
    }
    IEnumerator WaitResetLift(float delay)
    {
        yield return new WaitForSeconds(delay);
        Walk_Pro_Action_Control_Data data = KATVR_Global.KDevice_Landform.Action;
        data.Reset_Slowly = 0;
        KATVR_Global.KDevice_Landform.Action = data;
    }

    private void ElevatorRiseExit()
    {
        exitEvent?.Invoke();
    }

    private void ElevatorDownEnter()
    {
        Walk_Pro_Action_Control_Data data = KATVR_Global.KDevice_Landform.Action;
        Debug.Log("Walk_Pro_Action_Control_Data" + data.lift);
        data.lift -= 1;
        data.lift_active = 1;
        data.Reset_Slowly = 0;
        KATVR_Global.KDevice_Landform.Action = data;
        enterEvent?.Invoke();
        move = true;
    }
    private void ElevatorDownExit()
    {
        Walk_Pro_Action_Control_Data data = KATVR_Global.KDevice_Landform.Action;
        data.Reset_Slowly = 1;
        KATVR_Global.KDevice_Landform.Action = data;

        exitEvent?.Invoke();
    }

    private void GroundShakingEnter()
    {


        KATVR_Global.KDevice_Landform.ShakeLevel = 3;


        enterEvent?.Invoke();
    }

    private void GroundShakingExit()
    {
        KATVR_Global.KDevice_Landform.ShakeLevel = 0;

        exitEvent?.Invoke();
    }

    private void QuiverEnter()
    {
        KATVR_Global.KDevice_Landform.Quiver=1;
        enterEvent?.Invoke();
    }

    private void QuiverExiter()
    {

        KATVR_Global.KDevice_Landform.Quiver = 0;
        exitEvent?.Invoke();
    }

    private void SurgeEnter()
    {
        Walk_Pro_Action_Control_Data data = KATVR_Global.KDevice_Landform.Action;
        data.lift =0;
        data.Up = 1;
        data.lift_active = 0;
        data.Reset_Slowly = 0;
        KATVR_Global.KDevice_Landform.Action = data;
        enterEvent?.Invoke();
        player.GetComponent<Rigidbody>().AddForce(Vector3.up*200, ForceMode.Force);
        player = null;
    }

    private void SurgeExit()
    {


        exitEvent?.Invoke();
    }

    private void PlummetEnter()
    {
        Walk_Pro_Action_Control_Data data = KATVR_Global.KDevice_Landform.Action;
        data.lift = 0;
        data.Down = 1;
        data.lift_active = 0;
        data.Reset_Slowly = 0;
        KATVR_Global.KDevice_Landform.Action = data;
        enterEvent?.Invoke();

    }

    private void PlummetExit()
    {

        exitEvent?.Invoke();
    }





    private void Update()
    {
        if (!lift)
        {
            return;
        }

        if (move)
        {
            switch (landformType)
            {
                case LandformType.ElevatorRise:
                    lift.transform.Translate(Vector3.up * 1 * Time.deltaTime);
                    if (lift.transform.position.y>moveHight.y)
                    {
                        move = false;
                    }
                    break;
                case LandformType.ElevatorDown:
                    lift.transform.Translate(-Vector3.up * 1 * Time.deltaTime);
                    if (lift.transform.position.y < moveHight.x)
                    {
                        move = false;
                    }
                    break;

                case LandformType.Surge:
                    lift.transform.Translate(Vector3.up * 1 * Time.deltaTime);
                    if (lift.transform.position.y > moveHight.y)
                    {
                        move = false;
                    }
                    break;

                case LandformType.Plummet:
                    lift.transform.Translate(-Vector3.up * 1 * Time.deltaTime);
                    if (lift.transform.position.y < moveHight.x)
                    {
                        move = false;
                    }
                    break;
   
            }
        }
    }

    

    private void Start()
    {
        gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(gameObject.name+ " enter:" + other.gameObject.name);
        if (other.tag=="Player")
        {
            switch (landformType)
            {
                case LandformType.ElevatorRise:
                    ElevatorRiseEnter();
                    break;
                case LandformType.ElevatorDown:
                    ElevatorDownEnter();
                    break;
                case LandformType.GroundShaking:
                    GroundShakingEnter();
                    break;
                case LandformType.Quiver:
                    QuiverEnter();
                    break;
                case LandformType.Surge:
                    player = other.gameObject;
                    SurgeEnter();

                    break;
                case LandformType.Plummet:
                    PlummetEnter();
                    break;
                default:
                    DefaultEnter();
                    break;
            }
        }

    }


    private void OnTriggerExit(Collider other)
    {
        Debug.Log(" exit:"+other.gameObject.name);
        if (other.tag == "Player")
        {
            switch (landformType)
            {
                case LandformType.ElevatorRise:
                    ElevatorRiseExit();
                    break;
                case LandformType.ElevatorDown:
                    ElevatorDownExit();
                    break;
                case LandformType.GroundShaking:
                    GroundShakingExit();
                    break;
                case LandformType.Quiver:
                    QuiverExiter();
                    break;
                case LandformType.Surge:
                    SurgeExit();
                    break;
                case LandformType.Plummet:
                    PlummetExit();
                    break;
                default:
                    DefaultExit();
                    break;
            }
        }

    }



}
