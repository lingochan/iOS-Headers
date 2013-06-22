/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPlayerCellContentView.h>

#import "GKMultilineLayoutProtocol-Protocol.h"

@class GKInviteButton, GKTouchInterceptView, NSString, UIActivityIndicatorView, UIImage;

@interface GKFriendPickerCellContents : GKPlayerCellContentView <GKMultilineLayoutProtocol>
{
    int _inviteStatus;
    BOOL _showsSelectionIcon;
    BOOL _showsInviteStatus;
    BOOL _showsInviteButton;
    BOOL _showsUninviteButton;
    BOOL _padsForInvisibleSelectionIcon;
    BOOL _enabled;
    UIImage *_selectionIcon;
    BOOL _showingActivityIndicator;
    UIActivityIndicatorView *_activityView;
    struct CGSize _firstLineOffset;
    GKInviteButton *_inviteButton;
    BOOL _showingInviteButton;
    BOOL _showingConfirmButton;
    unsigned int _index;
    id _inviteButtonHandler;
    id _uninviteButtonHandler;
    GKTouchInterceptView *_touchInterceptView;
    NSString *_rankString;
    BOOL _shouldShowRank;
}

@property(retain, nonatomic) GKTouchInterceptView *touchInterceptView; // @synthesize touchInterceptView=_touchInterceptView;
@property(copy, nonatomic) id uninviteButtonHandler; // @synthesize uninviteButtonHandler=_uninviteButtonHandler;
@property(copy, nonatomic) id inviteButtonHandler; // @synthesize inviteButtonHandler=_inviteButtonHandler;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) BOOL shouldShowRank; // @synthesize shouldShowRank=_shouldShowRank;
@property(readonly, nonatomic) GKInviteButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) NSString *rankString; // @synthesize rankString=_rankString;
@property(retain, nonatomic) UIImage *selectionIcon; // @synthesize selectionIcon=_selectionIcon;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL padsForInvisibleSelectionIcon; // @synthesize padsForInvisibleSelectionIcon=_padsForInvisibleSelectionIcon;
@property(nonatomic) BOOL showsUninviteButton; // @synthesize showsUninviteButton=_showsUninviteButton;
@property(nonatomic) BOOL showsInviteButton; // @synthesize showsInviteButton=_showsInviteButton;
@property(nonatomic) BOOL showsInviteStatus; // @synthesize showsInviteStatus=_showsInviteStatus;
@property(nonatomic) BOOL showsSelectionIcon; // @synthesize showsSelectionIcon=_showsSelectionIcon;
@property(nonatomic) int inviteStatus; // @synthesize inviteStatus=_inviteStatus;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTouchesIntercepted:(BOOL)arg1;
- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect *)arg2 highlighted:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)selectionIconRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutInviteButton;
- (void)layoutInviteButtonAnimated:(BOOL)arg1;
- (void)inviteButtonPushed;
- (void)setConfirmButtonHidden:(BOOL)arg1;
- (void)updateInviteButtonAnimated:(BOOL)arg1;
- (void)updateInviteButton;
- (BOOL)hasStatusForUninviteButton;
- (BOOL)hasStatusForInviteButton;
@property(readonly, nonatomic) BOOL showingUninviteButton; // @dynamic showingUninviteButton;
@property(readonly, nonatomic) BOOL showingInviteButton; // @dynamic showingInviteButton;
- (void)removeFromSuperview;
- (void)createInviteMatchConfirmButton;
- (void)setShowingActivityIndicator:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)updateLines;
- (void)dealloc;
- (id)initWithNumberOfLines:(unsigned int)arg1;

@end

