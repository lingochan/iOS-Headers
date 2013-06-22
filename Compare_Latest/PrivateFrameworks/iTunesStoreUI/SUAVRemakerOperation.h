/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISOperation.h"

@class AVRemaker, SUAVRemakerOutput;

@interface SUAVRemakerOperation : ISOperation
{
    AVRemaker *_remaker;
    SUAVRemakerOutput *_remakerOutput;
}

- (id)_newDestinationURLForSourceURL:(id)arg1;
- (void)_endObservingAVRemaker;
- (void)_beginObservingAVRemaker:(id)arg1;
- (void)_updateProgress:(id)arg1;
- (void)_remakerNotification:(id)arg1;
- (BOOL)stopRunLoop;
- (void)run;
- (void)cancel;
@property(readonly) SUAVRemakerOutput *remakerOutput;
- (void)dealloc;
- (id)initWithImagePickerInfo:(id)arg1 remakerMode:(id)arg2;
- (id)initWithSourceURL:(id)arg1 remakerMode:(id)arg2 options:(id)arg3;
- (id)init;

@end
