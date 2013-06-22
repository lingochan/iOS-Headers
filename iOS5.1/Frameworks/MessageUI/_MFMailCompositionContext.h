/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFMailCompositionContext.h>

@class MFMessageViewingContext, MailMessage;

@interface _MFMailCompositionContext : MFMailCompositionContext
{
    int _composeType;
    id _autosaveIdentifier;
    MailMessage *_originalMessage;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    struct {
        unsigned int loadRest:1;
        unsigned int includeAttachments:1;
    } _mailComposeFlags;
}

- (id)initWithComposeType:(int)arg1;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initDraftRestoreOfRFC822Data:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) MFMessageViewingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) id originalContent; // @synthesize originalContent=_originalContent;
@property(nonatomic) BOOL loadRest;
@property(nonatomic) BOOL includeAttachments;
@property(readonly, retain, nonatomic) MailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(readonly, nonatomic) id autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(readonly, nonatomic) int composeType; // @synthesize composeType=_composeType;

@end

