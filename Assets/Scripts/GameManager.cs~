using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.XR.iOS;

public class GameManager : GenericSingletonClass<GameManager> {


	public NodeManager nodemanager;
	public float MinDistance;

	public GameObject arObjects, models, maps;
	public Button beginButton;

	private bool hasBeenPaused = false;
	private int blockCount;
	private bool isAr = false;
	private bool hasBeenActivatedOnLocation;
	private sphereHolder sHolder;
	GameObject player;

	void Start () {
		setMapARModel (true, false, false);
		beginButton.gameObject.SetActive (false);
		beginButton.onClick.AddListener (startGame);

		sHolder = GameObject.Find ("sphereHolder").GetComponent<sphereHolder> ();
		player = GameObject.Find ("Player");
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
		//arCamManager.disablePlanetracking ();
	}

	void loadGPSMap(){

		isAr = false;

		Debug.Log ("LOAD GPS MAP");
		setMapARModel (true,false,false);


		sHolder.activateSphere (blockCount);
		//	spheres [blockCount].SetActive (true);
		blockCount++;


		hasBeenActivatedOnLocation = false; 
		StartCoroutine (ActivateOnPosition ());

		print ("pause tracking");
		EventManager.TriggerEvent ("PauseTracking");
		//arCamManager.pauseTracking ();
	}


	void loadARScene(){
		isAr = true;
		sHolder.deactivateAll ();
		setMapARModel (false,true,true);

		Debug.Log ("loading ar scene");
		DebugConsole.Log ("reset tracking");
		EventManager.TriggerEvent ("ResetTracking");
		//arCamManager.resetTracking ();
		EventManager.TriggerEvent ("PlaceObjectsOnFloor");
	}


	public void allIsAdded(){
		beginButton.gameObject.SetActive (true);
		sHolder.gameObject.SetActive (false);
	}

	private void setMapARModel(bool map, bool ar, bool model){
		arObjects.SetActive (ar);
		models.SetActive (model);
		maps.SetActive (map);
	}


	void startGame(){
		beginButton.gameObject.SetActive (false);
		nodemanager.RestartGame ();
		loadARScene ();
	}



	void OnApplicationFocus( bool focus )
	{
		if (isAr) {
			if (!focus) {
				hasBeenPaused = true;
			//	arCamManager.currentConfig = 0;
			//	arCamManager.pauseTracking ();
				EventManager.TriggerEvent ("PauseTracking");
				DebugConsole.Log ("tracking paused");
				Debug.Log ("tracking paused");
			}

			if (hasBeenPaused && focus) {
				hasBeenPaused = false;
			//	arCamManager.currentConfig = 0;
			//	arCamManager.resetTracking ();
				EventManager.TriggerEvent ("ResetTracking");
				DebugConsole.Log ("tracking reset");
				Debug.Log ("tracking reset");
				EventManager.TriggerEvent ("PlaceObjectsOnFloor");
			}
		}
	}

	IEnumerator ActivateOnPosition () {
		Block b = nodemanager.getCurrentBlock ();
		while (!hasBeenActivatedOnLocation) {

			if (Vector3.Distance(player.transform.position, b.getPositionOnMap())<MinDistance) {
				hasBeenActivatedOnLocation = true;
			} else if (Input.touchCount > 2 || Input.GetKey ("b") || Input.touchCount>2 ) {
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

}
