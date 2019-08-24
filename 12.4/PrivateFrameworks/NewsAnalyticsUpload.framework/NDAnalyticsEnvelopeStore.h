//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsEnvelopeStore-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, NSString;
@protocol NDAnalyticsEnvelopeStoreObserver;

@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore>
{
    id <NDAnalyticsEnvelopeStoreObserver> _observer;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
}

@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
- (void).cxx_destruct;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg1;
- (void)_deleteEnvelopesForKeysFromStore:(id)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)envelopesForEntries:(id)arg1;
- (id)sizesOfEnvelopesWithEntries:(id)arg1;
- (id)allEntriesWithHoldToken:(id *)arg1;
@property(nonatomic) __weak id <NDAnalyticsEnvelopeStoreObserver> observer; // @synthesize observer=_observer;
- (void)enableFlushing;
- (void)deleteEnvelopesForEntries:(id)arg1;
- (void)copyEnvelopes:(id)arg1;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
