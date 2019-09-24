//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuyMicroPaymentOperationDelegate-Protocol.h"

@class LoadCompletedMicroPaymentsOperation, LoadMicroPaymentQueuesOperation, NSArray, NSManagedObjectID, NSMutableSet, NSString, StoreKitClientIdentity, XPCClient;
@protocol OS_dispatch_queue;

@interface StoreKitClient : NSObject <BuyMicroPaymentOperationDelegate>
{
    XPCClient *_client;
    StoreKitClientIdentity *_clientIdentity;
    NSManagedObjectID *_databaseClientObjectID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    long long _lastRefreshReason;
    LoadMicroPaymentQueuesOperation *_loadQueueOperation;
    LoadCompletedMicroPaymentsOperation *_restoreOperation;
    long long _state;
    NSMutableSet *_transientFailedIDs;
}

- (_Bool)buyMicroPaymentOperation:(id)arg1 shouldContinueWithNewStorefront:(id)arg2;
- (void)_showPaymentsRestrictedAlert;
- (void)_setClientState:(long long)arg1;
- (void)_sendRestoreCompletedWithError:(id)arg1;
- (void)_sendPaymentsUpdated:(id)arg1;
- (void)_sendPaymentsRemoved:(id)arg1;
- (void)_sendPaymentsAdded:(id)arg1;
- (void)_sendMessage:(long long)arg1 forPayments:(id)arg2;
- (void)_sendMergeResults:(id)arg1;
- (void)_sendFinishRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendDownloadChangesets:(id)arg1;
- (void)_sendBuyRequestForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_showPrivacyPromptForPayment:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_reloadClientProperties;
- (void)_refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;
- (void)_mergeBatchResponse:(id)arg1 forRestoreOperation:(id)arg2;
- (id)_lastQueueCheckDate;
- (_Bool)_isPaymentRestricted;
- (void)_finishRestoreOperation:(id)arg1;
- (void)_finishLoadQueueOperation:(id)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (id)_copyDownloadsForDownloadIDs:(id)arg1 properties:(id)arg2 context:(id)arg3;
- (void)_completeFinishRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_completeBuyRequest:(id)arg1 forPaymentID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_copyAccountIDsForRefreshReason:(long long)arg1;
- (id)_clientIdentity;
- (id)_clientIdentifier;
- (void)_cancelDownloadsForPayments:(id)arg1;
- (void)_cancelDownloadsForDownloadIDs:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (_Bool)finishPaymentWithMessage:(id)arg1;
@property(retain) XPCClient *XPCClient;
- (void)sendPurchaseIntents:(id)arg1 forApp:(id)arg2;
- (void)updatePaymentWithObjectID:(id)arg1 purchaseResponse:(id)arg2;
- (void)startPaymentWithObjectID:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startDownloadsWithIDs:(id)arg1;
- (void)setPaymentQueueClient:(id)arg1;
- (void)sendPaymentsUpdatedWithObjectIDs:(id)arg1;
- (void)sendDownloadChangesets:(id)arg1;
- (void)resumeDownloadsWithIDs:(id)arg1;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (_Bool)removePaymentWithObjectID:(id)arg1;
- (void)refreshFromServerWithReason:(long long)arg1 accountIdentifier:(id)arg2;
- (void)refreshFromServerWithReason:(long long)arg1;
- (void)pauseDownloadsWithIDs:(id)arg1;
@property(readonly) NSArray *openTransactions;
@property(readonly) NSManagedObjectID *microPaymentClientID;
@property(readonly, getter=isSandboxed) _Bool sandboxed;
- (_Bool)isEqualToXPCConnection:(id)arg1 paymentQueueClient:(id)arg2;
@property(readonly) NSManagedObjectID *firstReadyPaymentID;
- (void)createMicroPaymentClientIfNecessary;
@property(readonly) long long clientState;
@property(readonly) NSString *clientIdentifier;
- (void)cancelDownloadsWithIDs:(id)arg1;
- (_Bool)addPaymentTransaction:(id)arg1 withOptions:(id)arg2;
- (void)dealloc;
- (id)initWithXPCClient:(id)arg1;
- (id)initWithMicroPaymentClientID:(id)arg1;
- (id)init;
- (id)_initStoreKitClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
