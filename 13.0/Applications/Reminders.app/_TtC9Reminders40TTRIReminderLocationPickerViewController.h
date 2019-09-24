//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"
#import "TTRIReminderLocationPickerMapDragRadiusViewDelegate-Protocol.h"

@class MISSING_TYPE, MKMapView, UIBarButtonItem, UISegmentedControl, UITableView, UIView;

@interface _TtC9Reminders40TTRIReminderLocationPickerViewController : UIViewController <MKMapViewDelegate, TTRIReminderLocationPickerMapDragRadiusViewDelegate>
{
    MISSING_TYPE *tableView;
    MISSING_TYPE *mapViewContainer;
    MISSING_TYPE *mapView;
    MISSING_TYPE *alarmProximitySegmentedControl;
    MISSING_TYPE *doneButton;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *searchBar;
    MISSING_TYPE *hasDoneInitialLoad;
    MISSING_TYPE *mapDragRadiusView;
    MISSING_TYPE *dragViewCircleColor;
    MISSING_TYPE *dragViewHandleColor;
    MISSING_TYPE *presenter;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)alarmProximitySegmentedControlDidChange:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
@property(nonatomic) __weak UIBarButtonItem *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UISegmentedControl *alarmProximitySegmentedControl; // @synthesize alarmProximitySegmentedControl;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
@property(nonatomic) __weak UIView *mapViewContainer; // @synthesize mapViewContainer;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
- (void)mapDragRadiusView:(id)arg1 didUpdateRegion:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
