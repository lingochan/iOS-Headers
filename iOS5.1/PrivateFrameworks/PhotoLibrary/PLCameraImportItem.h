/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSError, NSMutableDictionary, NSString, PLManagedAsset, UIImage;

@interface PLCameraImportItem : NSObject
{
    NSString *_identifier;
    NSString *_parentFolder;
    NSString *_basePath;
    NSMutableDictionary *_representationsMapping;
    UIImage *_thumbnail;
    NSData *_thumbnailData;
    int _thumbnailState;
    BOOL _metadataRequested;
    BOOL _thumbnailRequested;
    BOOL _shouldImport;
    NSError *_importError;
    NSString *eventName;
    PLManagedAsset *importedAsset;
}

@property(retain, nonatomic) PLManagedAsset *importedAsset; // @synthesize importedAsset;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(retain, nonatomic) NSError *importError; // @synthesize importError=_importError;
@property(nonatomic) BOOL shouldImport; // @synthesize shouldImport=_shouldImport;
@property(retain, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) NSString *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)otherExtensions;
- (id)audioExtension;
- (id)movieExtension;
- (id)rawExtension;
- (id)jpgExtension;
- (id)_fileExtensionForTypeWithSelector:(SEL)arg1;
- (id)fileExtensions;
- (BOOL)isStandaloneMovie;
- (BOOL)isStandalonePhoto;
- (BOOL)isAudio;
- (BOOL)isMovie;
- (BOOL)isRaw;
- (BOOL)isJPEG;
- (BOOL)_isTypeWithSelector:(SEL)arg1;
- (unsigned long long)fileSize;
- (id)creationDate;
- (void)markRepresentationsInDatabase;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (BOOL)isOnDisk;
- (BOOL)isLocked;
- (void)setThumbnailWithImageRef:(struct CGImage *)arg1;
- (void)clearThumbnail;
- (void)cancelThumbnailRequest;
- (BOOL)canRequestThumbnail;
- (void)requestThumbnail;
- (void)setThumbnailState:(int)arg1;
- (int)thumbnailState;
- (void)clearMetadata;
- (BOOL)hasAllMetadata;
- (id)metadataForRepresentationWithFileExtension:(id)arg1;
- (BOOL)canRequestMetadata;
- (void)requestMetadata;
- (id)representationForCameraFile:(id)arg1;
- (void)removeRepresentationForCameraFile:(id)arg1;
- (void)_removeRepresentation:(id)arg1;
- (void)addRepresentationForCameraFile:(id)arg1;
- (void)_addRepresentation:(id)arg1;
- (id)representations;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2;

@end

