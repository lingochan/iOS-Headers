/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "GKTableViewCellContents-Protocol.h"

@class GKUITheme, UIImage;

@interface GKImageCellContents : UIView <GKTableViewCellContents>
{
    GKUITheme *_theme;
    UIImage *_image;
    struct UIEdgeInsets _imageInsets;
    struct CGSize _imageSize;
    id _representedObject;
}

@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (void)dealloc;

// Remaining properties
@property(nonatomic) struct CGRect confirmationButtonRect;

@end

