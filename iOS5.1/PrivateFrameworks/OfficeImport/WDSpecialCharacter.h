/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun
{
    WDCharacterProperties *mProperties;
    int mType;
}

- (void)dealloc;
- (id)properties;
- (void)clearProperties;
- (int)runType;
- (int)characterType;
- (void)setCharacterType:(int)arg1;
- (id)initWithParagraph:(id)arg1;

@end

