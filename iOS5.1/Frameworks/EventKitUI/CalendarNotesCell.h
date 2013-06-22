/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UILabel, UITextView;

@interface CalendarNotesCell : UITableViewCell
{
    UITextView *_textView;
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

@property(copy, nonatomic) NSString *text;
- (void)textChanged:(id)arg1;
- (BOOL)becomeFirstResponder;
@property(readonly, nonatomic) UITextView *textView;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *placeholder;
- (void)_updatePlaceholder;
- (id)_placeholderLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

