/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UIBarButtonItem, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    BOOL _allowsCustomizing;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)tabBarItem;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
@property(nonatomic) BOOL allowsCustomizing;
@property(nonatomic) BOOL moreViewControllersChanged;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_updateEditButton;
- (void)_layoutCells;
- (id)table;
- (void)dealloc;
- (id)init;

@end

