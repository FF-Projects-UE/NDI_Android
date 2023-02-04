# NDI_Android

## Working Functions
* NDI Android Send Texture2D (ARGB or BGRA textures required)
* NDI Android Send TextureRenderTarget2D (PF_B8G8R8A8 format required)
* NDI Android Finder
* NDI Android Receiver

## Sender Usage
* Init NDIlib library if you didn't.
* You should use sender functions with "Set Timer by Event" and use appropriate loop time (1 / Wanted FPS will give you loop time)
* We used GetRenderThread Read Pixel (it should be done on game thread or render thread) function and there is for loop (async) to fix alpha values. This requires a calculation time. So, don't use +15 FPS on mobile (Samsung Galaxy S21)
* You can use Media Player > Media Texture > Material > Draw Material on Render Target workflow to send android camera.

## Receiver Usage
* Init NDIlib library if you didn't.
* Add "AC_NDI_Receiver" actor component to an actor.
* Trigger NDI Receiver function.
* Get "Received_Frame (UTexture2D)" from "AC_NDI_Receiver" actor component at "Event Tick" or "Set Timer by Event".
* Use it as you like.

## Limitations
* C++ functions and blueprint samples have been finished. But Android requires NSD (Network Service Discovery) for send and receive sources.
NDI SDK and C++ don't have this feature and should be done with Java JNI. Currently we don't have required Java knowledge for that but we are working to move around of it.

## Work-In-Progress
* NSD Service for send and receive (We will create a flutter app)

## Temporary Solution for Sending
* If you have NDI HX Camera app from Google Playstore, just open it and put it background. Don't broadcast.
* Open your Unreal based mobile application and stream it. It will use NDI HX's network discovery service.
* You can think that your Unreal app will be new UI for NDI HX Camera.
