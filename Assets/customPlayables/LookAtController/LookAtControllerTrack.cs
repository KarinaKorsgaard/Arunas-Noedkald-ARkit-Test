using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[TrackColor(1f, 0f, 0.02068949f)]
[TrackClipType(typeof(LookAtControllerClip))]
[TrackBindingType(typeof(Transform))]
public class LookAtControllerTrack : TrackAsset
{
    public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
    {
        return ScriptPlayable<LookAtControllerMixerBehaviour>.Create (graph, inputCount);
    }
}
