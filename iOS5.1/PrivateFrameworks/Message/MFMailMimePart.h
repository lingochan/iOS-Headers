/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MimePart.h"

@interface MFMailMimePart : MimePart
{
}

+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (Class)attachmentClass;
- (id)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2;
- (id)htmlContent;
- (id)decodeTextPlain;
- (id)decodeTextCalendar;
- (id)decodeMultipartAppledouble;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (void)configureFileWrapper:(id)arg1;
- (void)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (BOOL)_shouldContinueDecodingProcess;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(char *)arg5;

@end

