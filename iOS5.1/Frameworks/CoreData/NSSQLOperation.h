/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObject, NSMutableArray, NSMutableDictionary, NSSQLRow;

@interface NSSQLOperation : NSObject
{
    unsigned int _databaseOperator;
    NSSQLRow *_rowForUpdate;
    NSMutableArray *_adapterOps;
    NSManagedObject *_object;
    NSSQLRow *_dbSnapshot;
    NSMutableDictionary *_mtmDeltas;
}

- (id)initWithObject:(id)arg1 entity:(id)arg2;
- (void)dealloc;
- (id)dbSnapshot;
- (void)setDBSnapshot:(id)arg1;
- (id)rowForUpdate;
- (void)setRowForUpdate:(id)arg1;
- (id)objectID;
- (id)object;
- (unsigned int)databaseOperator;
- (void)setDatabaseOperator:(unsigned int)arg1;
- (id)adapterOperations;
- (void)addAdapterOperation:(id)arg1;
- (void)removeAdapterOperation:(id)arg1;
- (id)description;
- (void)addDelta:(id)arg1 forManyToManyKey:(id)arg2;
- (id)manyToManyDeltas;

@end

