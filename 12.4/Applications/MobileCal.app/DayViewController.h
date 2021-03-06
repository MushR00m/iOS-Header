//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MainViewController.h"

#import "DayNavigationViewControllerDelegate-Protocol.h"
#import "EKDayViewControllerDataSource-Protocol.h"
#import "EKDayViewControllerDelegate-Protocol.h"
#import "EKEventEditViewDelegate-Protocol.h"
#import "EKEventViewDelegatePrivate-Protocol.h"

@class CalendarModel, DayNavigationViewController, DayTwoPartLabel, EKCalendarDate, EKDayViewController, NSString, UILabel, UIView;

@interface DayViewController : MainViewController <DayNavigationViewControllerDelegate, EKDayViewControllerDataSource, EKEventEditViewDelegate, EKDayViewControllerDelegate, EKEventViewDelegatePrivate>
{
    NSString *_scrollToEventIdentifier;
    EKCalendarDate *_day;
    DayNavigationViewController *_scrubberControllerNeue;
    EKDayViewController *_dayViewController;
    _Bool _needsReload;
    NSString *_previousNavigationTitle;
    _Bool _editorDismissedFromDelete;
    _Bool _hasReloadedWithData;
    _Bool _hasEndedExtendedLaunch;
    _Bool _visible;
    _Bool _shouldRespondToApplicationDidBecomeActiveStateChange;
    CalendarModel *_model;
}

@property(readonly, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool shouldRespondToApplicationDidBecomeActiveStateChange; // @synthesize shouldRespondToApplicationDidBecomeActiveStateChange=_shouldRespondToApplicationDidBecomeActiveStateChange;
@property(readonly, nonatomic) EKCalendarDate *day; // @synthesize day=_day;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (id)cellFactory;
- (void)endedHorizontalDeceleration;
- (void)beganHorizontalDeceleration;
- (void)finishedPinchingDayView;
- (void)isPinchingDayView;
- (void)didBeginMovingOccurrenceWithGesture;
- (_Bool)showDetachAlertOnDraggingGestureEnd;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (void)wasBlockedFromChangingDate;
- (_Bool)allowChangingDate;
- (_Bool)showWeekdayLabel;
- (void)handleGestureCommittingOccurrence:(id)arg1;
- (_Bool)shouldHandleGestureCommits;
- (void)displayedOccurrencesChanged;
- (void)dataReloaded;
- (void)showEditViewController:(id)arg1;
- (id)showDetailViewControllerForEvent:(id)arg1 context:(struct NSDictionary *)arg2 animated:(_Bool)arg3;
- (void)dayViewDidChangeSelectedDate:(id)arg1;
- (void)scrubberDidChangeSelectedDate:(id)arg1;
- (void)didShowEventWithoutShowingDetails:(id)arg1;
- (_Bool)didSelectEvent:(id)arg1;
- (id)gestureController;
- (id)dayView;
- (id)dayScrubberController;
- (void)_scrollToEvent:(id)arg1 animated:(_Bool)arg2;
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
- (void)_receivedSelectedDateChangeNotification:(id)arg1;
- (void)_significantTimeChanged:(id)arg1;
- (void)_occurrencesChanged:(id)arg1;
- (void)dayViewController:(id)arg1 requestsShowEvent:(id)arg2 showDetails:(_Bool)arg3;
- (void)dayViewController:(id)arg1 requestsPresentationOfViewControllerForGestures:(id)arg2;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
- (void)dayViewControllerIsPinchingDayView:(id)arg1;
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
- (void)dayViewControllerDidReloadData:(id)arg1;
- (void)dayViewControllerDidTapEmptySpace:(id)arg1;
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;
- (void)dayViewControllerDidEndDecelerating:(id)arg1;
- (void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
- (void)dayViewControllerDidEndScrolling:(id)arg1;
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3;
- (void)eventViewControllerWillDisappear:(id)arg1;
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(struct NSDictionary *)arg4;
- (void)_showDetailForEvent:(id)arg1 animated:(_Bool)arg2 context:(struct NSDictionary *)arg3;
- (void)dayNavigationViewControllerFailedToChangeDate;
- (_Bool)dayNavigationViewControllerAllowedToChangeSelectedDate;
- (void)dayNavigationViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)presentDetailsForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 context:(struct NSDictionary *)arg4;
- (void)reloadData;
@property(readonly, nonatomic) UILabel *weekNumberLabel;
@property(readonly, nonatomic) DayTwoPartLabel *weekdayLabel;
@property(readonly, nonatomic) UIView *timedDayViewContentGrid;
@property(readonly, nonatomic) UIView *allDayView;
@property(readonly, nonatomic) long long scrubberFirstVisibleDayOffsetFromSelectedDay;
@property(readonly, nonatomic) struct CGRect scrubberFrame;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) double firstCellInset;
- (void)extendedLaunchCompleted;
- (_Bool)handlesNotifyOnExtendedLaunchCompletion;
- (_Bool)currentlyEditingEventsWithGestures;
- (id)bestDateForNewEvent;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4 context:(struct NSDictionary *)arg5;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 context:(struct NSDictionary *)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 context:(struct NSDictionary *)arg3;
- (void)showNowAnimated:(_Bool)arg1;
- (void)_showNowWhenSameDaySelected;
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isTodayVisible;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (void)updatePalette:(id)arg1;
- (_Bool)allowsOverriddenToolbarItems;
- (_Bool)allowsOverriddenRightNavigationBarItems;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithDay:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

