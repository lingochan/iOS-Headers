/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVCaptureFileOutputRecordingDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "SBSAccelerometerDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString, NSTimer, SBSAccelerometer;

@interface PLCameraController : NSObject <SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_avCaptureSession;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    id _panoramaProcessor;
    id _panoramaImageQueue;
    struct CGSize _panoramaPreviewSize;
    float _panoramaPreviewScale;
    struct dispatch_queue_s *_avCaptureSessionDispatchQueue;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect _cleanAperture;
    BOOL _shouldBeStopped;
    int _cameraMode;
    int _cameraDevice;
    int _flashMode;
    int _captureOrientation;
    BOOL _imageWriterQueueIsAvailable;
    BOOL _hdrEnabled;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    float _zoomFactor;
    id <PLCameraControllerDelegate> _delegate;
    double _maximumCaptureDuration;
    int _captureQuality;
    NSString *_videoCapturePath;
    SBSAccelerometer *_accelerometer;
    struct CGImage *_lastVideoPreviewFrameImageRef;
    BOOL _lockFocusLock;
    BOOL _lockFocusAfterFocusFinishes;
    BOOL _isFocusingOnFace;
    int _cameraOrientation;
    NSTimer *_idleTimerTimer;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    int _imageWriterQueueAvailabilityToken;
    struct {
        unsigned int supportsVideo:1;
        unsigned int supportsFocus:1;
        unsigned int supportsExposure:1;
        unsigned int supportsZoom:1;
        unsigned int supportsHDR:1;
        unsigned int supportsPanorama:1;
        unsigned int hasFlash:1;
        unsigned int hasFrontCamera:1;
        unsigned int deferStartVideoCapture:1;
        unsigned int inCall:1;
        unsigned int isCapturingPanorama:1;
        unsigned int focusDisabled:1;
        unsigned int focusWasModified:1;
        unsigned int serverDied:1;
        unsigned int didGetDeviceUnavailableInBackground:1;
        unsigned int didSetLocationData:1;
        unsigned int isChangingMode:1;
        unsigned int flashWillFireAutomatically:1;
        unsigned int isCameraApp:1;
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate:1;
        unsigned int logFocusInfo:1;
        unsigned int logPreviewInfo:1;
        unsigned int logCaptureInfo:1;
        unsigned int logFlashInfo:1;
        unsigned int logDebugInfo:1;
        unsigned int logPanoInfo:1;
        unsigned int enableFirstLastFrame:1;
        unsigned int enable720p60Recording:1;
        unsigned int convertSampleBufferToJPEG:1;
        unsigned int delegateDidStartSession:1;
        unsigned int delegateWillStartPreview:1;
        unsigned int delegatePreviewDidStart:1;
        unsigned int delegateSessionDidStart:1;
        unsigned int delegateDidStopSession:1;
        unsigned int delegateWillStopSession:1;
        unsigned int delegateSessionDidStop:1;
        unsigned int delegateSessionWasInterrupted:1;
        unsigned int delegateSessionInterruptionEnded:1;
        unsigned int delegateServerDied:1;
        unsigned int delegateCleanApertureDidChange:1;
        unsigned int delegateModeWillChange:1;
        unsigned int delegateModeDidChange:1;
        unsigned int delegateWillTakePhoto:1;
        unsigned int delegateDidTakePhoto:1;
        unsigned int delegateCapturedPhoto:1;
        unsigned int delegateDidChangeCaptureAbility:1;
        unsigned int delegateDidUpdatePanoramaPreview:1;
        unsigned int delegateWillStopPanoramaCapture:1;
        unsigned int delegatePanoramaWillStartProcessing:1;
        unsigned int delegatePanoramaDidStopProcessing:1;
        unsigned int delegateCapturedPanorama:1;
        unsigned int delegateVideoCaptureDidStart:1;
        unsigned int delegateDidStopVideoCapture:1;
        unsigned int delegateVideoCaptureDidStop:1;
        unsigned int delegateWillStartAutofocus:1;
        unsigned int delegateFocusDidStart:1;
        unsigned int delegateFocusDidEnd:1;
        unsigned int delegateFaceMetadataDidChange:1;
        unsigned int delegateTorchAvailabilityChanged:1;
    } _cameraFlags;
    id postSessionSetupBlock;
}

+ (id)sharedInstance;
@property(nonatomic) int captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(copy, nonatomic) id postSessionSetupBlock; // @synthesize postSessionSetupBlock;
@property(nonatomic) float zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(readonly, nonatomic) struct CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(readonly, nonatomic) struct CGSize panoramaPreviewSize; // @synthesize panoramaPreviewSize=_panoramaPreviewSize;
@property(readonly, nonatomic) float panoramaPreviewScale; // @synthesize panoramaPreviewScale=_panoramaPreviewScale;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(readonly, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_avCaptureOutputPhoto;
@property(nonatomic) AVCaptureOutput *currentOutput; // @synthesize currentOutput=_currentOutput;
@property(nonatomic) AVCaptureDeviceInput *currentInput; // @synthesize currentInput=_currentInput;
@property(nonatomic) AVCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) AVCaptureSession *currentSession; // @synthesize currentSession=_avCaptureSession;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
- (void)_setCameraOrientation:(int)arg1;
@property(readonly, nonatomic) int cameraOrientation;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (void)_synchronizeHDRSettings;
- (BOOL)_isCountingHDREV0Captures;
@property(readonly, nonatomic) BOOL supportsHDR;
@property(nonatomic, getter=isHDREnabled) BOOL HDREnabled; // @synthesize HDREnabled=_hdrEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isTorchDisabled;
- (void)_updateTorchAvailability;
- (BOOL)isTorchOn;
- (BOOL)flashWillFire;
@property(nonatomic) int flashMode;
- (BOOL)hasFlash;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_torchLevelChanged;
- (void)_flashStateChanged;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_faceRectangleChanged;
- (struct CGRect)faceRectangle;
- (BOOL)isFocusingOnFace;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_exposureCompleted;
- (BOOL)isExposing;
- (void)_exposureStarted;
- (void)_focusHasChanged:(id)arg1;
- (void)_focusStarted;
- (void)_focusCompleted;
- (void)_lockedFocusOperationFinished;
- (void)_autofocusOperationFinished;
- (void)_focusOperationFinished;
- (void)_commonFocusFinished;
- (void)setFocusDisabled:(BOOL)arg1;
- (BOOL)isFocusing;
- (void)lockExposure;
- (void)lockFocusForRecording;
- (void)lockFocus;
- (void)_lockFocus:(BOOL)arg1 lockExposure:(BOOL)arg2 lockWhiteBalance:(BOOL)arg3;
- (BOOL)isExposureLockSupported;
- (BOOL)isFocusLockSupported;
- (BOOL)canLockFocus;
- (void)autoExpose;
- (void)autofocusAfterCapture;
- (void)autofocus;
- (void)_autofocus:(BOOL)arg1 autoExpose:(BOOL)arg2;
- (void)restartAutoFocus;
- (int)currentFocusMode;
- (void)focusAtAdjustedPoint:(struct CGPoint)arg1;
- (BOOL)canFocusAtPoint;
- (BOOL)isFocusAllowed;
- (void)_panoramaDidStop;
- (void)stopPanoramaCapture;
- (void)startPanoramaCapture;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (BOOL)isCapturingPanorama;
- (BOOL)canCapturePanorama;
- (BOOL)supportsPanorama;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (id)videoCapturePath;
- (void)stopVideoCapture;
- (double)minimumVideoCaptureDuration;
- (void)startVideoCapture;
- (void)_setVideoCapturePath:(id)arg1;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)_setOrientation;
- (BOOL)canCaptureVideo;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id *)arg2;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (BOOL)isCapturingVideo;
- (void)capturePhoto;
- (BOOL)imageWriterQueueIsAvailable;
- (BOOL)canCapturePhoto;
- (void)_didTakePhoto;
- (void)_willTakePhoto;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_resetIdleTimer;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_serverDied:(id)arg1;
- (void)_recoverFromServerError;
- (void)stopPreview;
- (void)_previewStarted:(id)arg1;
- (void)_clearPreviewLayer;
- (void)startPreview;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)_sessionStopped:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)tearDownCaptureSession;
- (void)_tearDownCamera;
- (void)_setDelaySuspend:(BOOL)arg1;
- (void)_forceDelaySuspendTimeout;
- (void)_teardownDelaySuspendTimer;
- (void)_destroyCamera;
- (BOOL)_setupCamera;
- (id)_currentVideoConnection;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWilEnterForeground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (BOOL)supportsZoom;
- (float)maximumZoomFactor;
- (float)minimumZoomFactor;
- (void)_unlockCurrentDeviceForConfiguration;
- (BOOL)_lockCurrentDeviceForConfiguration;
@property(nonatomic) BOOL isCameraApp;
- (void)_setLocationEnabled:(BOOL)arg1;
- (BOOL)_modeUsesCompassHeading;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
@property(nonatomic) BOOL convertSampleBufferToJPEG;
@property(nonatomic) int cameraDevice;
- (BOOL)hasFrontCamera;
@property(nonatomic) int cameraMode;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_sanityCheckCameraMode:(int *)arg1 cameraDevice:(int *)arg2;
- (BOOL)supportsVideoCapture;
- (BOOL)isChangingModes;
- (void)executeBlockOnMainQueue:(id)arg1;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (BOOL)isReady;
- (void)_imageWriterQueueAvailabilityChanged;
- (BOOL)inCall;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)_callStateDidChange:(id)arg1;
- (void)_updateCallStatus;
- (void)dealloc;
- (id)init;

@end

