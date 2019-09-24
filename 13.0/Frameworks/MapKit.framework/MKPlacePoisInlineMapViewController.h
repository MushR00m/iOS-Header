//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceInlineMapViewController.h>

#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>

@class CLLocation, NSArray, NSString, _MKPlacePoisInlineMapContentView;

__attribute__((visibility("hidden")))
@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware>
{
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
    _Bool _resizableViewsDisabled;
    CLLocation *_location;
}

+ (id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (void).cxx_destruct;
- (void)_handleTapOnMap;
- (id)geoCamera;
- (void)fetchPoisForBrand;
- (void)_updateMap;
- (id)visibleMapItems;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
