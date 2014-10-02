//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBAlert, SBApplication, SBUIAnimationController;

@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBAlert *_activatingAlert;
    SBApplication *_topApplication;
    SBUIAnimationController *_animation;
    _Bool _animatedAppDeactivation;
    _Bool _fromStarkLauncher;
}

@property(readonly, nonatomic) SBAlert *alert; // @synthesize alert=_activatingAlert;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 alert:(id)arg3 overTopApplication:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
