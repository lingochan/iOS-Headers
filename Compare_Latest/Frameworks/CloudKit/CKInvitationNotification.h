//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKInvitationNotification : CKNotification <NSSecureCoding>
{
    int _invitationNotificationReason;
    NSString *_invitationID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *invitationID; // @synthesize invitationID=_invitationID;
@property(nonatomic) int invitationNotificationReason; // @synthesize invitationNotificationReason=_invitationNotificationReason;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end
