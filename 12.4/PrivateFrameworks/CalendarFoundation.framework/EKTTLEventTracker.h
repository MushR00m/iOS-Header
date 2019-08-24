//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKTTLEventTracker : NSObject
{
}

+ (id)_travelStateMapping;
+ (id)_etaTypeMapping;
+ (id)_transportTypeMapping;
+ (id)_alertTypeMapping;
+ (id)_boolEnumMapping;
+ (id)directionsEngagedSharedCalendarSupportingTracker;
+ (id)directionsEngagedEventTracker;
+ (id)isTTLEnabledTracker;
+ (id)eventFiredTTLAlertSharedCalendarSupportingTracker;
+ (id)eventFiredTTLAlertTracker;
+ (id)ttlCandidateEventTracker;
+ (id)significantEventTracker;
+ (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(_Bool)arg4 isOnSharedCalendar:(_Bool)arg5;
+ (void)trackIsTTLEnabled:(_Bool)arg1;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(_Bool)arg5 isOnSharedCalendar:(_Bool)arg6;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(_Bool)arg1 isOnSharedCalendar:(_Bool)arg2;
+ (void)trackSignificantEventHasSuggestedLocation:(_Bool)arg1 isOnSharedCalendar:(_Bool)arg2;

@end
