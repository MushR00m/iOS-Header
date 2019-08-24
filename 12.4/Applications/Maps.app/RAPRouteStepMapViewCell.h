//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MKMapViewDelegate-Protocol.h"

@class GEOComposedRouteStep, MKMapView, NSString, Route, RouteAnnotationsController;

__attribute__((visibility("hidden")))
@interface RAPRouteStepMapViewCell : UITableViewCell <MKMapViewDelegate>
{
    RouteAnnotationsController *_routeAnnotationsController;
    Route *_route;
    GEOComposedRouteStep *_routeStep;
    MKMapView *_mapView;
}

@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_setupRouteAnnotationsController;
- (id)initWithIdentifier:(id)arg1 route:(id)arg2 routeStep:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
