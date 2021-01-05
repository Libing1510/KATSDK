using KATVR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LandformActionTrigger : MonoBehaviour
{


    public enum LandformType
    {
        None,
        /// <summary>
        /// 电梯升
        /// </summary>
        ElevatorRise,
        /// <summary>
        /// 电梯降
        /// </summary>
        ElevatorDown,
        /// <summary>
        /// 短颤，需要内容置1后触发，动作完成后Runtime置0
        /// </summary>
        TREMOR_SHORT,
        /// <summary>
        /// 震动，需要内容置震动等级0,1,2
        /// </summary>
        QUIVER,
        /// <summary>
        /// 晃动，需要内容置晃动等级,0,1,2,3。
        /// </summary>
        SHAKE_LEVEL,
        /// <summary>
        ///  失重，需要内容置1后触发，动作完成后Runtime置0
        /// </summary>
        WEIGHTLESSNESS,
        /// <summary>
        /// 超重，需要内容置1后触发，动作完成后Runtime置0
        /// </summary>
        OVERWEIGHT,

    }

    public LandformType landformType;
    public UnityEvent enterEvent;
    public UnityEvent exitEvent;

    public Vector2 moveHight;
    public GameObject lift;
    public TextMesh textMesh;
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

    }


    private void ElevatorRiseExit()
    {
        exitEvent?.Invoke();
    }

    private void ElevatorDownEnter()
    {

    }
    private void ElevatorDownExit()
    {

    }

    private void GroundShakingEnter()
    {



    }

    private void GroundShakingExit()
    {

    }

    private void QuiverEnter()
    {

    }

    private void QuiverExiter()
    {

    }

    private void SurgeEnter()
    {

    }

    private void SurgeExit()
    {



    }

    private void PlummetEnter()
    {


    }

    private void PlummetExit()
    {


    }





    private void Update()
    {

    }



    private void Start()
    {
        gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(gameObject.name + " enter:" + other.gameObject.name);
        if (other.tag == "Player")
        {
          
        }

    }


    private void OnTriggerExit(Collider other)
    {
        Debug.Log(" exit:" + other.gameObject.name);
        if (other.tag == "Player")
        {
          
        }

    }











}
