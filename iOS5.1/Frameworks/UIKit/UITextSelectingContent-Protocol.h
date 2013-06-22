/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class UIResponder<UITextInput>;

@protocol UITextSelectingContent
@property(readonly, nonatomic) UIResponder<UITextInput> *asText;
- (struct CGRect)visibleBounds;
- (void)setBaseWritingDirection:(int)arg1;
- (void)toggleBaseWritingDirection;
- (int)selectionBaseWritingDirection;
- (id)textInDOMRange:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)selectAll;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (id)selectedDOMRange;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (BOOL)hasMarkedText;
@end

