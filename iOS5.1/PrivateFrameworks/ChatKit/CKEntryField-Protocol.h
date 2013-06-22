/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CKEntryField
- (void)setEntryFieldDelegate:(id)arg1;
- (id)entryFieldDelegate;
- (void)clearMessage;
- (BOOL)hasContent;
- (id)attachments;
- (void)setMessageComposition:(id)arg1;
- (id)messageComposition;
- (id)messageCompositionIfTextOnly;
- (void)setMessageParts:(id)arg1;
- (id)messageParts;
- (void)insertMessagePart:(id)arg1;
- (struct CGPoint)contentOffset;
- (struct UIEdgeInsets)contentInset;
- (void)moveCursorToEnd;
- (void)setCursorPosition:(int)arg1;
- (void)reflowContent;
- (void)reflowContentWithAnimation:(BOOL)arg1;
- (int)cursorPosition;
- (int)lastCursorPosition;
- (void)saveCursorPosition;
- (void)restoreCursorPosition;
- (void)makeActive;
- (BOOL)isActive;
- (void)disableEditing;
- (void)setIgnoreAnimations:(BOOL)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setContentHidden:(BOOL)arg1 subjectHidden:(BOOL)arg2;
- (void)loadSubviews;
- (void)updateFontSize;
- (id)activeView;
- (void)setDefaultText:(id)arg1;
@property(nonatomic) int outgoingBubbleColor;
@end

