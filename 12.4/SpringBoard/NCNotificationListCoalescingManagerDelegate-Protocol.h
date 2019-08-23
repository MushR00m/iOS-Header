//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NCNotificationListCoalescingManager, NCNotificationRequest, NSSet;

@protocol NCNotificationListCoalescingManagerDelegate
- (_Bool)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 shouldCoalesceBySectionNotificationRequest:(NCNotificationRequest *)arg2;
- (_Bool)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 isExpandedCoalescedBundleForNotificationRequest:(NCNotificationRequest *)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsClearingFromIncomingSectionNotificationRequests:(NSSet *)arg2;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsReloadingNotificationRequests:(NSSet *)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4 clearCache:(_Bool)arg5;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsUpdatingNotificationRequests:(NSSet *)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsRemovingNotificationRequests:(NSSet *)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsRemovingNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsInsertingNotificationRequests:(NSSet *)arg2 inSection:(unsigned long long)arg3 delayAnimation:(_Bool)arg4;
- (void)notificationListCoalescingManager:(NCNotificationListCoalescingManager *)arg1 requestsInsertingNotificationRequest:(NCNotificationRequest *)arg2;
@end
