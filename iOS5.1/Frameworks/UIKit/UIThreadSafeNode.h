/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMNode;

@interface UIThreadSafeNode : NSObject
{
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithNode:(id)arg1;

@end

