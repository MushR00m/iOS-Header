//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"
#import "SearchSessionObserver-Protocol.h"
#import "TopBarAlertViewDelegate-Protocol.h"

@class CarChromeViewController, CarLowFuelAlertView, MNTrafficIncidentAlert, NSLayoutConstraint, NSString, NSTimer, TopBarAlertView, TrafficAlertView;
@protocol CarBannerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarBannerController : NSObject <MNNavigationServiceObserver, TopBarAlertViewDelegate, SearchSessionObserver>
{
    _Bool _bannerViewVisible;
    _Bool _dimmed;
    _Bool _presentingBanner;
    _Bool _dismissingBanner;
    CarChromeViewController *_chromeViewController;
    id <CarBannerControllerDelegate> _delegate;
    MNTrafficIncidentAlert *_trafficAlert;
    TopBarAlertView *_bannerView;
    NSLayoutConstraint *_bannerViewConstraintToTop;
    NSTimer *_timeoutTimer;
    TrafficAlertView *_trafficAlertView;
    CDUnknownBlockType _trafficAlertResponse;
    CarLowFuelAlertView *_lowFuelAlertView;
}

@property _Bool dismissingBanner; // @synthesize dismissingBanner=_dismissingBanner;
@property _Bool presentingBanner; // @synthesize presentingBanner=_presentingBanner;
@property(retain, nonatomic) CarLowFuelAlertView *lowFuelAlertView; // @synthesize lowFuelAlertView=_lowFuelAlertView;
@property(copy, nonatomic) CDUnknownBlockType trafficAlertResponse; // @synthesize trafficAlertResponse=_trafficAlertResponse;
@property(retain, nonatomic) TrafficAlertView *trafficAlertView; // @synthesize trafficAlertView=_trafficAlertView;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSLayoutConstraint *bannerViewConstraintToTop; // @synthesize bannerViewConstraintToTop=_bannerViewConstraintToTop;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic, getter=isBannerViewVisible) _Bool bannerViewVisible; // @synthesize bannerViewVisible=_bannerViewVisible;
@property(retain, nonatomic) TopBarAlertView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MNTrafficIncidentAlert *trafficAlert; // @synthesize trafficAlert=_trafficAlert;
@property(nonatomic) __weak id <CarBannerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void).cxx_destruct;
- (void)topBarAlertViewSecondButtonWasTapped:(id)arg1;
- (void)topBarAlertViewButtonWasTapped:(id)arg1;
- (void)_dismissLowFuelAlertWithTimer:(id)arg1;
- (void)_dismissLowFuelAlertWithAction:(long long)arg1;
- (void)presentBannerForSuggestion:(id)arg1;
- (void)_noSearchResultsAlert:(id)arg1;
- (void)searchSessionDidInvalidate:(id)arg1;
- (void)searchSessionDidChangeSearchResults:(id)arg1;
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;
- (void)searchSessionDidFail:(id)arg1;
- (void)searchSessionWillPerformSearch:(id)arg1;
- (_Bool)_alertRequiresOptIn:(id)arg1;
- (void)_sendTrafficRerouteFeedbackForAlert:(id)arg1 actionType:(int)arg2;
- (void)_dismissTrafficAlertWithActionType:(int)arg1;
- (void)_dismissTrafficAlertWithTimer:(id)arg1;
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double bannerHeight;
- (void)dismissBannerViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reallyPresentBannerView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentBannerView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initWithChromeViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
