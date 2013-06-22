/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSCoding-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@interface SSNetworkConstraints : NSObject <SSCoding, SSXPCCoding, NSCopying>
{
    struct dispatch_queue_s *_dispatchQueue;
    long long _sizeLimit2G;
    long long _sizeLimit3G;
    long long _sizeLimitWiFi;
}

+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(int)arg2 legacyDictionary:(id)arg3;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)sizeLimitForNetworkType:(int)arg1;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)setAllNetworkTypesDisabled;
@property(readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
- (void)dealloc;
- (id)init;

@end
