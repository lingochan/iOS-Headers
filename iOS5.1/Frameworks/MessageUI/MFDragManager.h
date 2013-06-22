/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MFGobblerGestureRecognizer, MFMailComposeView, NSMutableArray, NSMutableDictionary, NSTimer, UIGestureRecognizer, UIView;

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableArray *_dragDestinations;
    NSMutableArray *_dragSources;
    NSMutableDictionary *_gestureRecognizersForSource;
    NSMutableDictionary *_sourceForGestureRecognizer;
    id <MFDraggableItem> _draggedItem;
    UIView *_draggedItemView;
    id <MFDragDestination> _currentDestination;
    UIGestureRecognizer *_currentGestureBeingProcessed;
    MFGobblerGestureRecognizer *_gobblerGestureRecognizer;
    MFMailComposeView *_currentlyDisplayedComposeView;
    NSTimer *_scrollTimer;
    struct CGPoint _offsetCenterOfDraggedView;
    struct CGPoint _previousGestureLocation;
    double _timeOfLastBigUpdate;
    struct CGRect _draggedItemOriginalFrame;
    BOOL _dragWasSuccessful;
    BOOL _scrollingForDrag;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)addDragDestination:(id)arg1;
- (void)removeDragDestination:(id)arg1;
- (void)addDragSource:(id)arg1;
- (void)removeDragSource:(id)arg1;
- (void)_cleanUpAfterDragCompleted;
- (void)_processGestureUpdate;
- (void)cancelCurrentDragOperation;
- (void)_handleLongPress:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_scrollViewIfNecessary;
@property MFMailComposeView *currentlyDisplayedComposeView; // @synthesize currentlyDisplayedComposeView=_currentlyDisplayedComposeView;

@end

