/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface DAFolderChange : NSObject <NSCoding>
{
    int _changeType;
    NSString *_folderId;
    NSString *_parentFolderId;
    NSString *_displayName;
    int _dataclass;
    BOOL _renameOnCollision;
    unsigned int _taskId;
    id <DAFolderChangeConsumer> _consumer;
}

@property BOOL renameOnCollision; // @synthesize renameOnCollision=_renameOnCollision;
@property unsigned int taskId; // @synthesize taskId=_taskId;
@property id <DAFolderChangeConsumer> consumer; // @synthesize consumer=_consumer;
@property(readonly) int dataclass; // @synthesize dataclass=_dataclass;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *parentFolderId; // @synthesize parentFolderId=_parentFolderId;
@property(readonly) NSString *folderId; // @synthesize folderId=_folderId;
@property(readonly) int changeType; // @synthesize changeType=_changeType;
- (void)setDisplayName:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initFolderChangeWithChangeType:(int)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(int)arg5 consumer:(id)arg6;

@end

