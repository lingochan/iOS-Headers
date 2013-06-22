/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, PLCameraButton, PLCropOverlayBottomBarButton, UIButton, UIImage, UIImageView, UILabel;

@interface PLCropOverlayBottomBar : UIView
{
    UIImage *_backgroundImage;
    UIImageView *_takePhotoView;
    PLCameraButton *_shutterButton;
    PLCropOverlayBottomBarButton *_cancelButton;
    UIView *_modeSwitch;
    UIButton *_playPauseButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    NSString *_title;
    UIImageView *_editPhotoView;
    PLCropOverlayBottomBarButton *_editCancelButton;
    PLCropOverlayBottomBarButton *_editDoneButton;
    UILabel *_editLabel;
    id _delegate;
    unsigned int _takingPhotoView:1;
    unsigned int _wasEnabled:1;
}

- (void)_slideAnimationComplete:(id)arg1;
- (void)didCaptureVideo;
- (void)didCapturePhoto;
- (void)_didCapture;
- (void)doneButtonClicked:(id)arg1;
- (void)editCancelButtonClicked:(id)arg1;
- (void)_animateViewOriginDeltaX:(float)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCancelButtonHidden:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (id)modeSwitch;
- (void)setModeSwitch:(id)arg1;
- (id)shutterButton;
- (void)setEnabled:(BOOL)arg1;
- (void)setTakePhoto:(BOOL)arg1;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)_updatePlayPauseButtonImage:(id)arg1;
- (void)_playPause:(id)arg1;
- (void)prepareForVideoEdit;
- (id)_pauseImage;
- (id)_playImage;
- (void)_prepareForPhotoEdit;
- (void)_createTakePhotoView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

