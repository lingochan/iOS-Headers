/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDTCell.h>

@interface GQDTGroupingCell : GQDTCell
{
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    BOOL mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle *mProcessorBundle;
    BOOL mHasValidFormulaValue;
    struct __CFString *mFormulaValue;
}

+ (struct __CFString *)displayTypeString:(int)arg1;
- (void)dealloc;
- (unsigned short)level;
- (unsigned short)rowIdx;
- (unsigned short)rowCount;
- (BOOL)isCollapsed;
- (id)value;
- (struct __CFString *)createFormattedValue;
- (BOOL)hasFormulaValue;

@end

