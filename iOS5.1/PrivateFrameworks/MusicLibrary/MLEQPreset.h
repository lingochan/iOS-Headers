/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MLEQPreset : NSObject
{
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForBuiltInPresetType:(int)arg1;
+ (id)eqPresetForName:(id)arg1;
- (int)typeForAVController;
- (int)builtInPresetType;
- (id)localizedName;
- (id)name;
- (void)dealloc;
- (id)initWithBuiltInPresetType:(int)arg1;

@end

