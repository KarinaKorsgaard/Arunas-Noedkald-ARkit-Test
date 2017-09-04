using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.XR.iOS;

public class Block : MonoBehaviour {

	public Node startNode;
	public Block yes_block;
	public Block no_block;

	// current node points to whichever node is the current one playing. 
	[HideInInspector]public Node currentNode;

	// the sphere objects position is set by the sphereholder in the beginning of the game
	// this is the GPS location tied to this Block 
	[HideInInspector]public GameObject sphere;

	// this variable exposes the position of the sphere (GPS point) in the inspector. 
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
		// make a sphere and place it far away. 
		sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		sphere.transform.position = new Vector3 (-100000, -100000, -100000);
	}
	// before playing the block should be reset. 
	public void ResetBlock(){
		currentNode = startNode;	
		activateNode (true);
		currentNode.optionOne = true;
	}

	// function that the sphereHolder uses to place the sphere
	public void setPositionOnMap(Vector3 v){
		sphere.transform.position = v;
		pos = getPositionOnMap ();
	}

	// Game manager uses this to calculate the distance between the player and the GPS point
	public Vector3 getPositionOnMap(){
		return sphere.transform.position;
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

	}

	private void GetNewNode(){
		// finds next node and lets the new node know if it was option yes or no. 
		// this is used to find the next block. - Should it be yes block or no block. 
		if (currentNode.getNextNode () != null) {
			Debug.Log ("next node loaded");
			bool tempBool = currentNode.switchDirection;

			// reset after use in case it is resued... 
			currentNode.ResetNode ();
			currentNode = currentNode.getNextNode ();

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

	void StartBlock(){
		EventManager.TriggerEvent ("PlayNode");
	}


}

