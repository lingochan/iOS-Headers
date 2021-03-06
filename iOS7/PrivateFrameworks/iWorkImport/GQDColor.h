/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

// Not exported
@interface GQDColor : NSObject <GQDNameMappable>
{
    double mRed;
    double mGreen;
    double mBlue;
    double mAlpha;
}

+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)blackColor;
+ (const struct StateSpec *)stateForReading;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)alphaComponent;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)description;
- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

