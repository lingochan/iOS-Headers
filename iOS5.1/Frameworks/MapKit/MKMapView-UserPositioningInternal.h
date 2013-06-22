/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKMapView.h>

@class CLLocation, MKMapViewPositioningChange, MKUserLocationView;

@interface MKMapView (UserPositioningInternal)
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (BOOL)_deviceIsPluggedIn;
- (void)_updatePositioningChangeMetrics:(id)arg1;
- (void)_runPositioningChange;
- (void)onMapAddView:(id)arg1 change:(id)arg2;
@property(readonly, nonatomic) MKUserLocationView *userLocationView;
- (void)set_hoverExpirationTimer:(id)arg1;
- (id)_hoverExpirationTimer;
- (void)_stopHoverWithChange:(id)arg1;
- (void)_startHoverExpirationTimerWithDuration:(double)arg1 change:(id)arg2;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (void)_pauseUserLocationUpdates;
@property(nonatomic) BOOL ignoreLocationUpdates;
- (BOOL)_haveNewPendingLocation;
- (BOOL)_isReadyToRunPositioningChange;
@property(readonly, nonatomic, getter=isUserLocationChangeDone) BOOL userLocationChangeDone;
- (void)_startPositioningChange:(id)arg1;
- (id)_positioningChangeWithLocation:(id)arg1 source:(int)arg2 hasFocus:(BOOL)arg3 isUpdated:(BOOL)arg4;
- (id)_positioningChange:(BOOL)arg1;
- (BOOL)_hasHovered;
- (void)_stopHover;
- (BOOL)_isOrWillHover;
- (BOOL)_isHoverScheduled;
- (BOOL)_isHovering;
- (BOOL)_shouldChangeZoomLevel:(float *)arg1 withChange:(id)arg2;
- (void)_updatePositioningChangeMetadata:(id)arg1;
- (float)_zoomLevelForUserLocation:(id)arg1 distanceHysteresis:(BOOL)arg2 positionViewHysteresis:(BOOL)arg3;
- (void)userLocationViewDidQuiesce:(id)arg1;
- (void)userLocationViewAccuracyDidUpdate:(id)arg1;
- (void)_goToCurrentLocationOnTransitionEnd;
- (BOOL)_isUserLocationNearEventPoint:(struct CGPoint)arg1;
- (BOOL)_isUserLocationNearPoint:(struct CGPoint)arg1 hitSize:(float)arg2;
- (void)set_positioningChangeTimer:(id)arg1;
- (id)_positioningChangeTimer;
- (void)set_scrollToReCenterUserTimer:(id)arg1;
- (id)_scrollToReCenterUserTimer;
- (void)_scheduleScrollToReCenterUserIfNeeded;
- (BOOL)isScrollToUserCenterPending;
- (void)_cancelRunPositioningChange;
- (void)_scheduleRunPositioningChange;
- (void)_scheduleRunPositioningChange:(id)arg1 delay:(double)arg2;
- (void)_runPositioningChangeIfNeeded:(id)arg1;
- (void)_runPositioningChangeIfNeeded;
- (void)_cancelScrollToReCenterUser;
- (void)_scheduleScrollToReCenterUser;
- (void)removeUserLocation;
- (void)goToUserLocation;
- (void)_scrollToUserLocation;
- (void)_goToUserLocation:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (BOOL)_shouldZoomOnLiveTracking;
- (float)_zoomLevelForLocation:(id)arg1 previousLocation:(id)arg2;
- (void)resetUserLocation;
- (void)_resetPositioningChange;
@property(retain, nonatomic) CLLocation *fixedUserLocation;
- (struct CGPoint)userPosition;
@property(nonatomic) int userLocationSource;
@property(retain, nonatomic) CLLocation *predictedUserLocation;
- (BOOL)isTrackingUserLocation;
- (BOOL)hasUserLocation;
- (BOOL)isRunningPositioningChange;
- (BOOL)isUserPresentationVisible;
- (BOOL)isUserLocationViewCentered;
- (BOOL)isUserLocationBounded;
- (BOOL)isBoundedByUserLocation;
- (BOOL)_isUserLocationCoordinateInView;
- (BOOL)_isLocationCoordinatesInView:(id)arg1;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (void)_ensureLiveTrackingResourcesInitialized;
- (void)_userLocationViewWillDisappear:(id)arg1;
- (void)_userLocationViewDidAppear:(id)arg1;
- (void)_toggleCountry:(id)arg1;
- (void)_updateLocationConsole;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)setLocationConsoleEnabled:(BOOL)arg1;
- (BOOL)isLocationConsoleEnabled;
- (struct CGRect)_debugViewFrame;
@property(retain, nonatomic) MKMapViewPositioningChange *positioningChange;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (void)disableLiveTracking;
@end

