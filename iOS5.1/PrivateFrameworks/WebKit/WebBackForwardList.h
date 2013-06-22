/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject
{
    WebBackForwardListPrivate *_private;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)_close;
- (void)addItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setToMatchDictionaryRepresentation:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (void)goBack;
- (void)goForward;
- (void)goToItem:(id)arg1;
- (id)backItem;
- (id)currentItem;
- (id)forwardItem;
- (id)backListWithLimit:(int)arg1;
- (id)forwardListWithLimit:(int)arg1;
- (int)capacity;
- (void)setCapacity:(int)arg1;
- (id)description;
- (void)setPageCacheSize:(unsigned int)arg1;
- (unsigned int)pageCacheSize;
- (int)backListCount;
- (int)forwardListCount;
- (id)itemAtIndex:(int)arg1;

@end

