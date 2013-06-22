/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSTimer, PLCropModel, PLCropOverlayLayer, UIImage, UIImageView;

@interface PLImageAdjustmentView : UIView <UIGestureRecognizerDelegate>
{
    PLCropModel *_cropModel;
    UIImageView *_imageView;
    PLCropOverlayLayer *_overlayLayer;
    id <PLImageAdjustmentViewDelegate> _delegate;
    UIImage *_editedImage;
    struct UIEdgeInsets _cropInsets;
    int _gestureCount;
    struct CGAffineTransform _originalTransform;
    struct CGRect _imageCropRect;
    struct CGRect _previousImageCropRect;
    float _cropAngle;
    float _previousCropAngle;
    float _photoViewScale;
    float _sourceAspectRatio;
    unsigned int _currentCropAction;
    NSTimer *_manualCropTimer;
    float _autoCropScale;
    double _animationDuration;
    unsigned int _isCropMode:1;
    unsigned int _isAdjustingCropRect:1;
    unsigned int _isAnimating:1;
    unsigned int _canRotate:1;
    unsigned int _needsRecenterImage:1;
    unsigned int _delegateWillCropImage:1;
    unsigned int _delegateDidCropImage:1;
    unsigned int _delegateDidTouchImage:1;
}

- (id)overlayLayer;
- (id)imageView;
- (struct CGRect)_maxOverlayCropRect;
- (float)_minimumImageScale;
- (float)_imageScale;
- (struct CGRect)overlayCropRect;
- (BOOL)_updateCropAngle;
- (BOOL)_updateCropRect;
@property(nonatomic) struct CGSize aspectRatio;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg1;
- (float)previousCropAngle;
- (float)cropAngle;
- (struct CGRect)previousCropRect;
- (struct CGRect)cropRect;
- (void)setCropRect:(struct CGRect)arg1 cropAngle:(float)arg2;
- (void)reset;
@property(nonatomic) struct UIEdgeInsets cropInsets;
@property(nonatomic, getter=isCropMode) BOOL cropMode;
@property(retain, nonatomic) UIImage *editedImage;
- (void)replaceEditedImage:(id)arg1;
@property(nonatomic) id <PLImageAdjustmentViewDelegate> delegate;
- (BOOL)isDisplayingProgressIndicators;
- (void)removeProgressIndicators;
- (void)removeProgressIndicatorAtLocation:(struct CGPoint)arg1;
- (void)displayProgressIndicatorAtLocation:(struct CGPoint)arg1;
- (void)showIndicatorAtPointInImage:(struct CGPoint)arg1 duration:(double)arg2;
- (void)commitAnimations;
- (void)beginAnimation:(double)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_cropTimer:(id)arg1;
- (void)_performCropAction:(int)arg1 location:(struct CGPoint)arg2;
- (BOOL)_isInCropGesture;
- (void)_endCropGesture:(id)arg1;
- (void)_beginCropGesture:(id)arg1;
- (void)touch:(id)arg1;
- (void)crop:(id)arg1;
- (void)rotate:(id)arg1;
- (void)scale:(id)arg1;
- (void)pan:(id)arg1;
- (void)_updateGestureRecognizers;
- (float)computeScaleToFillRelativeToPointInImage:(struct CGPoint)arg1;
- (int)cropActionForPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;
- (void)_updateOverlayCropRect;
- (void)_updateImageView;
- (void)layoutSubviews;
- (void)setNeedsRecenterImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

