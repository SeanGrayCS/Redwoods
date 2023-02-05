//Standard Unity/C# functionality
using UnityEngine;

//These tell our project to use pieces from the Lightship ARDK
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;

//Define our main class
public class SceneManager : MonoBehaviour
{
    //Variables we'll need to reference other objects in our game
    public GameObject _arrowPrefab;
    public Camera _mainCamera;  //This will reference the MainCamera in the scene, so the ARDK can leverage the device camera
    IARSession _ARsession;  //An ARDK ARSession is the main piece that manages the AR experience

    // Start is called before the first frame update
    void Start()
    {
        //ARSessionFactory helps create our AR Session. Here, we're telling our 'ARSessionFactory' to listen to when a new ARSession is created, then call an 'OnSessionInitialized' function when we get notified of one being created
        ARSessionFactory.SessionInitialized += OnSessionInitialized;
        Input.location.Start(10, 0.1f);
        Input.compass.enabled = true;
    }

    GameObject newArrow = null;
    void Update()
    {
        if (!Input.location.isEnabledByUser) {
            return;
        }
        if (newArrow != null) {
            Destroy(newArrow);
        }
        newArrow = Instantiate(_arrowPrefab);
        newArrow.transform.rotation = getRotation(37.00096f, -122.05682f);
        newArrow.transform.position = _mainCamera.transform.position + _mainCamera.transform.forward;
    }

    Quaternion getRotation(float destLat, float destLong)
    {
        float heading = Input.compass.trueHeading;
        float north = _mainCamera.transform.rotation.eulerAngles.y - heading - _mainCamera.transform.rotation.eulerAngles.z;

        int maxWait = 5;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            new WaitForSeconds(1);
            maxWait--;
        }

        if (Input.location.status != LocationServiceStatus.Running) {
            return Quaternion.Euler(new Vector3(90.0f, north + 180.0f, 0.0f));
        }

        LocationInfo deviceLocation = Input.location.lastData;
        float deviceLat = Input.location.lastData.latitude;
        float deviceLong = Input.location.lastData.longitude;
        
        float A2 = Mathf.Pow(deviceLat, 2) + Mathf.Pow(90.0f - deviceLong, 2);
        float B2 = Mathf.Pow(deviceLat - destLat, 2) + Mathf.Pow(deviceLong - destLong, 2);
        float C2 = Mathf.Pow(destLat, 2) + Mathf.Pow(90.0f - destLong, 2);
        float angle = Mathf.Acos((C2 - A2 - B2) / (-2*Mathf.Sqrt(A2)*Mathf.Sqrt(B2))) * Mathf.Rad2Deg;

        if (destLong > deviceLong) {
            angle *= -1;
        }

        return Quaternion.Euler(new Vector3(90.0f, north + angle, 0.0f));
    }
    //This function will be called when a new AR Session has been created, as we instructed our 'ARSessionFactory' earlier
    private void OnSessionInitialized(AnyARSessionInitializedArgs args)
    {
        //Now that we've initiated our session, we don't need to do this again so we can remove the callback
        ARSessionFactory.SessionInitialized -= OnSessionInitialized;

        //Here we're saving our AR Session to our '_ARsession' variable, along with any arguments our session contains
        _ARsession = args.Session;
    }
}