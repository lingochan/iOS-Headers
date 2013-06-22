/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject
{
    NSMutableArray *_selectionNodes;
}

- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3;
- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;
- (void)dealloc;
- (id)init;

@end

