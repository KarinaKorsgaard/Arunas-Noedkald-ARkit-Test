using UnityEngine;
using System.Collections;
namespace UnityEngine.XR.iOS
{
	// moved the capsule so it is at the place where the phone is. 
	public class ObjectPosition : MonoBehaviour {
		GoogleStaticMap mainMap;


		public float lat_d = 0.0f, lon_d = 0.0f;

		private GeoPoint pos;
		public PlayerLocationService playerLocation;

		void Awake (){
			pos = new GeoPoint ();
			pos.setLatLon_deg (lat_d, lon_d);
		}
		void Update(){
			
			setPositionOnMap (playerLocation.loc);
		}

		public void setPositionOnMap () {
			Vector2 tempPosition = MapManager.Instance.getMainMapMap ().getPositionOnMap (this.pos);
			transform.position = new Vector3 (tempPosition.x, transform.position.y, tempPosition.y);
		}

		public void setPositionOnMap (GeoPoint pos) {
			this.pos = pos;
			setPositionOnMap ();
		}

	}
}
