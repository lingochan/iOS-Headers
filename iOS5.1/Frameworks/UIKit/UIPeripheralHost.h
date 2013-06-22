/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIKeyboardSplitTransitionDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSMutableSet, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputViewTransition, UIKeyboardAutomatic, UIKeyboardCornerView, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder;

@interface UIPeripheralHost : NSObject <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;
    UIKeyboardAutomatic *_automaticKeyboard;
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _automaticKeyboardState;
    int _ignoringReloadInputViews;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    int _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer *_translateRecognizer;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    struct CGAffineTransform _targetTransform;
    struct CGAffineTransform _initialTransform;
    struct CGPoint _velocity;
    NSMutableArray *_dropShadowViews;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    struct CGRect _previousShadowFrameLeft;
    struct CGRect _previousShadowFrameRight;
    id _bounceCompletionBlock;
    float m_keyboardAttachedViewHeight;
    struct CGRect _lastKnownIVFrame;
    struct CGRect _lastKnownIAVFrame;
    float _splitHeightDelta;
    NSMutableArray *_animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    double _nextAutomaticOrderInDuration;
    double _lastAutomaticKeyboardDuration;
    int _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    UIInputViewSet *_inputViewSet;
    UIResponder *_responder;
    NSMutableSet *_pinningResponders;
    BOOL _ignoresPinning;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    BOOL _animationFencingEnabled;
    BOOL _interfaceAutorotationDisabled;
    UIKeyboardRotationState *_rotationState;
    UIInputViewTransition *_currentTransition;
    UIResponder *_selfHostingTrigger;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
}

+ (void)_releaseSharedInstance;
+ (id)sharedInstance;
+ (struct CGRect)screenBoundsInAppOrientation;
@property(nonatomic) int currentState; // @synthesize currentState=_automaticKeyboardState;
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property(retain, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property(retain, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property(nonatomic) BOOL animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property(retain, nonatomic) UIInputViewTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property(nonatomic) BOOL automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
- (void)transitionDidFinish;
- (void)updateFrame:(struct CGRect)arg1 withDuration:(float)arg2 splitHeightDelta:(float)arg3;
- (void)updateFrame:(struct CGRect)arg1 withDuration:(float)arg2;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(float)arg2;
- (id)nextAnimationStyle:(BOOL)arg1;
- (id)nextAnimationStyle;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderOutAutomaticSkippingAnimation;
- (void)orderOutAutomatic;
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderInAutomaticSkippingAnimation;
- (void)orderInAutomatic;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderInAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderOutAutomatic;
- (void)forceOrderInAutomatic;
- (id)_sizingWindowForOrientation:(int)arg1;
- (void)layoutIfNeeded;
- (void)layoutInputViews;
- (void)layoutInputViewsForGeometry:(struct UIPeripheralAnimationGeometry)arg1;
@property(readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
- (void)createAutomaticKeyboardIfNeeded;
@property(readonly, nonatomic) BOOL animationsEnabled;
- (void)finishRotationOfKeyboard:(id)arg1;
- (void)rotateKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)finishRotation;
- (void)rotateToOrientation:(int)arg1;
- (void)prepareForRotationToOrientation:(int)arg1;
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1;
- (void)updateDropShadow;
- (void)showDropShadows:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)translateDetected:(id)arg1;
- (void)handleTranslateDetectedFinished:(id)arg1;
- (void)disableInterfaceAutorotation:(BOOL)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)finishSplitTransition:(id)arg1;
- (void)prepareForSplitTransition;
- (void)showInputViewsIfNeeded;
- (void)fadeInputViewsIfNeeded;
- (void)fadeInInputViews:(BOOL)arg1;
- (BOOL)isUndocked;
- (void)undock;
- (void)dock;
- (void)createCornerViews;
- (void)refreshCorners;
- (void)_performRefreshCorners;
- (void)showCorners:(BOOL)arg1 withDuration:(float)arg2;
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;
- (void)postUndockingNotification;
- (void)postDockingNotification;
- (void)postDidHideNotification;
- (void)postDidShowNotification;
@property(retain, nonatomic) UIPeripheralHostState *targetState;
- (void)manualKeyboardWasOrderedOut:(id)arg1;
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;
- (void)manualKeyboardWasOrderedIn:(id)arg1;
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;
- (BOOL)isOffScreen;
- (BOOL)isOnScreen;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)arg1;
- (id)retain;
- (void)createHostViewIfNeeded;
- (void)initializeTranslateGestureRecognizer;
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)peripheralHostDidEnterBackground:(id)arg1;
- (void)peripheralHostWillResume:(id)arg1;
- (void)completeCurrentTransitionIfNeeded;
- (BOOL)hasDictationKeyboard;
- (BOOL)inputViewKeyboardIsSplit;
- (void)dealloc;
- (id)init;
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1;
@property(readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;

@end

