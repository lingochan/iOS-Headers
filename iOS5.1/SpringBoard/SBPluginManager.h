/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBPluginManager : NSObject
{
    NSString *_pluginsDirectory;
}

+ (id)sharedInstance;
- (id)springBoardPluginsDirectory;
- (void)loadAllLaunchPlugins;
- (Class)loadPluginNamed:(id)arg1;
- (Class)loadPluginBundle:(id)arg1;

@end

