using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[Serializable]
public class LookatControllerBehaviour : PlayableBehaviour
{
    public Transform targetRotation;
    public Transform neckBone;
    public float speed;
    public bool follow;

	public Vector3 startPos;
	public Vector3 endPos;

	public float inverseDuration;
	public Quaternion startRotation;

	//public bool tweenRotation = true;

    public override void OnGraphStart (Playable playable)
    {
		double duration = playable.GetDuration();
		if (Mathf.Approximately((float)duration, 0f))
			throw new UnityException("A fuck cannot have a duration of zero.");

		inverseDuration = 1f / (float)duration; 

		if (neckBone)
		{
			startPos = neckBone.position;
			startRotation = neckBone.rotation;
		}

		if (targetRotation) {
			endPos = targetRotation.position;
		}
    }
}
