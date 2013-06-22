/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CoreDAVAccountInfoProvider <NSObject>
- (BOOL)shouldFailAllTasks;
- (BOOL)handleCertificateError:(id)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg1;
- (id)userAgentHeader;
- (id)serverComplianceClasses;
- (id)accountID;
- (id)principalURL;
- (id)identityPersist;
- (id)password;
- (id)user;
- (id)serverRoot;
- (int)port;
- (id)host;
- (id)scheme;

@optional
- (BOOL)shouldCompressRequests;
- (BOOL)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)additionalHeaderValues;
@end

