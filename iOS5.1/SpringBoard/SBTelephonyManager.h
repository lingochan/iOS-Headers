/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RadiosPreferencesDelegate-Protocol.h"

@class NSString, NSTimer, RadiosPreferences, SBAlertItem;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate>
{
    void *_suspendDormancyAssertion;
    NSString *_operatorName;
    NSString *_lastKnownNetworkCountryCode;
    unsigned int _suspendDormancyEnabled;
    unsigned int _usingWifi:1;
    unsigned int _usingVPN:1;
    unsigned int _iTunesNeedsToRecheckActivation:1;
    unsigned int _pretendingToSearch:1;
    unsigned int _callForwardingIndicator:2;
    BOOL _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    unsigned int _loggingCallAudio:1;
    NSString *_inCallStatusPreamble;
    NSTimer *_inCallTimer;
    RadiosPreferences *_radioPrefs;
    int _needsUserIdentificationModule;
}

+ (id)sharedTelephonyManager;
+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1;
- (id)init;
- (void)_postStartupNotification;
- (struct __CTServerConnection *)_serverConnection;
- (void)_avSystemControllerDidError:(id)arg1;
- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (void)SBTelephonyDaemonRestartHandler;
- (void)updateTTYIndicator;
- (double)inCallDuration;
- (void)setCallForwardingIndicator:(int)arg1;
- (void)updateCallForwardingIndicator;
- (int)callForwardingIndicator;
- (void)updateSpringBoard;
- (void)updateStatusBarCallState:(BOOL)arg1;
- (void)updateStatusBarCallDuration;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)arg1;
- (void)setFastDormancySuspended:(BOOL)arg1;
- (void)updateAirplaneMode;
- (void)airplaneModeChanged;
- (void)updateCalls;
- (void)_updateState;
- (BOOL)updateLocale;
- (BOOL)updateNetworkLocale;
- (BOOL)_updateLastKnownNetworkCountryCode;
- (id)lastKnownNetworkCountryCode;
- (void)handleSIMReady;
- (id)urlWithScheme:(id)arg1 fromDialingNumber:(id)arg2 abUID:(int)arg3 urlPathAddition:(id)arg4 forceAssist:(BOOL)arg5 suppressAssist:(BOOL)arg6 wasAlreadyAssisted:(BOOL)arg7;
- (id)displayForOutgoingCallURL:(id)arg1;
- (void)_delayedAudioResume;
- (long long)getRowIDOfLastCallInsert;
- (id)allMissedCallsAfterRowID:(long long)arg1;
- (int)callCount;
- (BOOL)activeCallExists;
- (BOOL)heldCallExists;
- (BOOL)incomingCallExists;
- (BOOL)outgoingCallExists;
- (BOOL)multipleCallsExist;
- (BOOL)inCallUsingReceiverForcingRoutingToReceiver:(BOOL)arg1;
- (BOOL)callWouldUseReceiver:(BOOL)arg1;
- (BOOL)shouldHangUpOnLock;
- (BOOL)inCall;
- (void)disconnectIncomingCall;
- (BOOL)isCallAmbiguous;
- (void)swapCalls;
- (void)disconnectAllCalls;
- (void)disconnectCall;
- (void)disconnectCallAndActivateHeld;
- (void)unmute;
- (void)setIncomingVoiceCallsEnabled:(BOOL)arg1;
- (BOOL)isLoggingCallAudio;
- (void)_setIsLoggingCallAudio:(BOOL)arg1;
- (void)dumpBasebandState:(id)arg1;
- (BOOL)MALoggingEnabled;
- (BOOL)isNetworkRegistrationEnabled;
- (void)setNetworkRegistrationEnabled:(BOOL)arg1;
- (int)dataConnectionType;
- (BOOL)cellularRadioCapabilityIsActive;
- (BOOL)EDGEIsOn;
- (id)_radioPrefs;
- (void)setIsInAirplaneMode:(BOOL)arg1;
- (BOOL)isInAirplaneMode;
- (BOOL)isUsingSlowDataConnection;
- (BOOL)isTTYEnabled;
- (void)setIsUsingWiFiConnection:(BOOL)arg1;
- (void)setIsUsingVPNConnection:(BOOL)arg1;
- (BOOL)isUsingVPNConnection;
- (void)_postDataConnectionTypeChangedNotification;
- (id)copyMobileEquipmentInfo;
- (id)copyTelephonyCapabilities;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (void)_provisioningUpdateWithStatus:(int)arg1;
- (BOOL)isEmergencyCallActive;
- (BOOL)isInEmergencyCallbackMode;
- (void)exitEmergencyCallbackMode;
- (void)configureForTTY:(BOOL)arg1;
- (BOOL)shouldPromptForTTY;
- (id)ttyTitle;
- (void)_resetCTMMode;
- (void)_headphoneChanged:(id)arg1;
- (void)postponementStatusChanged;
- (void)_setRegistrationStatus:(int)arg1;
- (void)_updateRegistrationNow;
- (void)_cancelFakeService;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeService;
- (BOOL)_pretendingToSearch;
- (void)_prepareToAnswerCall;
- (void)carrierBundleChanged;
- (id)_fetchOperatorName;
- (void)_reallySetOperatorName:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)operatorBundleChanged;
- (id)operatorName;
- (int)registrationStatus;
- (BOOL)canOnlyMakeEmergencyCalls;
- (void)checkForRegistrationSoon;
- (id)SIMStatus;
- (BOOL)needsUserIdentificationModule;
- (int)registrationCauseCode;
- (void)noteSIMUnlockAttempt;
- (BOOL)isNetworkTethering;
- (int)numberOfNetworkTetheredDevices;
- (void)setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2;
- (void)noteWirelessModemChanged;
- (void)_wokeFromSleep:(id)arg1;

@end

