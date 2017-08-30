using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[Serializable]
public class LookatControllerClip : PlayableAsset, ITimelineClipAsset
{
    public LookatControllerBehaviour template = new LookatControllerBehaviour ();
    public ExposedReference<Transform> targetRotation;
    public ExposedReference<Transform> neckBone;

    public ClipCaps clipCaps
    {
        get { return ClipCaps.Looping | ClipCaps.Extrapolation | ClipCaps.ClipIn | ClipCaps.Blending; }
    }

    public override Playable CreatePlayable (PlayableGraph graph, GameObject owner)
    {
        var playable = ScriptPlayable<LookatControllerBehaviour>.Create (graph, template);
        LookatControllerBehaviour clone = playable.GetBehaviour ();
        clone.targetRotation = targetRotation.Resolve (graph.GetResolver ());
        clone.neckBone = neckBone.Resolve (graph.GetResolver ());
        return playable;
    }
}
