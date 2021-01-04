using Boo.Lang;
using System;
using System.IO;
using UnityEditor;
using UnityEngine;

public class Tool : Editor
{

    [MenuItem("GameObject/CloseStairs")]
    private static void CloseStairs()
    {
         var obj= GameObject.Find("UpDown");
        for (int i = 0; i < obj.transform.childCount; i++)
        {
            var child = obj.transform.GetChild(i);
            if (child.name.Contains("stairs"))
            {
                var colliders= child.GetComponentsInChildren<Collider>();
                foreach (var item in colliders)
                {
                    item.enabled = false;
                }
            }
        }


    }

    [MenuItem("TOOL/CreateKAT")]
    public static  void CreateKAT()
    {
        string str = File.ReadAllText(Application.dataPath + "/kat.json");

        KATData kATData = JsonUtility.FromJson<KATData>(str);

        foreach (var parent in kATData.obj)
        {
            GameObject obj = new GameObject(parent.name);
            obj.transform.localPosition = new Vector3(parent.pos_x, parent.pos_y, parent.pos_z);
            obj.transform.localRotation = new Quaternion(parent.rot_x, parent.rot_y, parent.rot_z,parent.rot_w);
            GameObject pare = GameObject.Find(parent.parentName);
            if (pare) obj.transform.SetParent(pare.transform);
        }


    }

   static  List<Dat> objs = new List<Dat>();
    [MenuItem("TOOL/SaveKAT")]
    public static void SaveKAT()
    {
        objs.Clear();
        Debug.Log("5555");
        GameObject obj = Selection.activeGameObject;
        Debug.Log(obj.name);

        Dat dd = new Dat();
        dd.name = obj.transform.name;
        dd.parentName = "111";
        dd.pos_x = obj.transform.localPosition.x;
        dd.pos_y = obj.transform.localPosition.y;
        dd.pos_z = obj.transform.localPosition.z;

        dd.rot_x = obj.transform.localRotation.x;
        dd.rot_y = obj.transform.localRotation.y;
        dd.rot_z = obj.transform.localRotation.z;
        dd.rot_w = obj.transform.localRotation.w;

        dd.scal_x = obj.transform.localScale.x;
        dd.scal_y = obj.transform.localScale.y;
        dd.scal_z = obj.transform.localScale.z;

        objs.Add(dd);

        AddDat(obj.transform);

        KATData kATData = new KATData();
        Debug.Log(objs.Count);
        kATData.obj = objs.ToArray();
        string str = JsonUtility.ToJson(kATData);
        Debug.Log(str);
        File.WriteAllText(Application.dataPath+ "/kat.json", str);

    }

    [MenuItem("TOOL/ChangeName")]
    public static void ChangeName()
    {
        var lands= GameObject.FindObjectsOfType<LandformTrigger>();
        for (int i = 0; i < lands.Length; i++)
        {
            lands[i].gameObject.name = $"trigger_{lands[i].landformType}_{i}";
        }
    }

    public static void AddDat(Transform trans)
    {

        for (int i = 0; i < trans.childCount; i++)
        {
            Transform tran = trans.GetChild(i);
            Dat dd = new Dat();
            dd.name = tran.name;
            dd.parentName = trans.name;
            dd.pos_x = tran.localPosition.x;
            dd.pos_y = tran.localPosition.y;
            dd.pos_z = tran.localPosition.z;

            dd.rot_x = tran.localRotation.x;
            dd.rot_y = tran.localRotation.y;
            dd.rot_z = tran.localRotation.z;
            dd.rot_w = tran.localRotation.w;

            dd.scal_x = trans.localScale.x;
            dd.scal_y = trans.localScale.y;
            dd.scal_z = trans.localScale.z;

            objs.Add(dd);
            AddDat(tran);

        }
    }

    [Serializable]
    public class KATData
    {

        public Dat[] obj;
    }
    [Serializable]
    public class Dat
    {
        public string name;
        public string parentName;
        public float pos_x;
        public float pos_y;
        public float pos_z;

        public float rot_x;
        public float rot_y;
        public float rot_z;
        public float rot_w;

        public float scal_x;
        public float scal_y;
        public float scal_z;
    } 




}
