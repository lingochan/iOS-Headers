/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPersistentStoreRequest.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding>
{
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    unsigned int _offset;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned int _batchSize;
    unsigned long _fetchLimit;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags {
        unsigned int distinctValuesOnly:1;
        unsigned int includesSubentities:1;
        unsigned int includesPropertyValues:1;
        unsigned int resultType:3;
        unsigned int returnsObjectsAsFaults:1;
        unsigned int excludePendingChanges:1;
        unsigned int isInUse:1;
        unsigned int entityIsName:1;
        unsigned int refreshesRefetched:1;
        unsigned int propertiesValidated:1;
        unsigned int _RESERVED:20;
    } _flags;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)fetchRequestWithEntityName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)entity;
- (void)setEntity:(id)arg1;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (unsigned int)fetchLimit;
- (void)setFetchLimit:(unsigned int)arg1;
- (id)relationshipKeyPathsForPrefetching;
- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;
- (BOOL)returnsObjectsAsFaults;
- (void)setReturnsObjectsAsFaults:(BOOL)arg1;
- (BOOL)includesSubentities;
- (void)setIncludesSubentities:(BOOL)arg1;
- (BOOL)includesPropertyValues;
- (void)setIncludesPropertyValues:(BOOL)arg1;
- (unsigned int)resultType;
- (void)setResultType:(unsigned int)arg1;
- (BOOL)includesPendingChanges;
- (void)setIncludesPendingChanges:(BOOL)arg1;
- (BOOL)returnsDistinctResults;
- (void)setReturnsDistinctResults:(BOOL)arg1;
- (id)propertiesToFetch;
- (id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id *)arg3;
- (void)setPropertiesToFetch:(id)arg1;
- (unsigned int)fetchOffset;
- (void)setFetchOffset:(unsigned int)arg1;
- (unsigned int)fetchBatchSize;
- (void)setFetchBatchSize:(unsigned int)arg1;
- (id)affectedStores;
- (void)setAffectedStores:(id)arg1;
- (BOOL)shouldRefreshRefetchedObjects;
- (void)setShouldRefreshRefetchedObjects:(BOOL)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)entityName;
- (id)groupByProperties;
- (id)propertiesToGroupBy;
- (void)setGroupByProperties:(id)arg1;
- (void)setPropertiesToGroupBy:(id)arg1;
- (id)havingPredicate;
- (void)setHavingPredicate:(id)arg1;

@end

