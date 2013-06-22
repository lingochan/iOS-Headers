/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPersistentStore.h>

@class NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSQLAdapter, NSSQLConnection, NSSQLEntity, NSSQLModel, NSSQLRow, NSSQLRowCache, NSSaveChangesRequest, NSSet, NSString;

@interface NSSQLCore : NSPersistentStore
{
    NSSQLModel *_model;
    NSSQLAdapter *_adapter;
    NSSQLConnection *_connection;
    NSMutableArray *_channels;
    NSManagedObjectContext *_currentContext;
    NSSQLEntity *_lastEntity;
    NSSQLRowCache *_rowCache;
    NSMutableDictionary *_uniqueTable;
    NSMutableArray *_toManyCache;
    struct __CFSet *_deleteTable;
    NSSet *_lockedObjects;
    struct __CFDictionary *_dbOperationsByGlobalID;
    NSSaveChangesRequest *_currentSaveRequest;
    int _lazyFaultDebugLevel;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    struct _NSScalarObjectID *_currentGlobalID;
    NSSQLRow *_currentRow;
    id _observer;
    NSMutableSet *_missingObjectGIDs;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableSet *_externalDataReferencesToDelete;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    int _transactionInMemorySequence;
    int _debug;
    struct _sqlCoreFlags {
        unsigned int preparingForSave:1;
        unsigned int beganTransaction:1;
        unsigned int ignoreEntityCaching:1;
        unsigned int storeMetadataClean:1;
        unsigned int useToManyCaching:1;
        unsigned int useSyntaxColoredLogging:1;
        unsigned int checkedExternalReferences:1;
        unsigned int fileProtectionType:3;
        unsigned int _RESERVED:22;
    } _sqlCoreFlags;
}

+ (void)setDebugDefault:(int)arg1;
+ (void)setColoredLoggingDefault:(BOOL)arg1;
+ (void)setSQLGenerationV1Default:(BOOL)arg1;
+ (int)debugDefault;
+ (BOOL)coloredLoggingDefault;
+ (BOOL)SQLGenerationV1Default;
+ (void)initialize;
+ (Class)migrationManagerClass;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (BOOL)sanityCheckFileAtURL:(id)arg1 error:(id *)arg2;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
- (id)entityForFetchRequest:(id)arg1;
- (id)entityForObject:(id)arg1;
- (id)entityForEntityDescription:(id)arg1;
- (id)_newAdapterForModel:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)_disconnect;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (void)dealloc;
- (void)setURL:(id)arg1;
- (id)identifier;
- (Class)_objectIDClass;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (struct _NSScalarObjectID *)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (struct _NSScalarObjectID *)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (id)adapter;
- (id)model;
- (id)currentContext;
- (void)setCurrentContext:(id)arg1;
- (id)channels;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (BOOL)load:(id *)arg1;
- (id)newAdapterForModel:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (const id *)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)registerChannel:(id)arg1;
- (void)unregisterChannel:(id)arg1;
- (id)rowCache;
- (id)connection;
- (void)_beginTransaction:(id)arg1;
- (void)beginTransaction_core;
- (void)beginTransaction_NotificationFree;
- (void)beginTransaction;
- (void)_cleanUpAfterTransaction;
- (void)_commitTransaction:(id)arg1;
- (void)commitTransaction_core;
- (void)commitTransaction_NotificationFree;
- (void)commitTransaction;
- (void)rollbackTransaction_core;
- (void)rollbackTransaction;
- (void)recordSnapshot:(id)arg1 forObjectID:(id)arg2;
- (void)recordToMany:(id)arg1 forSourceObjectID:(id)arg2 relationshipName:(id)arg3 orderKeys:(id)arg4;
- (void)forgetSnapshotForGlobalID:(id)arg1;
- (id)localSnapshotForGlobalID:(id)arg1;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowForObjectID:(id)arg1;
- (id)missingObjectGlobalIDs;
- (id)createChannel;
- (id)_availableChannelFromRegisteredChannels;
- (id)_availableChannel;
- (id)_obtainOpenChannel;
- (id)availableChannel;
- (void)forgetSnapshotsForGlobalIDs:(id)arg1;
- (id)_prepareDictionaryResultsFromResultSet:(CDStruct_02686582 *)arg1 usingFetchPlan:(id)arg2;
- (id)_prepareResultsFromResultSet:(CDStruct_02686582 *)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id *)arg3;
- (id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (void)invalidateObjectsWithGlobalIDs:(id)arg1;
- (void)_assertValidStateWithSelector:(SEL)arg1;
- (void)_cleanUpAfterSave;
- (id)_databaseContextState;
- (id)_addDatabaseContextStateToException:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 reorderedIndexes:(char **)arg4;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3;
- (void)recordPrimaryKey:(long long)arg1 forInsertedObject:(id)arg2 withSQLEntity:(id)arg3;
- (void)_populateRowForOp:(id)arg1 withObject:(id)arg2;
- (void)recordDeleteForObject:(id)arg1;
- (void)recordDatabaseOperation:(id)arg1;
- (id)databaseOperationForGlobalID:(id)arg1;
- (id)permanentObjectIDForObjectInTransaction:(id)arg1;
- (id)databaseOperationForObject:(id)arg1;
- (void)recordToManyInsertsForObject:(id)arg1 withOperation:(id)arg2;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 reorderedIndexes:(char **)arg10;
- (void)recordToManyUpdatesForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordUpdateForObject:(id)arg1;
- (void)recordValuesForInsertedObject:(id)arg1;
- (id)_predicateForSelectingObjectForOperation:(id)arg1;
- (void)_addUpdatesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addInsertsToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addDeletesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addManyToManysToDatabaseOp:(id)arg1;
- (void)createAdapterOperationsForDatabaseOperation:(id)arg1;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (id)entityNameOrderingArrayForEntities:(id)arg1;
- (id)orderAdapterOperations;
- (BOOL)ownsGlobalID:(id)arg1;
- (BOOL)ownsObject:(id)arg1;
- (BOOL)handlesFetchRequest:(id)arg1;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (void)prepareForSave:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (void)recordChangesInContext:(id)arg1;
- (struct __CFArray *)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (BOOL)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)_performChangesWithAdapterOps:(id)arg1;
- (void)performChanges;
- (void)rollbackChanges;
- (void)commitChanges:(id)arg1;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)newRowsForFetchPlan:(id)arg1;
- (id)externalDataReferencesDirectory;
- (id)externalLocationForFileWithUUID:(id)arg1;
- (id)safeguardLocationForFileWithUUID:(id)arg1;
- (id)externalDataLinksDirectory;
- (id)externalDataReferencesToSave;
- (id)externalDataReferencesToDelete;
- (id)writeExternalDataReferences;
- (void)deleteExternalDataReferences:(id)arg1;
- (id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2;
- (id)saveChanges:(id)arg1;
- (id)refreshObjects:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(BOOL)arg4;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (id)_collectSkewedComponents:(id *)arg1;
- (void)_checkAndRepairCorrelationTables:(BOOL)arg1 storeVersionNumber:(id)arg2;
- (void)_ensureDatabaseMatchesModel;
- (void)_setMetadata:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)_loadAndSetMetadata;
- (id)_loadAndSetMetadataReadOnly;
- (BOOL)loadMetadata:(id *)arg1;
- (id)metadata;
- (id)databaseUUID;
- (void)setDatabaseUUID:(id)arg1;
- (int)fileProtectionLevel;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID *)arg1;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(BOOL)arg2 swapEKPK:(BOOL)arg3;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3;
- (id)newSortDescriptorForOrderedRelationship:(id)arg1;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID *)arg1 andRelationship:(id)arg2;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID *)arg1 andRelationship:(id)arg2;
- (id)type;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (void)_purgeRowCache;
- (void)_performPostSaveTasks;
- (void)recomputePrimaryKeyMaxForEntities:(id)arg1;

@end

