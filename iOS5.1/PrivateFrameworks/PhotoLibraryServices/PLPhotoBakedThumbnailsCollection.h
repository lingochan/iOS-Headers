/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableDictionary;

@interface PLPhotoBakedThumbnailsCollection : NSObject
{
    NSData *_data;
    NSMutableDictionary *_bakedThumbnails;
}

+ (void)setTesting:(BOOL)arg1;
- (void)saveToFile:(id)arg1;
- (void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2;
- (id)bakedThumbnailsForFormat:(int)arg1;
- (id)availableFormats;
- (void)_parseDataWithContentsOfFile:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end

