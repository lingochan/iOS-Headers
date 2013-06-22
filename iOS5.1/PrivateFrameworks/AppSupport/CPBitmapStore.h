/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSString;

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_findStmt;
    struct sqlite3_stmt *_saveStmt;
    struct sqlite3_stmt *_beginStmt;
    struct sqlite3_stmt *_commitStmt;
    BOOL _dbIsReadOnly;
    BOOL _dbIsMissing;
    struct __CFRunLoopObserver *_txnObserver;
    NSCache *_cache;
    int _version;
}

- (id)initWithPath:(id)arg1 version:(int)arg2;
- (void)dealloc;
- (struct CGImage *)copyImageForKey:(id)arg1;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage *)arg4;
- (id)allGroups;
- (void)removeImagesInGroups:(id)arg1;
- (BOOL)findImageWithKey:(id)arg1 andInfo:(struct _img *)arg2;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (struct sqlite3_stmt *)findStmt;
- (struct sqlite3_stmt *)saveStmt;
- (struct sqlite3_stmt *)beginStmt;
- (struct sqlite3_stmt *)commitStmt;
- (struct sqlite3 *)db;
- (void)createDbAt:(const char *)arg1;
- (void)beginAutoTxn;
- (void)commitTxn;
- (id)imagePath;
- (id)dbPath;
- (int)imageCount;
- (void)purge;
@property(readonly, nonatomic) int version;
- (int)setVersion:(int)arg1;

@end

