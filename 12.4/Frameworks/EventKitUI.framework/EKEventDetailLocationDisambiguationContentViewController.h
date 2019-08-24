//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/MKMapViewDelegate-Protocol.h>
#import <EventKitUI/UISearchBarDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKStructuredLocation, MKCircleRenderer, MKMapView, MKPointAnnotation, NSCache, NSMutableArray, NSObject, NSSet, NSString, UISearchBar, UITableView, UIView;
@protocol OS_dispatch_queue;

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    EKStructuredLocation *_location;
    NSMutableArray *_pois;
    CDUnknownBlockType _completionBlock;
    UISearchBar *_searchBar;
    MKMapView *_mapView;
    UIView *_separatorLine;
    UITableView *_tableView;
    MKPointAnnotation *_pin;
    MKCircleRenderer *_circleRenderer;
    _Bool _textChanged;
    _Bool _geocoding;
    _Bool _done;
    NSObject<OS_dispatch_queue> *_iconRenderQueue;
    NSCache *_iconCache;
    _Bool _rowSelectionInitialized;
    unsigned long long _currentLayoutParadigm;
    NSSet *_tallConstraints;
    NSSet *_iPadConstraints;
    NSSet *_splitConstraints;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)_deselectCircle;
- (void)_selectCircle;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)_shouldEnableAddButton;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateMapRegion;
- (void)_selectRow:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_constraintsForParadigm:(unsigned long long)arg1;
- (void)_createConstraints;
- (id)initWithLocation:(id)arg1 pois:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
