/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SUScriptCanvasResult : NSObject
{
    struct CGImage *_image;
    struct CGPath *_path;
}

@property(readonly, nonatomic) struct CGPath *canvasPath; // @synthesize canvasPath=_path;
@property(readonly, nonatomic) struct CGImage *canvasImage; // @synthesize canvasImage=_image;
- (void)dealloc;
- (id)_initWithCanvas:(id)arg1;

@end

