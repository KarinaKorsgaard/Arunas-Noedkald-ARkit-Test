using UnityEngine;
using System.Collections;
using System.Collections.Generic;
namespace UnityEngine.XR.iOS
{

	public class MapManager : GenericSingletonClass<MapManager> {

		[HideInInspector]
		public bool locationServicesIsRunning = false;

		public GameObject mainMap;
		public GameObject newMap;

		public GameObject player;
		public GeoPoint playerGeoPosition;
		public PlayerLocationService player_loc;

		public Camera cam;

		public enum PlayerStatus { TiedToDevice, FreeFromDevice }


		private PlayerStatus _playerStatus;
		public PlayerStatus playerStatus
		{
			get { return _playerStatus; }
			set { _playerStatus = value; }
		}

		void Awake (){

			Time.timeScale = 1;
			playerStatus = PlayerStatus.TiedToDevice;

			player_loc = player.GetComponent<PlayerLocationService>();
			newMap.GetComponent<MeshRenderer>().enabled = false;
			newMap.SetActive (false);

		}

		public GoogleStaticMap getMainMapMap () {
			return mainMap.GetComponent<GoogleStaticMap> ();
		}

		public GoogleStaticMap getNewMapMap () {
			return newMap.GetComponent<GoogleStaticMap> ();
		}

		IEnumerator Start () {

			getMainMapMap ().initialize ();
			yield return StartCoroutine (player_loc._StartLocationService ());
			StartCoroutine (player_loc.RunLocationService ());

			locationServicesIsRunning = player_loc.locServiceIsRunning;
			Debug.Log ("Player loc from GameManager: " + player_loc.loc);

			getMainMapMap ().centerMercator = getMainMapMap ().tileCenterMercator (player_loc.loc);
			getMainMapMap ().setCenterLocation (player_loc.loc.lat_d, player_loc.loc.lon_d);
			getMainMapMap ().DrawMap ();

			mainMap.transform.localScale = Vector3.Scale (
				new Vector3 (getMainMapMap ().mapRectangle.getWidthMeters (), getMainMapMap ().mapRectangle.getHeightMeters (), 1.0f),
				new Vector3 (getMainMapMap ().realWorldtoUnityWorldScale.x, getMainMapMap ().realWorldtoUnityWorldScale.y, 1.0f));

			player.GetComponent<ObjectPosition> ().setPositionOnMap (player_loc.loc);

		}

		void Update () {
			if (!locationServicesIsRunning) {
				//TODO: Show location service is not enabled error. 
				return;
			} else {
				StartCoroutine (player_loc.RunLocationService ());
			}
			playerGeoPosition = new GeoPoint();
			if (playerStatus == PlayerStatus.TiedToDevice) {
				playerGeoPosition = player_loc.loc;
				player.GetComponent<ObjectPosition> ().setPositionOnMap (playerGeoPosition);
			} else if (playerStatus == PlayerStatus.FreeFromDevice){
				playerGeoPosition = getMainMapMap ().getPositionOnMap(new Vector2(player.transform.position.x, player.transform.position.z));

			}

			//updateMarker ();
			getMainMapMap ().UpdateZoom ();


			var tileCenterMercator = getMainMapMap ().tileCenterMercator (playerGeoPosition);
			if(!getMainMapMap ().centerMercator.isEqual(tileCenterMercator)) {

				newMap.SetActive(true);
				getNewMapMap ().mapZoom = getMainMapMap ().mapZoom;

				getNewMapMap ().initialize ();
				getNewMapMap ().centerMercator = tileCenterMercator;
				getNewMapMap ().DrawMap ();

				getNewMapMap ().transform.localScale = Vector3.Scale(
					new Vector3 (getNewMapMap ().mapRectangle.getWidthMeters (), getNewMapMap ().mapRectangle.getHeightMeters (), 1.0f),
					new Vector3(getNewMapMap ().realWorldtoUnityWorldScale.x, getNewMapMap ().realWorldtoUnityWorldScale.y, 1.0f));	

				Vector2 tempPosition = MapManager.Instance.getMainMapMap ().getPositionOnMap (getNewMapMap ().centerLatLon);
				newMap.transform.position = new Vector3 (tempPosition.x, 0, tempPosition.y);

				GameObject temp = newMap;
				newMap = mainMap;
				mainMap = temp;

			}
			if(getMainMapMap().isDrawn && mainMap.GetComponent<MeshRenderer>().enabled == false){
				mainMap.GetComponent<MeshRenderer>().enabled = true;
				newMap.GetComponent<MeshRenderer>().enabled = false;
				newMap.SetActive(false);
			}
		}
	}
}
