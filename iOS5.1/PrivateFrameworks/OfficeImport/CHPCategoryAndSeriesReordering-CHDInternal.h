/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHPCategoryAndSeriesReordering.h>

@interface CHPCategoryAndSeriesReordering (CHDInternal)
- (_Bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(_Bool)arg2;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(_Bool)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned int)arg2;
- (void)reorderData:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(_Bool)arg3;
- (void)reorderDataValues:(id)arg1 dataPointCount:(unsigned int)arg2;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(_Bool)arg3;
@end

