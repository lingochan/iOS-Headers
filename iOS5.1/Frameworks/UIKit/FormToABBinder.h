/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface FormToABBinder : NSObject
{
    NSDictionary *_abPointers;
    NSArray *_fieldLabels;
    NSDictionary *_synonyms;
}

+ (id)synonymsForMatch:(id)arg1;
+ (id)abPointerForControl:(id)arg1 rep:(id)arg2 useFieldName:(BOOL)arg3;
+ (void)clearBinders;
+ (void)loadBinders;
- (id)synonymsForMatch:(id)arg1;
- (id)abPointerForControl:(id)arg1 rep:(id)arg2 useFieldName:(BOOL)arg3 foundByPageScan:(char *)arg4;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_indexMapping:(id)arg1;

@end

