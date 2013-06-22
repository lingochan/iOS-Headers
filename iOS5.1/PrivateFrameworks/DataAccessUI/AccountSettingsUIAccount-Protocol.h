/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AccountSettingsUIAccount <NSObject>
+ (void *)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
- (BOOL)otherAccountEnabledForDataclass:(id)arg1;
- (BOOL)supportsPush;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)syncStoreIdentifier;
- (id)uniqueId;
- (id)displayName;

@optional
+ (Class)syncControllerClass;
+ (Class)detailControllerClass;
- (BOOL)supportsPushForDataclass:(id)arg1;
- (void *)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
- (id)localizedDetailString;
- (id)accountInfoUsername;
@end

