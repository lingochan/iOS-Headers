//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLBBBulletin : NSObject
{
    long long _bulletinType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    BOOL _mainAssetIsMine;
    BOOL _mainAssetIsVideo;
    BOOL _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    int _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    int _commentCount;
    BOOL _commentIsCaption;
    BOOL _suppressAlert;
    NSMutableSet *_senderNames;
    BOOL _forMultipleAsset;
    BOOL _allMultipleAssetIsMine;
    BOOL _isMixedType;
    unsigned int _recordID;
    unsigned int _replacedBulletinRecordID;
    unsigned int _originalRecordID;
    NSString *_albumUUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
}

@property BOOL suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly) NSString *mainAssetUUID; // @synthesize mainAssetUUID=_mainAssetUUID;
@property(readonly) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property unsigned int originalRecordID; // @synthesize originalRecordID=_originalRecordID;
@property unsigned int replacedBulletinRecordID; // @synthesize replacedBulletinRecordID=_replacedBulletinRecordID;
@property unsigned int recordID; // @synthesize recordID=_recordID;
@property(readonly) long long bulletinType; // @synthesize bulletinType=_bulletinType;
- (id)_localizedCountFormatter;
- (BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (BOOL)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)description;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *suppressionContexts;
@property(readonly) BOOL hasThumbnail;
@property(readonly) NSString *destinationURLString;
@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) double completionPercentage;
@property(readonly) BOOL thumbnailAssetIsPlaceholder;
@property(readonly) BOOL allAssetsAreFullResolution;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (id)bulletinByMergingWithBulletin:(id)arg1;
@property(readonly) BOOL canMergeWithPersistedBulletins;
- (void)dealloc;
- (id)_initWithLikesCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 senderNames:(id)arg13 forMultipleAsset:(BOOL)arg14 allMultipleAssetIsMine:(BOOL)arg15 isMixedType:(BOOL)arg16;
- (id)_initWithCommentsCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithCommentAdded:(id)arg1;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned int)arg2 toAlbum:(id)arg3;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)_initWithType:(long long)arg1;
- (id)init;

@end
