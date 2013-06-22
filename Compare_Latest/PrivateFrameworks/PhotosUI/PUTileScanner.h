/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PUTileScanner : NSObject
{
    int _tileCount;
    id _tileSizeBlock;
    id _hasCaptionBlock;
    int _scanLocation;
}

@property(nonatomic) int scanLocation; // @synthesize scanLocation=_scanLocation;
@property(copy, nonatomic) id hasCaptionBlock; // @synthesize hasCaptionBlock=_hasCaptionBlock;
@property(copy, nonatomic) id tileSizeBlock; // @synthesize tileSizeBlock=_tileSizeBlock;
@property(nonatomic) int tileCount; // @synthesize tileCount=_tileCount;
- (void).cxx_destruct;
- (BOOL)scanTileMatchingPortrait:(id)arg1 panorama:(id)arg2 hasCaption:(id)arg3 aspectRatio:(float *)arg4;
- (BOOL)isAtEnd;
- (BOOL)scanNumber:(int)arg1 ofTilesMatchingPortrait:(id)arg2 panorama:(id)arg3 hasCaption:(id)arg4 aspectRatios:(float *)arg5;
- (BOOL)scanUpToNumber:(int)arg1 ofTilesMatchingPortrait:(id)arg2 panorama:(id)arg3 hasCaption:(id)arg4 count:(int *)arg5 aspectRatios:(float *)arg6;

@end
