/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKitServices/GKOOBMessage.h>

@class NSMutableData;

@interface GKVoiceChatSessionMessage : GKOOBMessage
{
    NSMutableData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (id)init;
- (id)initWithBytes:(void *)arg1 length:(unsigned long)arg2;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (void)dealloc;
- (id)data;
- (id)payload;
- (unsigned int)subtype;
- (BOOL)_checkType:(unsigned short)arg1;
- (BOOL)_checkSize:(unsigned long)arg1;
- (unsigned int)conferenceID;

@end

