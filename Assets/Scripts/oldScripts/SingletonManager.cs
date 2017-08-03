//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.Events;
//using UnityEngine.UI;
//using System;
//
//namespace UnityEngine.XR.iOS
//{
//	public class NodeManager : GenericSingletonClass<NodeManager> 
//	{ 
//
//		public Button yesButton;
//		public Button noButton;
//		public Button restartButton;
//		//public Block[] blocks;
//		public Block startBlock;
//		public double timeRunningOut;
//
//		[HideInInspector] public Block currentBlock;
//		[HideInInspector] public bool theEnd = false;
//
//		private UnityARHitTestExample hitTestExample;
//
//
//		void Start (){
//			yesButton.onClick.AddListener( () => {SwitchDirection(true);} );  // <-- you assign a method to the button OnClick event here
//			noButton.onClick.AddListener( () => {SwitchDirection(false);} );
//		}
//
//		void Update (){
//
//			if (!theEnd) {
//				if (currentBlock.isActive && !hitTestExample.placed) {
//					hitTestExample.PlaceOnPlane ();
//				}
//
//				if (currentBlock.isDone) {
//					if (currentBlock.getNextBlock () != null) {
//						currentBlock = currentBlock.getNextBlock ();
//						currentBlock.ResetBlock ();
//						Debug.Log ("new block" + currentBlock.name);
//					} else {
//						print ("THE END");
//						theEnd = true;
//						restartButton.gameObject.SetActive (theEnd);
//					}
//					UI (false);
//				}
//
//				currentBlock.ActivateOnPosition ();
//			}
//
//		}
//
//
//
//		void OnEnable ()
//		{
//			EventManager.StartListening ("DeactivateUI", DeactivateUI);
//			EventManager.StartListening ("ActivateUI", ActivateUI);
//		}
//
//		void OnDisable ()
//		{
//			EventManager.StopListening ("DeactivateUI", DeactivateUI);
//			EventManager.StopListening ("ActivateUI", ActivateUI);
//
//		}
//			
//		void SwitchDirection(bool b){
//			string p = b ? "SwitchDirectionTrue" : "SwithDirectionFalse" ;
//			EventManager.TriggerEvent (p);
//		}
//
//
//		void UI(bool b){
//			yesButton.gameObject.SetActive (b);
//			noButton.gameObject.SetActive (b);
//		}
//
//		void DeactivateUI(){
//			UI (false);
//		}
//		void ActivateUI(){
//			UI (true);
//		}
//	}
//}