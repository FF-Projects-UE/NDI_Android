# NDI_Android

## Dependency
* (Android) Use https://github.com/gtreshchev/AndroidNative to call NSD service starter with JNI or implement your own method.

## Java Code for NSD
* Add this imports to your Java file
```
import android.os.IBinder;
import android.app.Service;
import android.net.nsd.NsdManager;
import android.net.nsd.NsdServiceInfo;
```

* Add these to AndroidNative\Source\AndroidNative\Private\Java\DeviceInfo.java -> public class DeviceInfo
```
static NsdManager nsdManager;
	static NsdServiceInfo nsdServiceInfo;
	static NsdManager.RegistrationListener listener;
	static Context context;
	
@Keep
	public static void startNsdService(final Activity activity, int Port) {
				
		context = activity;
				
		nsdManager = (NsdManager)context.getSystemService(Context.NSD_SERVICE);

		nsdServiceInfo = new NsdServiceInfo();
		nsdServiceInfo.setServiceName("NdiNsdService");
		nsdServiceInfo.setServiceType("_ndi._tcp.");
		nsdServiceInfo.setPort(Port);

		nsdManager.registerService(nsdServiceInfo, NsdManager.PROTOCOL_DNS_SD, new NsdManager.RegistrationListener() {

			@Override
			public void onRegistrationFailed(NsdServiceInfo nsdServiceInfo, int i) {}

			@Override
			public void onUnregistrationFailed(NsdServiceInfo nsdServiceInfo, int i) {}

			@Override
			public void onServiceRegistered(NsdServiceInfo nsdServiceInfo) {}

			@Override
			public void onServiceUnregistered(NsdServiceInfo nsdServiceInfo) {}
		});
	}	
```
## C++ Trigger for NSD
```
void UAndroidNativeLibrary::EnableNsdService(int32 InPort)
{
	AndroidNativeUtils::CallJavaStaticMethod<void>(DeviceInfoClassName, "startNsdService", FAndroidGameActivity(), InPort);
}
```

## Working Functions
* NDI Android Send Texture2D (ARGB or BGRA textures required)
* NDI Android Send TextureRenderTarget2D (PF_B8G8R8A8 format required)
* NDI Android Finder
* NDI Android Receiver

## Sender Usage
* (Android) Start NSD service with your JNI solution. (Our Android Native fork has ready-to-use "EnableNsdService" function)
* Init NDIlib library if you didn't.
* You should use sender functions with "Set Timer by Event" and use appropriate loop time (1 / Wanted FPS will give you loop time)
* We used GetRenderThread Read Pixel (it should be done on game thread or render thread) function and there is for loop (async) to fix alpha values. This requires a calculation time. So, don't use +15 FPS on mobile (Samsung Galaxy S21)
* You can use Media Player > Media Texture > Material > Draw Material on Render Target workflow to send android camera.

## Receiver Usage
* Init NDIlib library if you didn't.
* Add "AC_NDI_Receiver" actor component to an actor.
* Trigger NDI Receiver function.
* Get "Received_Frame (UTexture2D)" from "AC_NDI_Receiver" actor component at "Event Tick (On Windows)" or "Set Timer by Event (Android)".
* Don't use +15 FPS on mobile (Samsung Galaxy S21)
* Default "Receive_Rate (float variable of AC_NDI_Receiver)" is 0.1. Use it for Set Timer by Event's loop time. You can change it with other second based values.