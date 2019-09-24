//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

#import <TelephonyPreferences/TPSTelephonySubscription-Protocol.h>

@class NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext (TelephonyPreferences) <TPSTelephonySubscription>
+ (id)telephonyClient;
@property(readonly, copy, nonatomic) NSString *tps_localizedPhoneNumber;
@property(readonly, copy, nonatomic) NSString *tps_localizedLabel;
@property(readonly, copy, nonatomic) NSString *tps_isoCountryCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uuid;
@end
