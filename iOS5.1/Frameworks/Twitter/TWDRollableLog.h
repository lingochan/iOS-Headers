/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSFileHandle, NSString;

@interface TWDRollableLog : NSObject
{
    NSDate *_lastStatDate;
    NSString *_baseFilename;
    NSString *_generationalFilenameFormat;
    NSFileHandle *_fh;
    struct dispatch_source_s *_fdWatcher;
    struct dispatch_queue_s *_logQueue;
    struct dispatch_queue_s *_logRequestQueue;
}

+ (id)loggerWithFilename:(id)arg1;
+ (id)allLogFilesForFilename:(id)arg1;
+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (void)enableLogRolling;
@property(retain) NSDate *lastStatDate; // @synthesize lastStatDate=_lastStatDate;
@property(retain) NSFileHandle *fh; // @synthesize fh=_fh;
- (id)compressFile:(id)arg1;
- (void)slurpDataFromFile:(id)arg1;
- (void)logString:(id)arg1;
- (void)logData:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)_rollLogs;
- (void)_loadUpHandle;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)arg1;
- (id)_fullFilePathWithGenerationNumber:(int)arg1;
- (id)_filenameWithGenerationNumber:(int)arg1;

@end

