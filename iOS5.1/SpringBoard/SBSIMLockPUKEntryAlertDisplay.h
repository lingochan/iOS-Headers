/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSIMLockEntryAlertDisplay.h"

@class NSString;

@interface SBSIMLockPUKEntryAlertDisplay : SBSIMLockEntryAlertDisplay
{
    int _state;
    NSString *_enteredPUKCode;
    NSString *_newPIN;
}

- (void)dealloc;
- (id)_pukAttemptsRemainingLabel;
- (void)setupSuccess;
- (id)titleText;
- (void)setupFailureState;
- (id)label;
- (void)_attemptPUKUnlock;
- (void)unlock;

@end

