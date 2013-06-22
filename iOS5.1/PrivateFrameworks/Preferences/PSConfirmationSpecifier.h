/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier
{
    NSString *_title;
    NSString *_prompt;
    NSString *_okButton;
    NSString *_cancelButton;
}

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7;
- (void)setupWithDictionary:(id)arg1;
- (BOOL)isDestructive;
- (void)dealloc;
@property(retain, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSString *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

