//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebDeviceOrientation;

@protocol WebDeviceOrientationProvider <NSObject>
- (WebDeviceOrientation *)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
@end
