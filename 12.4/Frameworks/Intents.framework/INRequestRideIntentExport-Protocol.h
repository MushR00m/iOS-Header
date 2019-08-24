//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INPaymentMethod, INSpeakableString, NSNumber;

@protocol INRequestRideIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INDateComponentsRange *scheduledPickupTime;
@property(copy, nonatomic) INPaymentMethod *paymentMethod;
@property(copy, nonatomic) NSNumber *partySize;
@property(copy, nonatomic) INSpeakableString *rideOptionName;
@property(copy, nonatomic) CLPlacemark *dropOffLocation;
@property(copy, nonatomic) CLPlacemark *pickupLocation;
- (id)init;
@end
