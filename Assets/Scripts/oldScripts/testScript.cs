using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class testScript : MonoBehaviour {
	public PlayableDirector timeline;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void play(){
		if (timeline.state == PlayState.Paused)
			timeline.Play();
		else if (timeline.state == PlayState.Playing)
			timeline.Stop();
	}
}
