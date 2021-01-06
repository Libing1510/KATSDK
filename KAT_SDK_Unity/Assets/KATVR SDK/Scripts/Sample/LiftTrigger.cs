using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LiftTrigger : MonoBehaviour
{
    public GameObject ground;
    public TextMesh textMesh;

    public int level;
    bool enter;

    Vector3 origin;
    private void Start()
    {
        textMesh.text = "电梯层" + level;
        origin = transform.position;
    }

    private void Update()
    {
        textMesh.text = "电梯层" + KATVR.KATVR_Global.KDevice_Landform2.LIFT;
        if (enter)
        {
            switch (level)
            {
                case 0:
                    KATVR.KATVR_Global.KDevice_Landform2.LIFT = 1;
                    break;


                default:
                    break;
            }
        }
    }   

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {

            Debug.Log("enter LiftTrigger " + level);
            StartCoroutine(Move());
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            Debug.Log("exit LiftTrigger " + level);
            KATVR.KATVR_Global.KDevice_Landform2.RESET_SLOWLY = 1;
            StopAllCoroutines();
            transform.position = origin;
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

    IEnumerator LiftZero(int i)
    {
        Debug.Log(1);
        if (i<level)
        {
            Debug.Log(2);
            level = i;
            KATVR.KATVR_Global.KDevice_Landform2.WEIGHTLESSNESS=1;
            yield return new WaitForSeconds(1.6f);
            KATVR.KATVR_Global.KDevice_Landform2.LIFT -= 1;
            Vector3 pos = transform.position;
            while (transform.position.y>pos.y-2)
            {
                Debug.Log(transform.position);
                var p = transform.position;
                p.y -= Time.deltaTime;
                transform.position = p;
                yield return null;
            }
            KATVR.KATVR_Global.KDevice_Landform2.OVERWEIGHT = 1;
            yield return new WaitForSeconds(1.6f);
            //KATVR.KATVR_Global.KDevice_Landform2.RESET_QUICKLY = 1;
        }
        else
        {
            Debug.Log(3);
            level = i;
            KATVR.KATVR_Global.KDevice_Landform2.WEIGHTLESSNESS = 1;
            yield return new WaitForSeconds(1.6f);
            KATVR.KATVR_Global.KDevice_Landform2.LIFT += 1;
            Vector3 pos = transform.position;
            while (transform.position.y < pos.y +2)
            {
                Debug.Log(transform.position);
                var p = transform.position;
                p.y += Time.deltaTime;
                transform.position = p;
                yield return null;
            }
            KATVR.KATVR_Global.KDevice_Landform2.OVERWEIGHT = 1;
            yield return new WaitForSeconds(1.6f);
            //KATVR.KATVR_Global.KDevice_Landform2.RESET_QUICKLY = 1;
        }
    }

    IEnumerator Move()
    {
        yield return LiftZero(1);
        yield return new WaitForSeconds(3);
        yield return LiftZero(2);
        yield return new WaitForSeconds(3);
        yield return LiftZero(1);
        yield return new WaitForSeconds(3);
        yield return LiftZero(0);
        yield return new WaitForSeconds(3);
        yield return LiftZero(-1);
        yield return new WaitForSeconds(3);
        yield return LiftZero(-2);
        yield return new WaitForSeconds(3);
        yield return LiftZero(-1);
        yield return new WaitForSeconds(3);
        yield return LiftZero(0);
    }
        
}
