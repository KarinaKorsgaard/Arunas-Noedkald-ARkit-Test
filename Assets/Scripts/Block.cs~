using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.XR.iOS;

public class Block : MonoBehaviour {

	public Node startNode;
	public Block yes_block;
	public Block no_block;

	private Vector3 positionOnMap;
	private double timeLock;
	[HideInInspector]public Node currentNode;

	[HideInInspector]public GameObject sphere;
	public Vector3 pos;
	// the block listens and acts on following events:
	public void OnEnable(){
		EventManager.StartListening ("NodeStopped", GetNewNode);
		EventManager.StartListening("StartBlock",StartBlock);
	}
	public void OnDisable(){
		EventManager.StopListening ("NodeStopped", GetNewNode);
		EventManager.StopListening("StartBlock",StartBlock);
	}
	// and sends out
	// EventManager.TriggerEvent ("PlayNode");
	// EventManager.TriggerEvent ("BlockStopped");

	void Start () {
		ResetBlock ();
		sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.position = new Vector3 (-100000, -100000, -100000);
	}
	public void setPositionOnMap(Vector3 v){
		sphere.transform.position = v;
	}
	public Vector3 getPositionOnMap(){
		if (sphere != null )return sphere.transform.position;
		else return new Vector3 (-100000, -100000, -100000);
	}

	// before playing the block should be reset. 
	public void ResetBlock(){
		currentNode = startNode;	
		activateNode (true);
		currentNode.optionOne = true;
	}

	public void activateNode(bool b){
		currentNode.gameObject.SetActive (b);
	}
	public Block getNextBlock(){
		if (yes_block != null && no_block != null) {
			Block b = currentNode.optionOne ? yes_block : no_block;
			return b;
		} else
			return null;

	}

	void Update(){
		timeLock += Time.deltaTime;
		pos = getPositionOnMap ();
	}

	private void GetNewNode(){
		if (timeLock > 0.1) {
			timeLock = 0.0;

			//currentNode.gameObject.SetActive (false);

			if (currentNode.getNextNode () != null) {
				Debug.Log ("next node loaded");
				bool tempBool = currentNode.switchDirection;
				Node tempNode = currentNode.getNextNode ();

				// reset after use in case it is resued... 
				currentNode.ResetNode ();
				currentNode = tempNode;

				currentNode.optionOne = tempBool;
				currentNode.gameObject.SetActive (true);

				EventManager.TriggerEvent ("PlayNode");

			} else {
				EventManager.TriggerEvent ("BlockStopped");
				EventManager.TriggerEvent ("loadGPSMap");
				//EventManager.TriggerEvent ("loadGPSMap");
				Debug.Log ("BLOCK stopped");
			}
		}
	}

	void StartBlock(){
		EventManager.TriggerEvent ("PlayNode");
	}


}

