/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PXTransition : NSObject
{
}

+ (void)readTransitionFromNode:(struct _xmlNode *)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3;
+ (void)initialize;
+ (int)readInOut:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readOrientation:(struct _xmlNode *)arg1 attribute:(const char *)arg2 defaultValue:(int)arg3;
+ (int)readReverseDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;

@end

