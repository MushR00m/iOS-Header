//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCXPCActivityController : NSObject
{
}

+ (id)sharedInstance;
- (void)_performMetadataRefreshForActivity:(id)arg1;
- (id)_activityCriteriaWithFrequency:(double)arg1;
- (void)_registerActivityWithInterval:(double)arg1;
- (void)updateActivityScheduleWithAsset:(id)arg1;
- (void)start;

@end
