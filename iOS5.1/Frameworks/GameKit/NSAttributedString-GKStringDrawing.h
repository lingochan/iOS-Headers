/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSAttributedString.h"

@interface NSAttributedString (GKStringDrawing)
+ (struct __CTParagraphStyle *)_gkCTParagraphStyleWithLineBreakMode:(unsigned char)arg1;
+ (struct __CTParagraphStyle *)_gkCTParagraphStyleWithLineBreakMode:(unsigned char)arg1 textAlignment:(unsigned char)arg2 lineHeight:(float)arg3 leading:(float)arg4;
- (struct CGSize)_gkSizeWithMinFontSize:(float)arg1 actualFontSize:(float *)arg2 forWidth:(float)arg3;
- (void)_gkDrawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)_gkDrawAdjustingFontSizeInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (struct CGSize)_gkSizeWithConstraints:(struct CGSize)arg1;
- (struct CGSize)_gkSize;
- (id)_gkInstantiateCoreTextRenderer;
- (void)_gkSetRenderer:(id)arg1;
- (id)_gkRenderer;
@end

