using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LiftTrigger : MonoBehaviour
{
    public GameObject ground;
    public TextMesh textMesh;

    public int level;

    private void Start()
    {
        textMesh.text = "电梯层" + level;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            KATVR.KATVR_Global.KDevice_Landform2.LIFT = level;
            Debug.Log("enter LiftTrigger " + level);

        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            Debug.Log("exit LiftTrigger " + level);
            KATVR.KATVR_Global.KDevice_Landform2.RESET_SLOWLY = 1;

        }
    }



    private void Reset()
    {

        transform.name = "LiftTrigger";
        if (!ground)
        {
            ground = GameObject.CreatePrimitive(PrimitiveType.Cube);
            ground.name = "ground";
            ground.transform.SetParent(transform);
            ground.transform.localPosition = Vector3.up * -1f;
            ground.transform.localScale = new Vector3(4, 0.1f, 4);
            ground.transform.localRotation = Quaternion.identity;
            ground.GetComponent<MeshRenderer>().material = Resources.Load<Material>("Matericals/GroundIcon");
            ground.GetComponent<BoxCollider>().enabled = false;
        }

        BoxCollider box = transform.GetComponent<BoxCollider>();
        if (!box)
        {
            box = gameObject.AddComponent<BoxCollider>();
        }
        box.size = new Vector3(3.8f, 1, 3.8f);
        gameObject.layer = LayerMask.NameToLayer("Ignore Raycast");
        box.isTrigger = true;

        if (!textMesh)
        {
            var obj = new GameObject("TextMesh");
            obj.transform.SetParent(transform);
            obj.transform.localPosition = Vector3.forward * 2.2f;
            obj.transform.localScale = new Vector3(0.1f, 0.1f, 1);
            obj.transform.localRotation = Quaternion.identity;
            textMesh = obj.AddComponent<TextMesh>();
            textMesh.text = "电梯层0";
            textMesh.fontSize = 100;
            textMesh.color = Color.black;
            textMesh.fontStyle = FontStyle.Bold;
            textMesh.anchor = TextAnchor.MiddleCenter;
        }
    }

}
