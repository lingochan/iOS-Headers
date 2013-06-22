/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TUBacktrace-Protocol.h"

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace>
{
    NSArray *_symbolicatedBacktraceStrings;
    NSDictionary *_dyldLoadLocations;
    void **_unsymbolicatedBacktrace;
    int _unsymbolicatedBacktraceLength;
    int _symbolicateSpinLock;
}

- (void)dealloc;
- (id)dyldLoadLocations;
- (id)symbolicatedBacktraceStrings;
- (void)symbolicate;
- (id)initWithSymbolicatedBacktraceStrings:(id)arg1 dyldLoadLocations:(id)arg2;
- (id)initWithExistingBacktrace:(void **)arg1 length:(int)arg2 symbolicateImmediately:(BOOL)arg3;
- (id)initIgnoringTopEntries:(int)arg1 symbolicateImmediately:(BOOL)arg2;
- (id)init;
- (void)_initWithBacktrace:(void **)arg1 length:(int)arg2 ignoreTopEntries:(int)arg3 symbolicateImmediately:(BOOL)arg4;

@end
