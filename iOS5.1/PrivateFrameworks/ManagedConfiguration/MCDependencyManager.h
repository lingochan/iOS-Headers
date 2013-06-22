/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MCDependencyManager : NSObject
{
    NSMutableDictionary *_domainsDict;
    NSMutableDictionary *_orphansDict;
}

+ (id)sharedManager;
+ (void)_setDependencyFilePath:(id)arg1;
- (id)init;
- (id)_init;
- (void)dealloc;
- (id)_domainsDict;
- (void)commitChanges;
- (id)_domainsDictionaryForDomain:(id)arg1 parent:(id)arg2 outParentsDict:(id *)arg3 outDependents:(id *)arg4;
- (void)_addOrphanParent:(id)arg1 forDomain:(id)arg2;
- (void)_removeOrphanParent:(id)arg1 fromDomain:(id)arg2;
- (id)orphanedParentsForDomain:(id)arg1;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;
- (id)parentsInDomain:(id)arg1;
- (void)removeParent:(id)arg1 fromDomain:(id)arg2;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;

@end

