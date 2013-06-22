/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKTextViewWithLabelTextMetrics, UILabel;

@interface EKEventDetailTitleCell : EKEventDetailCell
{
    UILabel *_titleView;
    EKTextViewWithLabelTextMetrics *_locationView;
    UILabel *_dateView;
    UILabel *_timeView;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
}

- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (id)_statusView;
- (id)_recurrenceView;
- (id)_timeView;
- (id)_dateView;
- (id)_locationView;
- (id)_titleView;
- (BOOL)update;
- (void)setStatusString:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setTimeString:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end

