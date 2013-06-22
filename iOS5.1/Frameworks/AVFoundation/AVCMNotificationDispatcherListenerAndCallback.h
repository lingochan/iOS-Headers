/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject
{
    AVWeakReference *_weakReferenceToListener;
    void *_callback;
}

@property(readonly, nonatomic) void *callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id listener;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(void *)arg2;

@end

