using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

public class LookatControllerMixerBehaviour : PlayableBehaviour
{
	bool m_FirstFrameHappened = false;
    // NOTE: This function is called at runtime and edit time.  Keep that in mind when setting the values of properties.
    public override void ProcessFrame(Playable playable, FrameData info, object playerData)
    {
        Transform trackBinding = playerData as Transform;

        if (!trackBinding)
            return;

		Vector3 defaultPosition = trackBinding.position;
		Quaternion defaultRotation = trackBinding.rotation;

		float positionTotalWeight = 0f;
		float rotationTotalWeight = 0f;


        int inputCount = playable.GetInputCount ();

        for (int i = 0; i < inputCount; i++)
        {
            float inputWeight = playable.GetInputWeight(i);
            ScriptPlayable<LookatControllerBehaviour> inputPlayable = (ScriptPlayable<LookatControllerBehaviour>)playable.GetInput(i);
            LookatControllerBehaviour input = inputPlayable.GetBehaviour ();
            
            // Use the above variables to process each frame of this playable.
			if(input.endPos == null)
				continue;



			if (!m_FirstFrameHappened)
			{
				input.startPos = defaultPosition;
				input.startRotation = defaultRotation;
				m_FirstFrameHappened = true;
			}

			float normalisedTime = (float)(inputPlayable.GetTime() * input.inverseDuration);
			float tweenProgress = normalisedTime;


			rotationTotalWeight += inputWeight;

			Transform head = input.neckBone;
			Transform body = trackBinding;
			Transform target = input.targetRotation;

			//////////
			var lookPos = target.position - body.position;
			lookPos.y = 0;
			var newRotation = Quaternion.LookRotation(lookPos);
			body.rotation = Quaternion.Slerp(body.rotation, newRotation, tweenProgress*tweenProgress*tweenProgress);

			lookPos = target.position - head.position;
			newRotation = Quaternion.LookRotation(lookPos);

			var headFull = Quaternion.Slerp(head.rotation, newRotation, tweenProgress) ;
			float angle = Quaternion.Angle(headFull, body.rotation);

			head.rotation = headFull;
			///////////

			trackBinding.rotation = body.rotation;
			input.neckBone.rotation = head.rotation;

        }
    }

	static Quaternion AddQuaternions (Quaternion first, Quaternion second)
	{
		first.w += second.w;
		first.x += second.x;
		first.y += second.y;
		first.z += second.z;
		return first;
	}

	static Quaternion ScaleQuaternion (Quaternion rotation, float multiplier)
	{
		rotation.w *= multiplier;
		rotation.x *= multiplier;
		rotation.y *= multiplier;
		rotation.z *= multiplier;
		return rotation;
	}

	static float QuaternionMagnitude (Quaternion rotation)
	{
		return Mathf.Sqrt ((Quaternion.Dot (rotation, rotation)));
	}

	static Quaternion NormalizeQuaternion (Quaternion rotation)
	{
		float magnitude = QuaternionMagnitude (rotation);

		if (magnitude > 0f)
			return ScaleQuaternion (rotation, 1f / magnitude);

		Debug.LogWarning ("Cannot normalize a quaternion with zero magnitude.");
		return Quaternion.identity;
	}
}
