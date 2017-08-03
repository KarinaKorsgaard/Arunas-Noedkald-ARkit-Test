using UnityEngine;
using System.Collections;

//[DllImport ("__Internal")]
//private static extern float iOSLocationProvider();

namespace UnityEngine.XR.iOS
{
	public class PlayerLocationService : MonoBehaviour {

		public GeoPoint loc = new GeoPoint();
		[HideInInspector]
		public float trueHeading;
		public bool locServiceIsRunning = false;
		public int maxWait = 30; // seconds
		private float locationUpdateInterval = 0.1f; // seconds
		private double lastLocUpdate = 0.0; //seconds

		void Awake(){
			loc.setLatLon_deg (12.020553f, 12.288515f); 

		}

		public void StartLocationService() {
			Debug.Log ("Player Loc started.");
			StartCoroutine (_StartLocationService ());
		}

		public IEnumerator _StartLocationService()
		{
			// First, check if user has location service enabled
			if (!Input.location.isEnabledByUser) {
				DebugConsole.Log ("Locations is not enabled.");
				MapManager.Instance.playerStatus = MapManager.PlayerStatus.FreeFromDevice;
				locServiceIsRunning = true;
				yield break;
			}

			// Start service before querying location
			Input.location.Start(0.5f);

			while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
			{
				yield return new WaitForSeconds(1);
				maxWait--;
			}

			// Service didn't initialize in maxWait seconds
			if (maxWait < 1)
			{
				DebugConsole.Log("Locations services timed out");
				yield break;
			}

			// Connection has failed
			if (Input.location.status == LocationServiceStatus.Failed)
			{
				DebugConsole.Log("Location services failed");
				yield break;

			} else if (Input.location.status == LocationServiceStatus.Running){

				MapManager.Instance.playerStatus = MapManager.PlayerStatus.TiedToDevice;
				loc.setLatLon_deg (Input.location.lastData.latitude, Input.location.lastData.longitude);
				locServiceIsRunning = true;
				lastLocUpdate = Input.location.lastData.timestamp;

			} else {
				print ("Unknown Error!");
			}
			DebugConsole.Log (loc.ToString());
		}

		public IEnumerator RunLocationService()
		{
			double lastLocUpdate = 0.0;
			while (true) {
				if (lastLocUpdate != Input.location.lastData.timestamp) {
					loc.setLatLon_deg (Input.location.lastData.latitude, Input.location.lastData.longitude);
					trueHeading = Input.compass.trueHeading;
					lastLocUpdate = Input.location.lastData.timestamp;
				}

				yield return new WaitForSeconds(locationUpdateInterval);
			}
		}
	}
}