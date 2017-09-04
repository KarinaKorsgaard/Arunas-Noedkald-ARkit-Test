namespace Mapbox.Examples.LocationProvider
{
	using Mapbox.Unity.Location;
	using Mapbox.Unity.Utilities;
	using Mapbox.Unity.Map;
	using UnityEngine;
	using UnityEngine.Events;

	public class CopyPositionWithLocationProvider : MonoBehaviour
	{
		[SerializeField]
		private AbstractMap _map;

		/// <summary>
		/// The rate at which the transform's position tries catch up to the provided location.
		/// </summary>
		[SerializeField]
		float _positionFollowFactor;

		/// <summary>
		/// Use a mock <see cref="T:Mapbox.Unity.Location.TransformLocationProvider"/>,
		/// rather than a <see cref="T:Mapbox.Unity.Location.EditorLocationProvider"/>. 
		/// </summary>
		[SerializeField]
		bool _useTransformLocationProvider;

		bool _isInitialized;

		[HideInInspector]
		public Vector3 blockGeoPosition;
		/// <summary>
		/// The location provider.
		/// This is public so you change which concrete <see cref="T:Mapbox.Unity.Location.ILocationProvider"/> to use at runtime.
		/// </summary>
		ILocationProvider _locationProvider;
		public ILocationProvider LocationProvider
		{
			private get
			{
				if (_locationProvider == null)
				{
					_locationProvider = _useTransformLocationProvider ?
						LocationProviderFactory.Instance.TransformLocationProvider : LocationProviderFactory.Instance.DefaultLocationProvider;
				}

				return _locationProvider;
			}
			set
			{
				if (_locationProvider != null)
				{
					_locationProvider.OnLocationUpdated -= LocationProvider_OnLocationUpdated;

				}
				_locationProvider = value;
				_locationProvider.OnLocationUpdated += LocationProvider_OnLocationUpdated;
			}
		}

		Vector3 _targetPosition;
		private sphereHolder sHolder;

		void Start()
		{
			LocationProvider.OnLocationUpdated += LocationProvider_OnLocationUpdated;
			_map.OnInitialized += () => _isInitialized = true;
			sHolder = GameObject.Find ("sphereHolder").GetComponent<sphereHolder> ();
		}

		void OnDestroy()
		{
			if (LocationProvider != null)
			{
				LocationProvider.OnLocationUpdated -= LocationProvider_OnLocationUpdated;
			}
		}

		void LocationProvider_OnLocationUpdated(object sender, LocationUpdatedEventArgs e)
		{
			if (_isInitialized)
			{
				_targetPosition = Conversions.GeoToWorldPosition(e.Location,
					_map.CenterMercator,
					_map.WorldRelativeScale).ToVector3xz();
			}
		}
		public Camera mainCamera;
		private bool mouseIsLiftet = true;

		void Update()
		{
			//	Vector3 distance = transform.position - blockGeoPosition.ToVector3xz();
			// calc distance 
			Vector3 pos = new Vector3(-1,-1,-1);
			if ((Input.GetMouseButtonDown (0) && mouseIsLiftet))
				pos = Input.mousePosition;
			else if ((Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began))
				pos = Input.GetTouch (0).position;

			if (pos.x != -1) {
				Debug.Log (Input.mousePosition.x + " " + Input.mousePosition.y);

				pos.z = mainCamera.transform.position.y;
				Vector3 worldCoord = mainCamera.ScreenToWorldPoint(pos);
				worldCoord.y = 1;
				sHolder.addSphere (worldCoord);


				//sphere.GetComponent<sphereHolder>().sphere.transform.position = worldCoord;

				mouseIsLiftet = false;

			}
			if (Input.GetMouseButtonUp (0))
				mouseIsLiftet = true;

			transform.position = Vector3.Lerp(transform.position, _targetPosition, Time.deltaTime * _positionFollowFactor);
			sHolder.playerPos = transform.position;
		}
	}
}