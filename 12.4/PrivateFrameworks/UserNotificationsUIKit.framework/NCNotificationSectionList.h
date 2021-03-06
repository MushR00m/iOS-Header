//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListSectionDelegate-Protocol.h>

@class NCNotificationHiddenRequestsList, NSString;
@protocol NCNotificationSectionListDelegate;

@interface NCNotificationSectionList : NSObject <BSDescriptionProviding, NCNotificationListSectionDelegate>
{
    id <NCNotificationSectionListDelegate> _delegate;
    NCNotificationHiddenRequestsList *_hiddenRequestsList;
}

@property(retain, nonatomic) NCNotificationHiddenRequestsList *hiddenRequestsList; // @synthesize hiddenRequestsList=_hiddenRequestsList;
@property(nonatomic) __weak id <NCNotificationSectionListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeSection:(id)arg1;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (unsigned long long)_currentIndexForSection:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_allNotificationRequests;
- (id)_allSections;
- (id)notificationListSection:(id)arg1 coalescingIdentifierForNotificationRequest:(id)arg2;
- (_Bool)notificationListSection:(id)arg1 shouldInsertForExpandedStackNotificationRequest:(id)arg2;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)indexPathForNotificationListItem:(id)arg1;
- (id)notificationListItemAtIndexPath:(id)arg1;
- (id)removeNotificationListItem:(id)arg1;
- (id)insertNotificationListItem:(id)arg1 atIndexPath:(id)arg2;
- (id)allNotificationRequests;
- (_Bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)dateForSectionIdentifier:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (id)indexPathForNotificationRequest:(id)arg1;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)removeNotificationRequest:(id)arg1;
- (id)modifyNotificationRequest:(id)arg1;
- (id)insertNotificationRequest:(id)arg1;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)titleForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long sectionCount;
@property(readonly, copy) NSString *debugDescription;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

