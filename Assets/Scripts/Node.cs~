using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Events;

namespace UnityEngine.XR.iOS
{
	public class Node : MonoBehaviour {

		private PlayableDirector theAnimation;
		[Header("Node Links. Drag and drop nodes")]
		[Tooltip("the NO option")]
		public Node link_no;
		[Tooltip("the YES option")]
		public Node link_yes;
		[Tooltip("DEFAULT: if none is specified, the default will be the NO node. If this does not existm the default will be the yes node.")]
		public Node link_default;
		public PlayableDirector idle_Animation;

		private double duration;
		private double timeRunningOut;

		[HideInInspector] public bool isPlaying;
		[HideInInspector] public bool switchDirection;
		[HideInInspector] public bool defaultAnimation;
		[HideInInspector] public bool optionOne;



		void OnEnable ()
		{
			EventManager.StartListening ("PlayNode", PlayNode);
//			EventManager.StartListening ("SwitchDirectionTrue", SwitchDirectionTrue);
//			EventManager.StartListening ("SwitchDirectionFalse", SwitchDirectionFalse);

		}

		void OnDisable ()
		{
			EventManager.StopListening ("PlayNode", PlayNode);
//			EventManager.StopListening ("SwitchDirectionTrue", SwitchDirectionTrue);
//			EventManager.StopListening ("SwitchDirectionFalse", SwitchDirectionFalse);
		}

		void Awake () {
			
			timeRunningOut = numberOfNodeLinks() > 1 ? GameObject.Find("NodeManager").GetComponent<NodeManager>().timeRunningOut : 0.0;
			optionOne = true;
			theAnimation = gameObject.GetComponent<PlayableDirector> ();
			duration = theAnimation.duration;

			if (idle_Animation == null)
				idle_Animation = GameObject.Find ("NodeManager").GetComponent<PlayableDirector> ();
		}

		public void ResetNode(){
			switchDirection = false;
			defaultAnimation = true;
		}

		private void PlayNode(){
			if (!isPlaying) {
				isPlaying = true;
				StartCoroutine ("Play");
			}
		}

//		private void SwitchDirectionTrue(){
//			SwithDirection (true);
//		}
//
//		private void SwitchDirectionFalse(){
//			SwithDirection (false);
//		}
//
//

		private IEnumerator Play(){
			
			theAnimation.Play ();
			yield return new WaitForSeconds ((float)duration);
			if (getNextNode () != null) {
				EventManager.TriggerEvent ("ActivateUI");
				idle_Animation.Play ();
				yield return new WaitForSeconds ((float)timeRunningOut);
			} 
			else {
				yield return true;
			}
			stopNode ();
		}

		public void SwithDirection(bool b){
			defaultAnimation = false;
			switchDirection = b;
			StopCoroutine("Play");
			stopNode ();
		}

		private void stopNode(){
			idle_Animation.Stop ();

			EventManager.TriggerEvent ("DeactivateUI");
			EventManager.TriggerEvent ("NodeStopped");
			isPlaying = false;

		}

		private int numberOfNodeLinks(){
			int i = 0;
			if (link_no != null)
				i++;
			if (link_yes != null)
				i++;
			return i;

			// one exists there should be no choies and run to the next. 
			// if only default exists it should go to default.
			// if only yes exists go to yes
			// if only no exists go to no
			// if no and yes exists and no default and no becomes default
			// if only yes or no and default if should go to yes or no. not to default.
		}

		public Node getNextNode(){
			// if default is still on and default is not null return default
			if (link_default != null && defaultAnimation)
				return link_default;
			// if switch direction is true and yes exists return yes 
			else if (switchDirection && link_yes != null)
				return 	link_yes;
			// if switch direction is false and no exists return no 
			else if (link_no != null && !switchDirection)
				return link_no;
			// if none above and no exists return no
			else if (link_no != null)
				return link_no;
			// if none above and no exists return yes
			else if (link_yes != null)
				return link_yes;
			// if none above and default exists return default
			else if (link_default != null)
				return link_default;
			else
				return null;

		}

//		public IEnumerator lookat(){
//			yield return true;
			//look at camera
//			isCoroutineRunning = true;
//			for (float f = 0.0f; f<1.0f; f+=0.1f) {
//
//				//theAnimation.gameObject.transform.localScale =  (theAnimation.gameObject.transform.localScale * 1.1f);
//				var n = Camera.main.transform.position - theAnimation.gameObject.transform.position;
//				var newRotation = Quaternion.LookRotation(n) * Quaternion.Euler(0, 90, 0);
//				theAnimation.gameObject.transform.rotation = Quaternion.Slerp(theAnimation.gameObject.transform.rotation, newRotation, f);
//
//				//theAnimation.gameObject.transform.LookAt (Camera.main.transform.position);
//				//theAnimation.gameObject.transform.eulerAngles = new Vector3 (0, transform.eulerAngles.y, 0);
//				//print("look at activated");
//
//				//			c.a = f;
//				//			renderer.material.color = c;
//				yield return new WaitForSeconds(.1f);
//			}
//		}
	}
}
