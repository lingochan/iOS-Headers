/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMProperty.h>

@class NSColorStub;

@interface CMColorProperty : CMProperty
{
    NSColorStub *wdValue;
}

+ (struct CGColor *)createCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (struct CGColor *)createCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)nsColorFromShading:(id)arg1;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)cssStringFromNSColorStub:(id)arg1;
+ (id)cssStringFromOADColor:(id)arg1;
+ (float)transformedAlphaFromOADColor:(id)arg1;
- (id)value;
- (id)initWithColor:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;

@end

