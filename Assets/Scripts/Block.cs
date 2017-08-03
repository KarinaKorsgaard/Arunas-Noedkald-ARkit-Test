using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Playables;

namespace UnityEngine.XR.iOS {

	public class Block : MonoBehaviour {

		public Node startNode;
		public Block yes_block;
		public Block no_block;

		public GeoPoint geoLocation;
		public float latitude, longitude;

		private UnityARHitTestExample hitCube;
		private bool coroutinefindingPosition = false;

		private double timeLock;
		private Node currentNode;
		private bool hasBeenActivatedOnLocation;


		// the block listens and acts on following events
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

			// initialize geolocation 
			if (geoLocation == null) {
				GeoPoint g = new GeoPoint (55.0f, 12.0f);
				geoLocation = g;
			}
		}

		// before playing the block should be reset. 
		public void ResetBlock(){
			hasBeenActivatedOnLocation = false;
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

		}
			
		private void GetNewNode(){
			if (timeLock > 0.1) {
				timeLock = 0.0;

				currentNode.gameObject.SetActive (false);
		
				if (currentNode.getNextNode () != null) {
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
				}
			}
		}

		void StartBlock(){
			EventManager.TriggerEvent ("PlayNode");
		}


	}
}
