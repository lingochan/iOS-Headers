/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface UIClippedImageView : UIView
{
    UIImageView *m_imageView;
    struct CGRect m_originalFrame;
    struct CGRect m_baseFrame;
}

- (void)setOriginAdjustingImage:(struct CGPoint)arg1;
- (void)setImageOrigin:(struct CGPoint)arg1;
- (struct CGRect)baseFrame;
- (void)setBaseFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

