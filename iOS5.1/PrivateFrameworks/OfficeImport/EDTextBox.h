/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDAlignmentInfo, EDProtection, EDString;

@interface EDTextBox : NSObject
{
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;
- (void)dealloc;
- (id)text;
- (void)setText:(id)arg1;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;

@end

