//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapSnapshotCreatorRequester.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester>
{
    CDUnknownBlockType handler;
}

+ (id)snapshotRequesterWitHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
- (void).cxx_destruct;
- (void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
