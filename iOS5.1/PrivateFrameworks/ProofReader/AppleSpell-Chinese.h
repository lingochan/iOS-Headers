/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProofReader/AppleSpell.h>

@interface AppleSpell (Chinese)
- (void)addModifiedPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO *)arg2 fromIndex:(unsigned int)arg3 startingModificationsAt:(unsigned int)arg4 inBuffer:(char *)arg5 length:(unsigned int)arg6 initialSyllableCount:(unsigned int)arg7 initialScore:(unsigned int)arg8 lastSyllableScore:(unsigned int)arg9;
- (id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2;
@end

