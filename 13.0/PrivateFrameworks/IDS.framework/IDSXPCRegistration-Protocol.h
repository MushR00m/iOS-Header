//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSPhoneSubscription, NSArray;

@protocol IDSXPCRegistration <NSObject>
- (void)constructRAResponseDictionaryForServices:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)setSelectedSubscriptions:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)unselectSubscription:(IDSPhoneSubscription *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)selectSubscription:(IDSPhoneSubscription *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)requestSelectedSubscriptionsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end
