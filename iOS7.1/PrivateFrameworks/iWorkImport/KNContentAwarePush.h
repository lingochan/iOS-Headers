//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNContentAwareFrameAnimator.h"
#import "KNContentAwareTransitionAnimator.h"

@class KNMotionBlurAnimationPluginWrapper;

__attribute__((visibility("hidden")))
@interface KNContentAwarePush : KNAnimationEffect <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (BOOL)requiresPerspectiveTransform;
+ (BOOL)requiresMagicMoveTextures;
+ (BOOL)requiresBullets;
+ (BOOL)isCharacterAwareEffect;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;

@end

