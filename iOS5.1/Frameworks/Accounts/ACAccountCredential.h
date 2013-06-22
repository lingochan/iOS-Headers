/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject
{
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
}

+ (id)keysForType:(id)arg1;
+ (id)credentialWithPassword:(id)arg1;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
@property(copy, nonatomic) NSString *credentialType;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *oauthTokenSecret;
@property(copy, nonatomic) NSString *oauthToken;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)credentialItemForKey:(id)arg1;
- (id)keysForCredentialItems;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPassword:(id)arg1;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;

@end

