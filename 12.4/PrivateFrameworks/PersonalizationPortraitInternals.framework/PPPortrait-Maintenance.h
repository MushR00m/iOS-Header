//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPPortrait.h>

@interface PPPortrait (Maintenance)
+ (_Bool)_logDailyMetricsWithError:(id *)arg1;
+ (void)_registerRTCSendLogs;
+ (void)_registerPeriodicMetrics;
+ (void)_registerKnowledgeStoreCleanup;
+ (void)_registerTTLBasedDonationCleanup;
+ (void)_registerMapsImport;
+ (void)_registerCoreRoutineImport;
+ (void)registerMaintenanceTasksInternal;
@end
