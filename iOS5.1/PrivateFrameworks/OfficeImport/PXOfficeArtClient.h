/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OAXClient.h>

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient
{
    PXPresentationState *mPresentationState;
}

- (id)initWithState:(id)arg1;
- (id)presentationState;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (id)readClientTextField:(struct _xmlNode *)arg1 paragraph:(id)arg2 state:(id)arg3;
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;

@end

