/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSCoder.h>

@interface NSPortCoder : NSCoder
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)portCoderWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (void)dispatch;
- (id)decodePortObject;
- (void)encodePortObject:(id)arg1;
- (id)_connection;
- (id)connection;
- (BOOL)isByref;
- (BOOL)isBycopy;

@end

