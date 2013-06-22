/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList;

@interface MKRouteLoader : NSObject
{
    GEOTileKeyList *_tilePaths;
    int _state;
    unsigned short _provider;
}

+ (unsigned int)maxTilesToPreload;
- (void)_reachabilityChanged:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)_resetLoading;
- (void)dealloc;
- (id)initWithTiles:(id)arg1;

@end

