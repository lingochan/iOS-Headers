//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTConditionalStyleSet;

__attribute__((visibility("hidden")))
@interface TSTTableDataConditionalStyleSet : TSTTableDataObject
{
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initObjectWithConditionalStyleSet:(id)arg1;

@end

