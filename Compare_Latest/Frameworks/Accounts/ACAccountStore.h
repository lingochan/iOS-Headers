/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"

@class NSArray, NSString, XPCProxy<ACDAccountStoreProtocol>;

@interface ACAccountStore : NSObject <XPCProxyTarget>
{
    XPCProxy<ACDAccountStoreProtocol> *_accountStoreProxy;
    struct dispatch_queue_s *_connectionQueue;
    struct dispatch_queue_s *_replyQueue;
    struct _xpc_connection_s *_connection;
    NSString *_clientBundleID;
}

+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_clientBundleID;
- (void).cxx_destruct;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)typeForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)promptUserForCredentialsWithAccount:(id)arg1 withHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withCompletionHandler:(id)arg3;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountDataclass:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (id)accountsWithAccountType:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
@property(readonly, nonatomic) XPCProxy<ACDAccountStoreProtocol> *accountStoreProxy;
- (void)tearDownConnection;
- (void)_configureWithConnection:(struct _xpc_connection_s *)arg1;
- (struct _xpc_connection_s *)_newConnectionWithName:(const char *)arg1;
- (void)dealloc;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithConnection:(struct _xpc_connection_s *)arg1;
- (id)init;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;

@end
