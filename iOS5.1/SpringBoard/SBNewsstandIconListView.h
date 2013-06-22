/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBFolderIconListView.h"

@class NSMutableArray;

@interface SBNewsstandIconListView : SBFolderIconListView
{
    unsigned int _firstVisibleRow;
    unsigned int _lastVisibleRow;
    unsigned int _preRotationFirstVisibleRow;
    unsigned int _postRotationFirstVisibleRow;
    unsigned int _rotationPlacementRow;
    NSMutableArray *_visibleIcons;
    BOOL _compactingIcons;
}

+ (unsigned int)maxIcons;
+ (unsigned int)iconRowsForInterfaceOrientation:(int)arg1;
+ (unsigned int)iconColumnsForInterfaceOrientation:(int)arg1;
+ (unsigned int)maxVisibleIconRowsInterfaceOrientation:(int)arg1;
- (Class)iconRotationContainerClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (unsigned int)iconRowsForCurrentOrientation;
- (float)topIconInset;
- (float)bottomIconInset;
- (float)sideIconInset;
- (float)verticalIconPadding;
- (struct CGSize)defaultIconSize;
- (struct CATransform3D)_transformForIconAtIndex:(unsigned int)arg1 inOrientation:(int)arg2;
- (void)cleanupAfterRotation;
- (id)visibleIcons;
- (unsigned int)_preRotationFirstVisibleRow;
- (unsigned int)_postRotationFirstVisibleRow;
- (unsigned int)_rotationReferenceRow;
- (void)setFirstRowToStartRotation:(unsigned int)arg1 endRotation:(unsigned int)arg2 moveIconsRelativeToRow:(unsigned int)arg3;
- (void)_updateVisibleIconsFromRow:(unsigned int)arg1 toRow:(unsigned int)arg2 includeIcon:(id)arg3 layoutIfNeeded:(BOOL)arg4;
- (BOOL)compactIcons:(BOOL)arg1;
- (void)_noteNewIconInModel:(id)arg1;
- (void)showIconImagesFromRow:(unsigned int)arg1 toRow:(unsigned int)arg2;

@end

