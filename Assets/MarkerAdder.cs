using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.iOS
{
	public class MarkerAdder : MonoBehaviour {

		public GameObject mainMap, newMap;
		public Camera cam;

		// Update is called once per frame
		void Update () {
			updateMarker ();
		}

		public GoogleStaticMap getMainMapMap () {
			return mainMap.GetComponent<GoogleStaticMap> ();
		}


		void updateMarker(){
			#if !UNITY_EDITOR
			if (Input.touchCount > 0) {
				if (Input.GetTouch (0).phase == TouchPhase.Began) {
					GeoPoint g = new GeoPoint ();
					Vector3 v = ScreenPointToMapPosition (Input.GetTouch (0).position);
					g = getMainMapMap ().getPositionOnMap (new Vector2 (v.x, v.z));

					DebugConsole.Log ("touch position " + Input.GetTouch (0).position.x + " "+Input.GetTouch (0).position.y);
					DebugConsole.Log ("vector posistion xyz " + v.x+" "+v.y+" "+ v.z);

					if (GameManager.Instance.addGeoPoint (g)) {
						createSphere (v.x, v.z);
						DebugConsole.Log ("maker added at " + g.lat_d + " " + g.lon_d);
					}

				}
			}
			#else
			if (Input.GetMouseButtonUp(0)) {
				GeoPoint g = new GeoPoint ();
				Vector3 v = ScreenPointToMapPosition (Input.mousePosition);
				g = getMainMapMap ().getPositionOnMap (new Vector2 (v.x, v.z));

				DebugConsole.Log ("touch position " + Input.mousePosition.x + " "+Input.mousePosition.y);
				DebugConsole.Log ("vector posistion xyz " + v.x+" "+v.y+" "+ v.z);

				if(GameManager.Instance.addGeoPoint (g)){
					createSphere (v.x, v.z);
					DebugConsole.Log ("UNITY EDITOR maker added at " + g.lat_d + " " + g.lon_d);
				}
			}
			#endif
		}
		void createSphere (float x, float z){
			GameObject Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
			Sphere.transform.position = new Vector3 (x, 0, z);
			Sphere.transform.localScale += new Vector3 (0.00001F, 0, 0.00001F);
			GameManager.Instance.addSphere (Sphere);
		}

		public Vector3 ScreenPointToMapPosition(Vector2 point){
			var ray = cam.ScreenPointToRay(point);
			//RaycastHit hit;
			// create a plane at 0,0,0 whose normal points to +Y:
			Plane hPlane = new Plane(Vector3.up, Vector3.zero);
			float distance = 0; 
			if (!hPlane.Raycast (ray, out distance)) {
				// get the hit point:
				return Vector3.zero;
			} else {
				Vector3 location = ray.GetPoint (distance);
				return location;
			}
		}
	}
}
