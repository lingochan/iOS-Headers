/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WDABoundingBox : NSObject
{
    struct CGRect mRect;
    float mRotation;
    BOOL mFlipX;
    BOOL mFlipY;
}

- (id)initWithRect:(struct CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (struct CGRect)rect;
- (void)setRect:(struct CGRect)arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (BOOL)flipX;
- (void)setFlipX:(BOOL)arg1;
- (BOOL)flipY;
- (void)setFlipY:(BOOL)arg1;

@end

