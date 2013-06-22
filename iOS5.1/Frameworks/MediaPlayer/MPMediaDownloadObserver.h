/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPMediaDownloadObserver : NSObject
{
    id _progressHandler;
    struct dispatch_queue_s *_queue;
    BOOL _hasPendingProgressHandlerExecution;
    BOOL _invalidated;
    int _retainCount;
}

+ (id)sharedITunesStoreDownloadManager;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)newObserverForDownloadIdentifier:(id)arg1 downloadStatus:(int)arg2 itemPersistentID:(long long)arg3;
+ (id)newObserverForDownloadIdentifier:(id)arg1 downloadPersistentID:(long long)arg2;
- (void)invalidate;
- (void)_onQueue_invalidate;
@property(copy) id progressHandler;
@property(readonly, getter=isRestoreDownload) BOOL restoreDownload;
- (void)cancelDownload;
@property(readonly) BOOL canCancel;
@property(readonly, getter=isCurrentlyPlayable) BOOL currentlyPlayable;
@property(readonly) double downloadProgress;
- (void)_onQueue_setShouldFireProgressHandler;
- (void)dealloc;
- (id)init;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end

