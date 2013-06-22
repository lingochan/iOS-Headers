/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MFLabelledAtomListDelegate-Protocol.h"

@class CKLabelledAtomList, NSArray, UIButton, UILabel;

@interface CKAtomListView : UIView <MFLabelledAtomListDelegate>
{
    NSArray *_addresses;
    NSArray *_arePhoneNumbers;
    CKLabelledAtomList *_atomList;
    UILabel *_recipientListLabel;
    UIButton *_detailsButton;
    UIButton *_hideDetailsButton;
    id _delegate;
    unsigned int _expanded:1;
    int _style;
}

- (id)initWithLabel:(id)arg1 totalWidth:(float)arg2 addresses:(id)arg3 arePhoneNumbers:(id)arg4 style:(int)arg5;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateInactiveModeText;
- (void)_updateAlphasAnimating:(BOOL)arg1;
- (void)_updateHeight;
- (id)_newButtonWithTitle:(id)arg1;
- (void)_buttonTouchUpEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isExpanded;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (struct CGSize)contentSize;
- (void)displayStringsDidChangeForLabelledAtomList:(id)arg1;

@end

