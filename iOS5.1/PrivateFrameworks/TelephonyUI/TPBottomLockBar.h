/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUI/TPBottomBar.h>

@class NSArray, NSTimer, TPLockKnobView, TPLockTextView, TPWell, UIView;

@interface TPBottomLockBar : TPBottomBar
{
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    TPWell *_well;
    TPLockKnobView *_secondaryKnobView;
    TPLockTextView *_secondaryLabel;
    NSTimer *_secondaryLabelDisplayTimer;
    BOOL _animatingInSecondaryLabel;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
}

+ (struct CGSize)defaultSize;
+ (float)defaultLabelFontSize;
- (void)drawRect:(struct CGRect)arg1;
- (float)defaultWellWidth;
- (id)wellImageName;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (BOOL)usesBackgroundImage;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (id)initWithFrame:(struct CGRect)arg1 knobImage:(id)arg2;
- (id)_knobImageForColor:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 knobColor:(int)arg2;
- (void)setPrimaryKnobColor:(int)arg1;
- (void)setPrimaryKnobImage:(id)arg1;
- (void)setSecondaryKnobColor:(int)arg1;
- (void)setSecondaryKnobImage:(id)arg1;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)knob;
- (id)secondaryKnob;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)_clearSecondaryLabelTimer;
- (void)_startSecondaryLabelTimer;
- (void)_secondaryLabelTimerFired:(id)arg1;
- (void)downInKnob:(id)arg1;
- (void)upInKnob:(id)arg1 forUnlock:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (float)_calcKnobYOffset;
- (void)_adjustKnobOrigins;
- (void)_adjustLabelOrigins;
- (void)_setLabel:(id)arg1 andAssignToView:(id *)arg2;
- (void)_setLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)startCyclingLabels;
- (void)stopCyclingLabels;
- (void)cycleToNextLabel;
- (int)currentLabelIndex;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)setLabels:(id)arg1;
- (id)labels;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (void)_knob:(id)arg1 draggedWithProgress:(float)arg2;
- (void)knobDragged:(float)arg1;
- (void)secondaryKnobDragged:(float)arg1;
- (void)slideBack:(BOOL)arg1 forKnob:(id)arg2;
- (void)relock;
- (void)freezeKnobInUnlockedPosition;
- (void)unlockForKnob:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (id)well;
- (void)setKnobWellWidth:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (id)labelView;
- (BOOL)_canDrawContent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

