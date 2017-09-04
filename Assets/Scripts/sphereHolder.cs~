using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using Mapbox.Examples.LocationProvider;

public class sphereHolder : MonoBehaviour {

	Block[] blocks;
	int listSize = 0;

	[HideInInspector]public Vector3 playerPos;
	// Use this for initialization
	void Start () {
		blocks = FindObjectsOfType(typeof(Block)) as Block[];
		Debug.Log (blocks.Length + " amount of blocks");
	}

	public void deactivateAll(){
		foreach (Block b in blocks)
			b.sphere.SetActive (false);
	}
	public void activateSphere(int sphereNumber){
		if (sphereNumber < listSize)
			blocks [sphereNumber].sphere.SetActive (true);
	}

	public void addSphere(Vector3 go){

		//bool exists = false;
		//if (listSize < blocks.Length) {
//			foreach (Block b in blocks) {
//				float dist = Mathf.Abs (Vector3.Distance (go, b.getPositionOnMap ()));
//				if (dist < 1f) {
//					exists = true;
//					Debug.Log ("this exists already "+ dist);
//				}
//			}
//
//			if (!exists) {
		if (listSize < blocks.Length) {
			blocks [listSize].setPositionOnMap (go);
			Debug.Log ("this is new " + go);
			listSize++;
		}
		if (listSize == blocks.Length)
			GameManager.Instance.allIsAdded ();
			//}
		//} 
	}
	public bool allIsAdded(){
		return listSize >= blocks.Length;
	}

	public float distance(Vector3 pos){
		//if (blockNumber < listSize)
		return Vector3.Distance (pos, playerPos);
		//else
		//	return 0;
	}
	// Update is called once per frame
	void Update () {
		
	}
}
