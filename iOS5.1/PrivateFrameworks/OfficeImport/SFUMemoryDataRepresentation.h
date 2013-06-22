/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation
{
    NSData *mData;
}

- (id)initWithData:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (void)dealloc;
- (id)data;
- (BOOL)isReadable;
- (long long)dataLength;
- (id)inputStream;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (BOOL)hasSameLocationAs:(id)arg1;
- (unsigned long)readIntoData:(id)arg1;

@end

