/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextCommand.h>

@class TSWPCharacterStyle;

// Not exported
@interface TSWPCharacterStyleCommand : TSWPTextCommand
{
    TSWPCharacterStyle *_characterStyle;
}

- (int)persistenceKind;
- (void)doCommit;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 characterStyle:(id)arg3;

@end

