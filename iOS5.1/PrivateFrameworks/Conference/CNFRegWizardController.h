/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSSetupController.h"

@class CNFRegController;

@interface CNFRegWizardController : PSSetupController
{
    CNFRegController *_regController;
    int _serviceType;
    id <CNFRegWizardControllerDelegate> _firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct {
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int shouldListenForSuspension:1;
        unsigned int canStartNested:1;
        unsigned int canShowSplashScreen:1;
        unsigned int canShowDisabledScreen:1;
        unsigned int hideLearnMoreButton:1;
        unsigned int showSplashOnSignin:1;
        unsigned int reloadOnViewWillAppear:1;
        unsigned int allowCancel:1;
    } _wizardFlags;
}

+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(int)arg1;
- (id)init;
- (void)dealloc;
- (int)_firstRunState:(id)arg1;
- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllersToShow;
- (BOOL)shouldShowFirstRunController:(BOOL)arg1;
- (BOOL)shouldShowFirstRunController;
- (void)viewDidLoad;
- (void)setupController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)dismissWithState:(unsigned int)arg1;
- (void)dismissFinished:(BOOL)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)_doCancel;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
@property(nonatomic) BOOL canStartNested;
@property(nonatomic) BOOL canShowSplashScreen;
@property(nonatomic) BOOL canShowDisabledScreen; // @dynamic canShowDisabledScreen;
@property(nonatomic) BOOL reloadOnViewWillAppear; // @dynamic reloadOnViewWillAppear;
@property(nonatomic) BOOL shouldListenForSuspension; // @dynamic shouldListenForSuspension;
@property(nonatomic) BOOL allowCancel;
@property(nonatomic) BOOL hideLearnMoreButton; // @dynamic hideLearnMoreButton;
@property(nonatomic) BOOL showSplashOnSignin;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) id <CNFRegWizardControllerDelegate> firstRunDelegate; // @synthesize firstRunDelegate=_firstRunDelegate;

@end

