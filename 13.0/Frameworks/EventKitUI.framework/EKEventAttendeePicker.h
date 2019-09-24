//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <EventKitUI/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <EventKitUI/CNContactPickerDelegate-Protocol.h>

@class CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, EKEvent, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, UIKeyboard, UIScrollView, UITableView;
@protocol EKEventAttendeePickerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttendeePicker : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNContactPickerDelegate>
{
    NSArray *_recipients;
    CNComposeRecipientTextView *_composeRecipientView;
    UIScrollView *_recipientScrollView;
    UITableView *_searchResultsView;
    _Bool _showingSearchField;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    _Bool _ABAccessDenied;
    _Bool _shouldReenableAutomaticKeyboard;
    struct CGRect _initialFrame;
    NSOperationQueue *_availabilityQueue;
    NSMutableDictionary *_recipientAddressesToRecipients;
    EKEvent *_event;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    _Bool _suppressAvailabilityRequests;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CNAutocompleteSearchManager *_searchManager;
    NSMutableArray *_searchResults;
    CNAutocompleteResultsTableViewController *_autocompleteTableViewController;
    CNAutocompleteFetchContext *_fetchContext;
    _Bool _hasChanges;
    NSString *_searchAccountID;
    id <EKEventAttendeePickerDelegate> _addressValidationDelegate;
}

+ (_Bool)_participantHasResponded:(id)arg1;
+ (id)_addressForRecipient:(id)arg1;
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) __weak id <EKEventAttendeePickerDelegate> addressValidationDelegate; // @synthesize addressValidationDelegate=_addressValidationDelegate;
@property(copy, nonatomic) NSString *searchAccountID; // @synthesize searchAccountID=_searchAccountID;
- (void).cxx_destruct;
- (Class)_CNContactPickerViewController;
- (Class)_CNContactViewController;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_updateFetchContextChosenAddresses;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
@property(readonly, nonatomic) _Bool showAvailability;
- (id)peoplePickerPrompt;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)_adjustLayoutOfSubviews;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)searchForCorecipients;
- (void)searchWithText:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)_refreshSearchResults;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForCorecipients;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)_searchManager;
- (void)scrollComposeViewToEnd;
- (_Bool)_zeroKeyworkSearchEnabled;
- (double)_maxScrollerHeight;
- (void)_showSearchResultsView;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(_Bool)arg1;
- (id)_searchResultsView;
- (void)_copyRecipientsFromComposeView;
- (void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (void)_setRecipientsOnComposeView;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) NSString *remainingText;
- (void)commitRemainingText;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 calendar:(id)arg3 overriddenEventStartDate:(id)arg4 overriddenEventEndDate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
