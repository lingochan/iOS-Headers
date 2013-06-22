/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaItem.h>

@class MPMediaLibrary, NSArray, NSNumber;

@interface MPConcreteMediaItem : MPMediaItem
{
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    NSArray *_chapters;
    NSNumber *_mediaType;
}

- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)clearBookmarkTime;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(char *)arg2;
- (double)nominalHasBeenPlayedThreshold;
- (void)markNominalAmountHasBeenPlayed;
- (void)reallyIncrementPlayCount;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)_nonBatchableValueForProperty:(id)arg1 isBatchable:(char *)arg2;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (BOOL)existsInLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPersistentID:(unsigned long long)arg1 valuesForProperties:(id)arg2 library:(id)arg3;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)init;

@end

