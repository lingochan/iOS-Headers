/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIURLResolver.h>

@class NSArray;

@interface UIFMFURLResolver : UIURLResolver
{
    NSArray *_fmfHostPatterns;
    NSArray *_fmfPathPatterns;
}

+ (id)urlCacheChangedNotificationName;
+ (id)urlCacheName;
- (BOOL)isFMFURL:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

