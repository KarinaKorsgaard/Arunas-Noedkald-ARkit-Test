
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
namespace UnityEngine.XR.iOS

// this is for the node animations and should be on the object that is transformed. 

{
	public class LookAtCamera : MonoBehaviour {

		public PlayableDirector timeline;

		void Start () {
		}

		void Update () {
			LookAt ();

			//bool placed = GameObject.Find ("HitCube").GetComponent<UnityARHitTestExample> ().placed;
//			if (Input.GetKey ("p"))
//				placed = true;
//
//			if (placed && timeline.state == PlayState.Paused)
//				timeline.Play ();
//			else if (!placed && timeline.state == PlayState.Playing)
//				timeline.Stop ();
		}

		public void scaleUp(){
			transform.localScale *= 1.1f;
		}

		public void scaleDown(){
			if(transform.localScale.x > 1.0f)transform.localScale *= 0.9f;
		}

		public void LookAt(){
			transform.LookAt (Camera.main.transform.position);
			transform.eulerAngles = new Vector3 (0, transform.eulerAngles.y, 0);

		}
			
	}

}