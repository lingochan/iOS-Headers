/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MFMimePart.h>

@interface MFMimePart (DecodingSupport)
- (void)decodeIfNecessary;
- (id)bodyData;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(_Bool)arg1;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4;
- (_Bool)hasContents;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (void)_contents:(id *)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long *)arg3 downloadIfNecessary:(_Bool)arg4 asHTML:(_Bool)arg5 isComplete:(_Bool *)arg6;
- (id)decodeText;
- (id)_fullMimeTypeEvenInsideAppleDouble;
@end

