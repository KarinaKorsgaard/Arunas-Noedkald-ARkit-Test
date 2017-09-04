using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[Serializable]
public class LookAtControllerClip : PlayableAsset, ITimelineClipAsset
{
    public LookAtControllerBehaviour template = new LookAtControllerBehaviour ();
    public ExposedReference<Transform> startLocation;
    public ExposedReference<Transform> endLocation;
    public ExposedReference<Transform> neckBone;

    public ClipCaps clipCaps
    {
        get { return ClipCaps.All; }
    }

    public override Playable CreatePlayable (PlayableGraph graph, GameObject owner)
    {
        var playable = ScriptPlayable<LookAtControllerBehaviour>.Create (graph, template);
        LookAtControllerBehaviour clone = playable.GetBehaviour ();
        clone.startLocation = startLocation.Resolve (graph.GetResolver ());
        clone.endLocation = endLocation.Resolve (graph.GetResolver ());
        clone.neckBone = neckBone.Resolve (graph.GetResolver ());
        return playable;
    }
}
