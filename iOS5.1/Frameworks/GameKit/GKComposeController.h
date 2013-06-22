/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKAbstractComposeController.h>

@class NSMutableSet, NSString, NSURL;

@interface GKComposeController : GKAbstractComposeController
{
    BOOL _alreadySetUp;
    int _successCount;
    int _failCount;
    BOOL _dismissed;
    BOOL _alertShown;
    id <GKComposeControllerDelegate> _delegate;
    NSURL *_serverAddFriendsURL;
    BOOL _messageWasSetExternally;
    NSMutableSet *_playerFriendRequestsSent;
    NSString *_defaultMessage;
}

@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain, nonatomic) NSMutableSet *playerFriendRequestsSent; // @synthesize playerFriendRequestsSent=_playerFriendRequestsSent;
@property BOOL messageWasSetExternally; // @synthesize messageWasSetExternally=_messageWasSetExternally;
@property(retain, nonatomic) NSURL *serverAddFriendsURL; // @synthesize serverAddFriendsURL=_serverAddFriendsURL;
@property(nonatomic) id <GKComposeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (void)showAlertForError:(id)arg1;
- (void)showAlertForFailures:(id)arg1 allFailed:(BOOL)arg2;
- (void)dismiss;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)send:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)serverAddFriendsButtonWasTouched;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setDefaultMessageWithRealName;
- (void)addPlayerRecipients:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

