//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarCardStyleProviding-Protocol.h"
#import "CarGuidanceCardDelegate-Protocol.h"
#import "GuidanceDisplay-Protocol.h"

@class CarArrivedGuidanceSign, CarLoadingGuidanceSign, CarNavigationGuidanceSign, CarReroutingGuidanceSign, CarToggledGuidanceSign, NSArray, NSDictionary, NSString, NSTimer, NSUUID, NavJunctionViewInfo, NavSignLaneGuidanceInfo, NavSignManeuverGuidanceInfo, UIView;
@protocol CarCardContentDelegate, CarGuidanceCard, CarGuidanceCardDelegate, CarGuidanceCardViewDelegate;

__attribute__((visibility("hidden")))
@interface CarGuidanceCardViewController : UIViewController <CarGuidanceCardDelegate, CarCardStyleProviding, GuidanceDisplay, CarCardContent>
{
    NSUUID *_currentSignID;
    NSTimer *_transientToggleTimer;
    NSTimer *_junctionViewRestoreTimer;
    NSTimer *_reloadTimer;
    _Bool _reloadAnimated;
    _Bool _reloading;
    _Bool _pendingReload;
    _Bool _transitioningBetweenGuidanceStates;
    NSString *_destinationName;
    _Bool _transitioning;
    _Bool _haveShownTapForLowGuidance;
    _Bool _haveShownTapForFullGuidance;
    id <CarCardContentDelegate> _cardContentDelegate;
    NSDictionary *_dynamicDimensionGuides;
    unsigned long long _navigationType;
    id <CarGuidanceCardViewDelegate> _delegate;
    unsigned long long _cardState;
    UIView<CarGuidanceCard> *_currentSign;
    CarNavigationGuidanceSign *_fullGuidanceSign;
    CarToggledGuidanceSign *_guidanceToggleOverlaySign;
    CarNavigationGuidanceSign *_lowGuidanceSign;
    CarArrivedGuidanceSign *_arrivalOverlaySign;
    CarReroutingGuidanceSign *_reroutingOverlaySign;
    CarLoadingGuidanceSign *_loadingOverlaySign;
    NavSignManeuverGuidanceInfo *_primaryGuidance;
    NavSignManeuverGuidanceInfo *_secondaryGuidance;
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;
    NavJunctionViewInfo *_junctionViewInfo;
    NSUUID *_proceedToRouteSignID;
    NSUUID *_mirroredPrimarySignID;
    unsigned long long _destination;
    id <CarGuidanceCardDelegate> _guidanceCardDelegate;
}

@property(nonatomic) __weak id <CarGuidanceCardDelegate> guidanceCardDelegate; // @synthesize guidanceCardDelegate=_guidanceCardDelegate;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSUUID *mirroredPrimarySignID; // @synthesize mirroredPrimarySignID=_mirroredPrimarySignID;
@property(retain, nonatomic) NSUUID *proceedToRouteSignID; // @synthesize proceedToRouteSignID=_proceedToRouteSignID;
@property(retain, nonatomic) NavJunctionViewInfo *junctionViewInfo; // @synthesize junctionViewInfo=_junctionViewInfo;
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *secondaryGuidance; // @synthesize secondaryGuidance=_secondaryGuidance;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *primaryGuidance; // @synthesize primaryGuidance=_primaryGuidance;
@property(retain, nonatomic) CarLoadingGuidanceSign *loadingOverlaySign; // @synthesize loadingOverlaySign=_loadingOverlaySign;
@property(retain, nonatomic) CarReroutingGuidanceSign *reroutingOverlaySign; // @synthesize reroutingOverlaySign=_reroutingOverlaySign;
@property(retain, nonatomic) CarArrivedGuidanceSign *arrivalOverlaySign; // @synthesize arrivalOverlaySign=_arrivalOverlaySign;
@property(retain, nonatomic) CarNavigationGuidanceSign *lowGuidanceSign; // @synthesize lowGuidanceSign=_lowGuidanceSign;
@property(nonatomic) _Bool haveShownTapForFullGuidance; // @synthesize haveShownTapForFullGuidance=_haveShownTapForFullGuidance;
@property(nonatomic) _Bool haveShownTapForLowGuidance; // @synthesize haveShownTapForLowGuidance=_haveShownTapForLowGuidance;
@property(retain, nonatomic) CarToggledGuidanceSign *guidanceToggleOverlaySign; // @synthesize guidanceToggleOverlaySign=_guidanceToggleOverlaySign;
@property(retain, nonatomic) CarNavigationGuidanceSign *fullGuidanceSign; // @synthesize fullGuidanceSign=_fullGuidanceSign;
@property(retain, nonatomic) UIView<CarGuidanceCard> *currentSign; // @synthesize currentSign=_currentSign;
@property(nonatomic) unsigned long long cardState; // @synthesize cardState=_cardState;
@property(nonatomic) __weak id <CarGuidanceCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long navigationType; // @synthesize navigationType=_navigationType;
@property(retain, nonatomic) NSDictionary *dynamicDimensionGuides; // @synthesize dynamicDimensionGuides=_dynamicDimensionGuides;
@property(nonatomic) __weak id <CarCardContentDelegate> cardContentDelegate; // @synthesize cardContentDelegate=_cardContentDelegate;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void).cxx_destruct;
- (void)updateLayout;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (id)backgroundViewForCarCardLayout:(CDStruct_fd467f33)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;
- (void)guidanceCardHasContentChanged:(id)arg1;
@property(readonly) unsigned long long maneuverViewLayoutType;
@property(readonly) struct CGSize availableSize;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 distanceText:(id)arg3 forStep:(id)arg4 atStepIndex:(unsigned long long)arg5;
- (void)setETA:(id)arg1;
- (void)_showRecalculatingWithDataConnectionFailedMessage:(_Bool)arg1;
- (void)showRecalculationFailed;
- (void)showRecalculating;
- (void)setDestinationDisplayName:(id)arg1;
- (void)showArrivedUsingSignInfo:(_Bool)arg1;
- (void)showNoGuidance;
- (void)hideJunctionView;
- (void)presentJunctionViewInfo:(id)arg1;
- (void)showJunctionView:(id)arg1;
- (void)hideLaneGuidance;
- (void)showLaneGuidance:(id)arg1;
- (void)updateLaneGuidance:(id)arg1;
- (id)currentLaneGuidanceId;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuverSign:(id)arg1;
- (void)showManeuverSign:(id)arg1 maneuverStepIndex:(unsigned long long)arg2;
- (void)_toggleTimerFired;
- (void)_resetToggleTimer;
- (void)_updateCardStateGuidance;
- (void)showTemporarilyHiddenJunctionViewAnimated:(_Bool)arg1;
- (void)temporarilyHideJunctionViewForSeconds:(double)arg1 animated:(_Bool)arg2;
- (void)handleUserSelectionAtPoint:(struct CGPoint)arg1;
- (void)setNavigationType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_reload;
- (void)_scheduleReloadAnimated:(_Bool)arg1;
- (void)setCardState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDestination:(unsigned long long)arg1 guidanceCardDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end
