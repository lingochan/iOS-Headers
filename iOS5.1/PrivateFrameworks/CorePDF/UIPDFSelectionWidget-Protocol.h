/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class UIPDFPageView;

@protocol UIPDFSelectionWidget
- (void)setSelection:(id)arg1;
- (void)remove;
- (void)hide;
- (BOOL)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(char *)arg3;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (struct CGPoint)viewOffset;
- (void)layout;
- (void)track:(struct CGPoint)arg1;
- (void)endTracking;
- (struct CGRect)selectionRectangle;
- (void)setSelectedGrabber:(unsigned int)arg1;
@property(nonatomic) UIPDFPageView *pageView;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;
@end

