/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKInternalRepresentation
{
    NSString *_playerID;
    NSDate *_date;
    NSString *_message;
    NSString *_email;
}

+ (id)codedPropertyKeys;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (void)dealloc;

@end

