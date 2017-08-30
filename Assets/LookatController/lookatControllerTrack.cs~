using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[TrackColor(0.8823529f, 0.7136678f, 0.8078986f)]
[TrackClipType(typeof(LookatControllerClip))]
[TrackBindingType(typeof(Transform))]
public class LookatControllerTrack : TrackAsset
{
    public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
    {
        return ScriptPlayable<LookatControllerMixerBehaviour>.Create (graph, inputCount);
    }

	public override void GatherProperties(PlayableDirector director, IPropertyCollector driver)
	{
		#if UNITY_EDITOR
		var comp = director.GetGenericBinding(this) as Transform;
		if (comp == null)
			return;
		var so = new UnityEditor.SerializedObject(comp);
		var iter = so.GetIterator();
		while (iter.NextVisible(true))
		{
			if (iter.hasVisibleChildren)
				continue;
			driver.AddFromName<Transform>(comp.gameObject, iter.propertyPath);
		}
		#endif
		base.GatherProperties(director, driver);
	}
}
