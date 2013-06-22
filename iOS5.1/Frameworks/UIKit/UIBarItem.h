/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAppearance-Protocol.h"

@class NSString, UIImage;

@interface UIBarItem : NSObject <UIAppearance>
{
    BOOL _hasCustomizableInstanceAppearanceModifications;
}

+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearance;
+ (id)_appearanceProxyViewClasses;
@property(nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications; // @synthesize _hasCustomizableInstanceAppearanceModifications;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;

// Remaining properties
@property(nonatomic, getter=isEnabled) BOOL enabled; // @dynamic enabled;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @dynamic imageInsets;
@property(retain, nonatomic) UIImage *landscapeImagePhone; // @dynamic landscapeImagePhone;
@property(nonatomic) struct UIEdgeInsets landscapeImagePhoneInsets; // @dynamic landscapeImagePhoneInsets;
@property(nonatomic) int tag; // @dynamic tag;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

