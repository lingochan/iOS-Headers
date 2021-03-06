/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUSessionInfo.h>

@class NSString;

@interface PUPhotosPickerSessionInfo : PUSessionInfo
{
    NSString *__targetAlbumName;
}

@property(copy, nonatomic, setter=_setTargetAlbumName:) NSString *_targetAlbumName; // @synthesize _targetAlbumName=__targetAlbumName;
- (void).cxx_destruct;
- (id)localizedPrompt;
- (_Bool)isSelectingAssets;
- (id)_initWithTargetAlbum:(struct NSObject *)arg1 orTargetAlbumName:(id)arg2 isLocal:(_Bool)arg3;
- (id)initWithTargetAlbumName:(id)arg1 isLocal:(_Bool)arg2;
- (id)initWithTargetAlbum:(struct NSObject *)arg1;

@end

