/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableSet, SSDownloadManagerOptions, SSXPCConnection;

@interface SSDownloadManager : NSObject
{
    struct dispatch_queue_s *_accessQueue;
    NSArray *_activeDownloads;
    BOOL _activeDownloadsChanged;
    struct dispatch_queue_s *_backgroundQueue;
    SSXPCConnection *_connection;
    NSArray *_downloads;
    BOOL _downloadsChanged;
    BOOL _isUsingNetwork;
    SSXPCConnection *_observerConnection;
    struct dispatch_queue_s *_observerQueue;
    struct __CFArray *_observers;
    SSDownloadManagerOptions *_options;
    NSMutableSet *_removedDownloads;
}

+ (void)_sendGlobalHandler:(id)arg1;
+ (void)_triggerDownloads;
+ (id)softwareDownloadKinds;
+ (void)retryAllRestoreDownloads;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1;
+ (id)IPodDownloadKinds;
+ (id)EBookDownloadKinds;
+ (id)softwareDownloadManager;
+ (id)IPodDownloadManager;
+ (id)EBookDownloadManager;
+ (void)setDownloadHandler:(id)arg1;
+ (void)removePersistenceIdentifier:(id)arg1;
- (void)_sendObserverConnection;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)_sendMessage:(void *)arg1 withCompletionBlock:(id)arg2;
- (void *)_newOptionsDictionary;
- (void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id)arg4;
- (void)_loadDownloadKindsUsingNetwork;
- (void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id)arg4;
- (void)_handleReply:(void *)arg1 forDownloads:(id)arg2 message:(void *)arg3 isRetry:(BOOL)arg4 block:(id)arg5;
- (void)_handleMessage:(void *)arg1 fromServerConnection:(struct _xpc_connection_s *)arg2;
- (void)_handleDownloadStatesChanged:(void *)arg1;
- (void)_handleDownloadsRemoved:(void *)arg1;
- (void)_handleDownloadsChanged:(void *)arg1;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(void *)arg2;
- (id)_copyDownloads;
- (id)_copyDownloadKindsUsingNetwork;
- (void)_connectAsObserver;
- (id)_XPCConnection;
- (void)_willFinishDownloads:(id)arg1;
- (void)_finishDownloads:(id)arg1;
- (void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(id)arg3;
- (void)reloadFromServer;
- (void)setDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)resumeDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)pauseDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id)arg3;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(id)arg3;
@property(readonly) SSDownloadManagerOptions *managerOptions;
@property(readonly, getter=isUsingNetwork) BOOL usingNetwork;
- (void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id)arg3;
- (void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(id)arg3;
- (void)getDownloadsUsingBlock:(id)arg1;
- (void)finishDownloads:(id)arg1;
@property(readonly) NSArray *downloads;
- (void)cancelDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)cancelAllDownloadsWithCompletionBlock:(id)arg1;
- (BOOL)canCancelDownload:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addDownloads:(id)arg1 completionBlock:(id)arg2;
@property(readonly) NSArray *activeDownloads;
- (void)dealloc;
- (id)initWithManagerOptions:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (id)_initSSDownloadManager;

@end

