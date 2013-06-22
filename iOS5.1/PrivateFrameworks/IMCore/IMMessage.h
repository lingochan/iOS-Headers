/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class FZMessage, IMHandle, NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface IMMessage : NSObject <NSCopying>
{
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSString *_plainBody;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timeRead;
    NSString *_guid;
    NSAttributedString *_messageSubject;
    NSArray *_fileTransferGUIDs;
    NSError *_error;
    unsigned long long _flags;
    BOOL _isInvitationMessage;
    long long _messageID;
}

+ (id)messageFromFZMessage:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
- (void)_updateTimeRead:(id)arg1;
@property(retain, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
- (void)_updateTimeDelivered:(id)arg1;
@property(retain, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(readonly, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(nonatomic) BOOL isInvitationMessage; // @synthesize isInvitationMessage=_isInvitationMessage;
- (void)_updateError:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)_updateFlags:(unsigned long long)arg1;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) long long messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)_updateTime:(id)arg1;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) NSAttributedString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property(readonly, nonatomic) IMHandle *subject; // @synthesize subject=_subject;
- (void)_updateSender:(id)arg1;
@property(retain, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) FZMessage *_fzMessage;
- (int)compare:(id)arg1 comparisonType:(int)arg2;
- (int)compare:(id)arg1;
- (int)_compareIMMessageIDs:(id)arg1;
- (int)_compareIMMessageDates:(id)arg1;
- (int)_compareIMMessageGUIDs:(id)arg1;
@property(readonly, nonatomic) BOOL isAlert;
@property(readonly, nonatomic) BOOL isAddressedToMe;
- (void)setIsAddressedToMe:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSystemMessage;
@property(readonly, nonatomic) BOOL isRead;
@property(readonly, nonatomic) BOOL isDelivered;
@property(readonly, nonatomic) BOOL isAutoReply;
@property(readonly, nonatomic) BOOL isDelayed;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) BOOL fromMe;
@property(readonly, nonatomic) BOOL isEmote;
@property(readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property(readonly, nonatomic) BOOL hasInlineAttachments;
@property(readonly, nonatomic) BOOL finished;
@property(readonly, nonatomic) BOOL isSent;
@property(readonly, nonatomic) BOOL isFinished;
@property(readonly, nonatomic) BOOL hasDataDetectorResults;
@property(readonly, nonatomic) NSString *summaryString;
@property(readonly, nonatomic) NSString *senderName;
@property(readonly, nonatomic) NSString *plainBody;
- (void)dealloc;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 text:(id)arg5 messageSubject:(id)arg6 fileTransferGUIDs:(id)arg7 flags:(unsigned long long)arg8 error:(id)arg9 guid:(id)arg10 messageID:(long long)arg11 subject:(id)arg12;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

