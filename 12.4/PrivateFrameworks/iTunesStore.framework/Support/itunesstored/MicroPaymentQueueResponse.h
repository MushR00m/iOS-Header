//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSLock, NSMutableArray, NSNumber;

@interface MicroPaymentQueueResponse : NSObject
{
    NSData *_appReceipt;
    NSLock *_lock;
    NSMutableArray *_payments;
    NSMutableArray *_rangesToLoad;
    long long _requestType;
    long long _serverPaymentCount;
    _Bool _shouldTriggerQueueCheck;
    NSNumber *_userIdentifier;
}

- (_Bool)_ntsLoadFromPropertyList:(id)arg1;
- (id)_dsidFromDictionary:(id)arg1;
- (id)_copyPaymentsFromDictionary:(id)arg1;
- (id)_copyAppReceiptFromDictionary:(id)arg1;
@property(copy) NSNumber *userIdentifier;
@property _Bool shouldTriggerQueueCheck;
- (void)setRangesToLoad:(id)arg1;
@property(copy) NSArray *payments;
@property long long serverPaymentCount;
@property(readonly) long long requestType;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *appReceipt;
- (_Bool)loadFromPropertyList:(id)arg1;
- (void)appendResponse:(id)arg1;
- (void)dealloc;
- (id)initWithRequestType:(long long)arg1;

@end
