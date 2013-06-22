/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQPProcessor.h>

@interface GQPLSProcessor : GQPProcessor
{
    Class mGenerator;
}

- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7;
- (void)pushInitialState;
- (BOOL)go;
- (Class)generator;

@end

