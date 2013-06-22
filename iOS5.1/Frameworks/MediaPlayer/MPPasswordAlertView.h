/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _completionHandler;
    int _style;
    UITextField *_accountTextField;
    UITextField *_passwordTextField;
}

@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(copy, nonatomic) NSString *accountTextFieldPlaceholder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;

@end

