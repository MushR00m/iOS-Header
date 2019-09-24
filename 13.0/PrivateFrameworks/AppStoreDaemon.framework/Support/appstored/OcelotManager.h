//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSNumber, NSObject, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface OcelotManager : AppUsageBaseManager
{
    int _appStoreCacheUpdatedNotificationToken;
    NSNumber *_cachedSubscribedAccountID;
    NSNumber *_cachedSubscribedState;
    NSString *_cachedSubscribedStateString;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_hardwareFamily;
    NSString *_hardwareModel;
    _Bool _isRetailDemoMode;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_distNotificationQueue;
    NSString *_os;
    NSString *_osBuild;
    TaskQueue *_taskQueue;
    NSObject<OS_dispatch_queue> *_upsellQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_weekStartDateStringForDate:(id)arg1;
- (void)_updateLaunchdWakeupFileForMacOS;
- (void)_topLaunchesForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_targetBundleIDs;
- (id)_subscriptionStateForEntitlement:(id)arg1;
- (id)_subscriptionState;
- (void)_sbsyncIfNeeded;
- (void)_resetWithReason:(id)arg1 resetActivity:(_Bool)arg2 context:(id)arg3;
- (void)_resetAccountWithReason:(id)arg1;
- (void)_resetDB:(id)arg1;
- (void)_recordLaunchEventsForContext:(id)arg1;
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 context:(id)arg4;
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)qualifiedEventsForWeekeStartingWithDate:(id)arg1 context:(id)arg2;
- (id)_payoutEvents:(id)arg1;
- (void)_postMetrics:(id)arg1;
- (void)_logOcelotAppLaunchability;
- (void)_initializeAcountState;
- (void)_handleAppSubscriptionsDidChangeNotification;
- (void)_handleRepairBundleIDNotification:(id)arg1;
- (void)_handleAppleIDDidChangeNotification:(id)arg1;
- (_Bool)_isOceotSubscribed:(_Bool)arg1;
- (id)_getAppStoreSubscriptionEntitlement;
- (void)_getAppEventsWithAppUsageType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_flushMetricsWithReason:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_ensureDeviceIDIsValid;
- (id)_deRezzedDateForLaunchDate:(id)arg1;
- (id)_createLaunchMetricsEventForAppEvent:(id)arg1 context:(id)arg2;
- (void)_cleanup:(id)arg1 reason:(id)arg2;
- (id)_allOcelotAppEvents:(id)arg1;
- (void)refreshAppMetadata;
- (_Bool)isCandidateAppBundleID:(id)arg1;
- (_Bool)isCandidateAppProxy:(id)arg1;
- (void)decorateMetricsEvent:(id)arg1 appMetadata:(id)arg2 context:(id)arg3;
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;
- (void)topAppsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showOcelotUpsellForItemID:(id)arg1 relaunchOptions:(id)arg2;
@property(readonly, nonatomic) _Bool shouldPostOcelotMetrics;
- (void)setupWithReason:(id)arg1;
- (void)sendSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sbsyncWithDuration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sbsyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetPayoutForDuetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordDeletedApps:(id)arg1;
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isSubscribedToOcelot:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSubscribedToOcelot;
- (void)getAppSummaryEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppPayoutEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
