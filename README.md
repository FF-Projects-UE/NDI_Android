# NDI_Android

## Dependency
* (Android) Use https://github.com/gtreshchev/AndroidNative to call NSD service starter (EnableNsdService with 1522 port) or implement your own JNI method.

## WORKING FUNCTIONS
* NDI_Android_Init
* NDI_Android_Release
##
* NDI_Android_Sender_Create
* NDI_Android_Sender_Release
* NDI_Android_Send_T2D (Texture2D - ARGB or BGRA textures required)
* NDI_Android_Send_TRT2D (Texture Render Target 2D - PF_B8G8R8A8 format required)
##
* NDI_Android_Source_Infos
* NDI_Android_Find
* NDI_Android_Receiver_Create
* NDI_Android_Receiver_Release
* NDI_Android_Receive_Frames
##
* NDI_Android_KVM_Mouse_Send
* NDI_Android_KVM_Mouse_Release
* NDI_Android_KVM_Mouse_Position (It sends an FVector2D data. So, you need to implement your own cursor calculation.)

## WORK-IN-PROGESS
* NDI_Android_Receive_Audio (We will test its performance after finish. If we won't be able to create sound at 0.16 ms speed at least, we will delete it. You can receive frames and audios at different time loop.)
* NDI_Android_KVM_Keyboard

## SENDER USAGE
* (Only Android) Start NSD service with your JNI solution if you didn't. (Android Native has ready-to-use "EnableNsdService" function which implemented by us. Use same port for both NSD service and sender.)
* Init NDIlib library if you didn't. (NDI_Android_Init)
* Create a sender object. (NDI_Android_Sender_Create)
* Send your Texture2D, Texture Render Target 2D or Media Texture with respective function on "Set Timer by Event".
* You can use Media Player > Media Texture > Material > Draw Material on Render Target workflow to send android camera.
* You can change sending FPS with "Set Timer by Event" function's loop time. If you use 0.1 seconds, it will send at 10 FPS. If you use 0.016 it will send at 60 FPS.
* FPS inputs of texture send functions will just create a metada. So, it is not very important. For mobile 0.1 second timer and 30 FPS will give relatively good result.

## RECEIVER USAGE
* (Only Android) Start NSD service with your JNI solution if you didn't. (Android Native has ready-to-use "EnableNsdService" function which implemented by us.)
* Init NDIlib library if you didn't. (NDI_Android_Init)
* Find sources (NDI_Android_Find, you don't need create an array of NDI_Found_Sources object referance. Object's itself works like an array.)
* Create a receiver with found sources. (Just plug NDI_Found_Sources object referance and give a source index)
* Receive frames with "NDI Android Receive Frames" function on "Event Tick (Windows)" or "Set Timer by Event (Android)"

## PERFORMANCE
* Don't use +15 FPS on mobile (Samsung Galaxy S21). Because sending or receiving a texture is an expensive operation. (For example, TextureRenderTarget2D requires GameThread_GetRenderTargetResource function to read its data. Also we need to fix alpha valus with for loop.)

## PLATFORM SUPPORT
* It works on Windows and Android.
* You can control a Windows PC from Android with KVM but you can't control an Android. This is NDI's limitation.
* We don't have Mac to build binaries for Apple devices but NDI functions are same for all platforms. If you need iOS version, fork it, add necessary libraries to build.cs and make another UPL.xml for iOS. C++ side will work.
