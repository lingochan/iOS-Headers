/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface MSShare : NSObject <NSCoding>
{
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_UUID;
    int _sharingOurStream;
    int _sharingTheirStream;
}

+ (id)share;
@property(nonatomic) int sharingTheirStream; // @synthesize sharingTheirStream=_sharingTheirStream;
@property(nonatomic) int sharingOurStream; // @synthesize sharingOurStream=_sharingOurStream;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (void)dealloc;
@property(retain, nonatomic) NSString *fullName;
@property(nonatomic) int sharingTheirPhotostream;
@property(nonatomic) int sharingOurPhotostream;

@end

