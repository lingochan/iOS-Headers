/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface IMPerson : NSObject
{
    int _recordID;
    BOOL _registered;
    BOOL _beingTornDown;
}

@property(readonly, nonatomic) BOOL _beingTornDown; // @synthesize _beingTornDown;
@property(readonly, nonatomic) BOOL _registered; // @synthesize _registered;
@property(readonly, nonatomic) int _recordID; // @synthesize _recordID;
- (unsigned int)hash;
@property(readonly, nonatomic) unsigned int status;
@property(readonly, nonatomic) NSData *imageDataWithoutLoading;
@property(retain, nonatomic) NSData *imageData;
- (void)_abPersonChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *groups;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIMPerson:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueID;
- (BOOL)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (void)save;
@property(readonly, nonatomic) NSArray *mobileNumbers;
@property(readonly, nonatomic) NSArray *phoneNumbers;
- (id)allHandlesForProperty:(id)arg1;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (id)valuesForProperty:(id)arg1;
- (id)_valuesAndLabelsForProperty:(id)arg1;
- (id)valuesForIMProperty:(id)arg1;
@property(readonly, nonatomic) BOOL isInAddressBook;
@property(copy, nonatomic) NSArray *emails;
@property(readonly, nonatomic) NSArray *allEmails;
- (id)emailHandlesForService:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(BOOL)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *nickname;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *companyName;
@property(readonly, nonatomic) BOOL isCompany;
- (void)dealloc;
- (void)finalize;
- (oneway void)release;
@property(readonly, nonatomic) void *_recordRef;
@property(readonly, nonatomic) int recordID;
- (id)initWithABRecordID:(int)arg1;
- (id)init;

@end

