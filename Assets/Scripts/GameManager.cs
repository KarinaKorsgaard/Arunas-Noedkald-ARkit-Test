using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

namespace UnityEngine.XR.iOS
{
	public class GameManager : GenericSingletonClass<GameManager> {

		private int markerCount = 1;
		public List<GameObject> spheres;
		public PlayerLocationService playerLocationService;
		public NodeManager nodemanager;
		private int blockCount;
		private bool isAr = false;
		private bool hasBeenActivatedOnLocation;

		public GameObject arObjects, models, maps;
		public UnityARCameraManager arCamManager;

		public Button beginButton;

		private bool hasBeenPaused = false;
		// Use this for initialization
		void Start () {
			setMapARModel (true, false, false);
			beginButton.gameObject.SetActive (false);
			beginButton.onClick.AddListener (startGame);
		}

		void OnEnable(){
			EventManager.StartListening ("RestartGame", RestartGame);
			EventManager.StartListening ("loadGPSMap",loadGPSMap);
			EventManager.StartListening ("LocationFound",loadARScene);
			EventManager.StartListening ("DisablePlaneTracking",DisablePlaneTracking);

		}
		void OnDisable(){
			EventManager.StopListening ("RestartGame", RestartGame);
			EventManager.StopListening ("loadGPSMap",loadGPSMap);
			EventManager.StopListening ("LocationFound",loadARScene);
			EventManager.StartListening ("DisablePlaneTracking",DisablePlaneTracking);
		}
		// Update is called once per frame
		void Update () {
			
		}
		void RestartGame(){
			//spheres.Clear ();
			//GameObject.Find ("MarkerAdder").gameObject.SetActive(true);
			//markerCount = 1;

			//setMapARModel (true, false, false);
		}
		void DisablePlaneTracking(){
			DebugConsole.Log ("plane tracking disabled");
			arCamManager.disablePlanetracking ();
		}

		void loadGPSMap(){

			isAr = false;

			print ("loading gps map");
			setMapARModel (true,false,false);

			spheres [blockCount].SetActive (true);
			blockCount++;
		

			hasBeenActivatedOnLocation = false; 
			StartCoroutine (ActivateOnPosition ());

			print ("pause tracking");
			arCamManager.pauseTracking ();
		}


		void loadARScene(){
			isAr = true;

			setMapARModel (false,true,true);
			int sphereCount = 0;
			foreach (GameObject m in spheres) {
				m.gameObject.SetActive (false);
				sphereCount++;
			}
			print ("" + sphereCount);

			DebugConsole.Log ("reset tracking");
			arCamManager.resetTracking ();
			EventManager.TriggerEvent ("PlaceObjectsOnFloor");

		}
		public void addSphere(GameObject go){
			
			spheres.Add (go);
		
		}

		private void setMapARModel(bool map, bool ar, bool model){
			arObjects.SetActive (ar);
			models.SetActive (model);
			maps.SetActive (map);
		}

		public bool addGeoPoint(GeoPoint g){
			Block[] blocks = FindObjectsOfType(typeof(Block)) as Block[];
			//int blockChainNum = NodeManager.Instance.longestBlockChain;

			bool exists = false;
			if (markerCount < blocks.Length) {
				foreach (Block b in blocks) 
					if (lat_to_distance(b.geoLocation.lat_d,b.geoLocation.lon_d,g.lat_d,g.lon_d)<1f) 
						exists = true;
					
				if (!exists) {
					blocks [markerCount].geoLocation = g;
					print ("marker added " + markerCount);
					markerCount++;
					return true;
				} else 
					return false;
				
			} else {
				beginButton.gameObject.SetActive (true);
				unLoadMarkerAdder ();
				return false;
			}
		}
		void startGame(){
			beginButton.gameObject.SetActive (false);
			nodemanager.RestartGame ();
			loadARScene ();
		}

		void unLoadMarkerAdder(){
			GameObject.Find ("MarkerAdder").gameObject.SetActive(false);
		}

		void OnApplicationFocus( bool focus )
		{
			if (isAr) {
				if (!focus) {
					hasBeenPaused = true;
					arCamManager.currentConfig = 0;
					arCamManager.pauseTracking ();
					DebugConsole.Log ("tracking paused");
				}

				if (hasBeenPaused && focus) {
					hasBeenPaused = false;
					arCamManager.currentConfig = 0;
					arCamManager.resetTracking ();
					DebugConsole.Log ("tracking reset");
					EventManager.TriggerEvent ("PlaceObjectsOnFloor");
				}
			}
		}

		IEnumerator ActivateOnPosition () {
			Block b = nodemanager.getCurrentBlock ();
			while (!hasBeenActivatedOnLocation) {


				GeoPoint g = playerLocationService.loc;

				if (lat_to_distance (g.lat_d, g.lon_d, b.geoLocation.lat_d, b.geoLocation.lon_d) < 10f) {
					hasBeenActivatedOnLocation = true;
				} else if (Input.touchCount > 2 || Input.GetKey ("b")) {
					hasBeenActivatedOnLocation = true;
				}

				if (hasBeenActivatedOnLocation) {
					Handheld.Vibrate ();
					loadARScene ();

				} else
					print ("you are not here yet");
				
				yield return null;
			}
			yield return true;
		}

		private double lat_to_distance(float lat1, float lon1,float lat2,float lon2){
			// generally used geo measurement function 
			float R = 6378.137f; // Radius of earth in KM
			float dLat = lat2 * Mathf.PI / 180f - lat1 * Mathf.PI / 180f;
			float dLon = lon2 * Mathf.PI / 180f - lon1 * Mathf.PI / 180f;
			float a = Mathf.Sin(dLat/2f) * Mathf.Sin(dLat/2f) +
				Mathf.Cos(lat1 * Mathf.PI / 180f) * Mathf.Cos(lat2 * Mathf.PI / 180f) *
				Mathf.Sin(dLon/2f) * Mathf.Sin(dLon/2f);
			float c = 2f * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1f-a));
			float d = R * c;
			return d * 1000f; // meters
		}
	}
}
