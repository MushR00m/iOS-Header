//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthMenstrualCyclesDaemon/NSObject-Protocol.h>

@class HKMCSettingsManager;

@protocol HKMCSettingsManagerObserver <NSObject>

@optional
- (void)settingsManagerDidUpdateHiddenDisplayTypes:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateAnalysisSettings:(HKMCSettingsManager *)arg1;
@end

