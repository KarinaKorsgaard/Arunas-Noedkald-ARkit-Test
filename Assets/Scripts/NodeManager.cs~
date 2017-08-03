
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using System;

namespace UnityEngine.XR.iOS
{
	public class NodeManager : MonoBehaviour
	{ 

		public Button yesButton;
		public Button noButton;
		public Button restartButton;

		public Block startBlock;
		private Block currentBlock;

		public double timeRunningOut;
		private double timeLock = 0.0;
		public int longestBlockChain;
		private bool theEnd = false;


		void OnEnable ()
		{
			EventManager.StartListening ("DeactivateUI", DeactivateUI);
			EventManager.StartListening ("ActivateUI", ActivateUI);
			EventManager.StartListening ("BlockStopped", BlockStopped);
		}

		void OnDisable ()
		{
			EventManager.StopListening ("DeactivateUI", DeactivateUI);
			EventManager.StopListening ("ActivateUI", ActivateUI);
			EventManager.StopListening ("BlockStopped", BlockStopped);
		}

		void Start (){
			
			yesButton.onClick.AddListener( () => {SwitchDirection(true);} );  
			noButton.onClick.AddListener( () => {SwitchDirection(false);} );
			restartButton.onClick.AddListener ( RestartGame );

			UI (false);
			restartButton.gameObject.SetActive (false);

			Block testBlock = startBlock;
			while (testBlock.no_block != null || testBlock.yes_block != null) {
				longestBlockChain++;
				if (testBlock.no_block != null)
					testBlock = testBlock.no_block;
				else
					testBlock = testBlock.yes_block;
			}
			longestBlockChain++;
			print (longestBlockChain + " longest chain!");

		}
		public Block getCurrentBlock(){
			return currentBlock;
		}


		public void RestartGame(){
			EventManager.TriggerEvent ("RestartGame");

			Node[] nodes = FindObjectsOfType(typeof(Node)) as Node[];
			foreach (Node n in nodes) {
				n.ResetNode ();
				n.gameObject.SetActive (false);
			}
			Block[] blocks = FindObjectsOfType(typeof(Block)) as Block[];
			foreach (Block b in blocks) {
				b.ResetBlock ();
				b.gameObject.SetActive (false);
			}
				
			currentBlock = startBlock;
			currentBlock.gameObject.SetActive (true);
			currentBlock.activateNode (true);

			theEnd = false;
			restartButton.gameObject.SetActive (false);
			UI (false);
		}

		void Update (){
			timeLock += Time.deltaTime;
		}
			
		void BlockStopped(){
			currentBlock.gameObject.SetActive (false);

			if (currentBlock.getNextBlock () != null) {

				Block tempBlock = currentBlock.getNextBlock ();
				currentBlock.ResetBlock ();
				currentBlock = tempBlock;
				currentBlock.gameObject.SetActive (true);

				EventManager.TriggerEvent ("loadGPSMap");

			} else {
				print ("THE END");
				theEnd = true;
				restartButton.gameObject.SetActive (theEnd);
			
			}
			UI (false);

		}

		void SwitchDirection(bool b){
			if (timeLock > 2.0) {
				timeLock = 0.0;
				string p = b ? "SwitchDirectionTrue" : "SwitchDirectionFalse";
				EventManager.TriggerEvent (p);
			}
		}


		void UI(bool b){
			yesButton.gameObject.SetActive (b);
			noButton.gameObject.SetActive (b);
		}

		void DeactivateUI(){
			UI (false);
		}
		void ActivateUI(){
			UI (true);
		}
	}
}