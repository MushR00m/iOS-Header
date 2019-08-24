//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject>
{
    unsigned long long _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedScopedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}

- (void).cxx_destruct;
- (id)status;
- (id)recordForStatusWithScopedIdentifier:(id)arg1;
- (id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1;
- (void)_fillStatus:(id)arg1;
- (void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(_Bool)arg4 isInIDMapping:(_Bool)arg5;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)acknowledgeChangedStatuses:(id)arg1 error:(id *)arg2;
- (id)statusesForRecordsWithIdentifiers:(id)arg1;
- (id)statusesForRecordsWithScopedIdentifiers:(id)arg1;
- (void)resetAllTransientStatuses;
- (void)resetTransientStatusesWithScopeIdentifier:(id)arg1;
- (void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2;
- (id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2;
- (id)statusChanges;
- (_Bool)notifyStatusForRecordHasChanged:(id)arg1 persist:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool hasStatusChanges;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
