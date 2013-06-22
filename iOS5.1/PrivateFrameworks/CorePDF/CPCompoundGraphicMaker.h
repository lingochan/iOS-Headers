/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable-Protocol.h"

@class CPChunk, CPCluster, CPGraphicObject;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable>
{
    CPChunk *parentChunk;
    BOOL shapesAreVectorGraphics;
    unsigned int shapeCount;
    CPGraphicObject **shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;
    BOOL disposed;
}

+ (BOOL)makeCompoundGraphicsInZonesOf:(id)arg1;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (BOOL)findClusterLevel;
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)coalesceShapeGroups;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (BOOL)groupOverlappingGraphics;
- (BOOL)makeCompoundGraphics;

@end

