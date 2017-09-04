using System;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
	public class ARhitTest : MonoBehaviour
	{
		[HideInInspector]public bool placed = true;
		public Transform m_HitTransform;

		void OnEnable ()
		{
			EventManager.StartListening ("PlaceObjectsOnFloor", PlaceObjectsOnFloor);
		}

		void OnDisable ()
		{
			EventManager.StopListening ("PlaceObjectsOnFloor", PlaceObjectsOnFloor);
		}

	
		bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
		{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
				foreach (var hitResult in hitResults) {
					Debug.Log ("Got hit!");
					m_HitTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					m_HitTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
					Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
					return true;
				}
			}
			return false;
		}

		void PlaceObjectsOnFloor(){
			placed = false;
			print ("hit test is placing");
		}


		void Update () {
			if (Input.touchCount > 0) {
				var touch = Input.GetTouch (0);
				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved) {
					Debug.Log (m_HitTransform.position);
				}
			}
			if (!placed) {

				var screenMiddle = new Vector2 (Screen.width / 2f, Screen.height / 2f);
				var screenPosition = Camera.main.ScreenToViewportPoint(screenMiddle);

				ARPoint point = new ARPoint {
					x = screenPosition.x,
					y = screenPosition.y
				};
						
				// prioritize reults types
				ARHitTestResultType[] resultTypes = {
					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
					// if you want to use infinite planes use this:
					//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
					//ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
					//ARHitTestResultType.ARHitTestResultTypeFeaturePoint
				}; 

				foreach (ARHitTestResultType resultType in resultTypes) {
					if (HitTestWithResultType (point, resultType)) {
						placed = true;
						EventManager.TriggerEvent ("StartBlock");
						return;
					}

					else if (Input.GetKey("p"))
					{
						placed = true;
						EventManager.TriggerEvent ("StartBlock");

						return;

					} 
					else {
						m_HitTransform.position = new Vector3 (1000f, 1000f, 1000f);
					}
				}
			}
		}
	}
}

