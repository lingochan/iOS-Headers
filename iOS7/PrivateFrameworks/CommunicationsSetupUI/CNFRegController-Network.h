/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegController.h>

@interface CNFRegController (Network)
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (void)_stopWiFiAlertWatchTimer;
- (void)_startWiFiAlertWatchTimer;
- (void)_wifiAlertWatchTimerFired:(id)arg1;
- (void)resetNetworkFirstRunAlert;
- (void)showNetworkFirstRunAlert;
- (void)showNetworkAlertIfNecessary;
- (void)showNetworkAlert;
- (void)_showNetworkAlertWithMessage:(id)arg1;
- (id)networkSettingsURLAllowingCellular:(_Bool)arg1;
- (_Bool)deviceCanTakeNetworkAction;
- (_Bool)deviceHasNetworkEnabled;
- (_Bool)deviceHasSaneNetworkConnection;
- (void)openURL:(id)arg1;
@end
