//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationInfo : NSObject
{
    Class mAnimationClass;
    NSSet *mValidAnimationTypes;
}

+ (id)localizedEffectNamesForAnimationInfos:(id)arg1 animationType:(int)arg2;
+ (id)effectIdentifiersForAnimationInfos:(id)arg1;
@property(readonly, nonatomic) NSSet *validAnimationTypes; // @synthesize validAnimationTypes=mValidAnimationTypes;
@property(readonly, nonatomic) Class animationClass; // @synthesize animationClass=mAnimationClass;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)thumbnailImageNameForType:(int)arg1;
- (BOOL)isType:(int)arg1;
- (id)localizedNameForType:(int)arg1;
@property(readonly, nonatomic) NSString *localizedTransitionName;
@property(readonly, nonatomic) NSString *localizedActionBuildName;
@property(readonly, nonatomic) NSString *localizedBuildOutName;
@property(readonly, nonatomic) NSString *localizedBuildInName;
@property(readonly, nonatomic) NSDictionary *customAttributeDefaults;
@property(readonly, nonatomic) NSArray *customAttributes;
- (id)customAttributesForAttributeKey:(id)arg1;
@property(readonly, nonatomic) unsigned int directionType;
@property(readonly, nonatomic) int category;
@property(readonly, nonatomic) NSString *animationFilter;
@property(readonly, nonatomic) NSDictionary *defaultAttributes;
@property(readonly, nonatomic) BOOL isDrift;
@property(readonly, nonatomic) NSString *effectIdentifier;
- (void)dealloc;
- (id)initWithAnimationClass:(Class)arg1;

@end
