# NDI_Android

## Working Functions
* NDI Android Send Texture2D (ARGB or BGRA textures required)
* NDI Android Send TextureRenderTarget2D (PF_B8G8R8A8 format required)
* NDI Android Finder

## Usage
* You should use sender functions with "Set Timer by Event" and use appropriate loop time (1 / Wanted FPS will give you loop time)
* We used GetRenderThread Read Pixel (it should be done on game thread or render thread) function and there is for loop (async) to fix alpha values. This requires a calculation time. So, don't use +15 FPS on mobile (Samsung Galaxy S21)
* You can use Media Player > Media Texture > Material > Draw Material on Render Target workflow to send android camera.
* Android 12 requires additional NSD service in order to be seen on NDI receivers. This requires JNI and Java knowledge which we don't have.
* So, you have two choice.
** Buy NDI Camera app from app store and just open it. Put it background and use your Unreal app as its UI.
** You can wait that we finish flutter based NSD service app.

## Work-In-Progress
* NDI Android Receiver
* NSD Service
 
