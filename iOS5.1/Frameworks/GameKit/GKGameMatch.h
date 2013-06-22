/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGame, GKRecentMatchInternal, NSDate, NSString;

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal *_internal;
    GKGame *_game;
}

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKRecentMatchInternal *internal; // @synthesize internal=_internal;
- (void)dealloc;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;

@end

