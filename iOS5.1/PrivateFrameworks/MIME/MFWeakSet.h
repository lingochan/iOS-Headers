/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableSet.h"

@class NSLock;

@interface MFWeakSet : NSMutableSet
{
    NSLock *_lock;
    unsigned long _gen;
    struct __CFDictionary *_objects;
}

+ (id)set;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id *)arg1 count:(unsigned int)arg2;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)setWithArray:(id)arg1;
+ (id)setWithCapacity:(unsigned int)arg1;
- (unsigned int)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)_copyAllItems;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;

@end

