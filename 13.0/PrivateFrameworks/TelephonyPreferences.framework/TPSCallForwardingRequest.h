//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSCallClassRequest.h>

@interface TPSCallForwardingRequest : TPSCallClassRequest
{
    int _reason;
}

+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) int reason; // @synthesize reason=_reason;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2;

@end
