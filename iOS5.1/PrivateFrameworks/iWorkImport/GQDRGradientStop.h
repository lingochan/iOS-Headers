/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDColor;

@interface GQDRGradientStop : NSObject
{
    float mFraction;
    GQDColor *mColor;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (float)fraction;
- (id)color;

@end

