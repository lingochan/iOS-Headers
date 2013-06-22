/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject
{
    struct CPPDFImage *imageData;
    BOOL renderedBoundsComputed;
}

- (id)initWithBounds:(struct CGRect)arg1;
- (struct CPPDFImage *)imageData;
- (struct CGRect)renderedBounds;
- (struct CGRect)bounds;
- (void)recomputeRenderedBounds;
- (void)accept:(id)arg1;
- (long)zOrder;
- (BOOL)isVisible;

@end

