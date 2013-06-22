/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock
{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)dealloc;
- (id)properties;
- (void)clearProperties;
- (id)runs;
- (int)runCount;
- (id)runAt:(int)arg1;
- (void)addRun:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeRun:(id)arg1;
- (void)clearRuns;
- (id)addCharacterRun;
- (id)addAnnotation:(int)arg1;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addFieldMarker:(int)arg1;
- (id)addSymbol;
- (id)addSpecialCharacter;
- (id)addBookmark;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addDateTime:(id)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)newRunIterator;
- (int)blockType;
- (BOOL)isEmpty;
- (int)characterCount;

@end

