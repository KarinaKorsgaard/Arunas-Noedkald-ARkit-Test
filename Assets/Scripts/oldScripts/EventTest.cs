using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using System.Collections;

public class EventTest : MonoBehaviour {

	private UnityAction someListener;

	void Awake ()
	{
		someListener = new UnityAction (testFunction);
	}

	void OnEnable ()
	{
		EventManager.StartListening ("test", someListener);
		EventManager.StartListening ("Spawn", SpawnFunction);
		EventManager.StartListening ("Destroy", DestroyFunction);
	}

	void OnDisable ()
	{
		EventManager.StopListening ("test", someListener);
		EventManager.StopListening ("Spawn", SpawnFunction);
		EventManager.StopListening ("Destroy", DestroyFunction);
	}

	void SpawnFunction ()
	{
		Debug.Log ("Some Function was called!");
	}

	void DestroyFunction ()
	{
		Debug.Log ("Some Other Function was called!");
	}

	void testFunction ()
	{
		Debug.Log ("Some Third Function was called!");
	}
}