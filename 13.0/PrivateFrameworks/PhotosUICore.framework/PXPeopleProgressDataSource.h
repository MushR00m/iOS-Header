//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    _Bool _isFaceProcessingComplete;
    _Bool _countCacheValid;
    _Bool _faceProcessingComplete;
    unsigned long long _cachedUnlockValue;
    unsigned long long _pendingCount;
    unsigned long long _processedCount;
    unsigned long long _totalCount;
    PHFetchResult *_homeResult;
    PHFetchResult *_verifyResult;
    NSObject<OS_dispatch_queue> *_scanningProgressQueue;
    NSObject<OS_dispatch_queue> *_userInteractiveQueue;
}

@property(nonatomic, getter=isFaceProcessingComplete) _Bool faceProcessingComplete; // @synthesize faceProcessingComplete=_faceProcessingComplete;
@property(readonly, nonatomic) _Bool isFaceProcessingComplete; // @synthesize isFaceProcessingComplete=_isFaceProcessingComplete;
@property(getter=isCountCacheValid) _Bool countCacheValid; // @synthesize countCacheValid=_countCacheValid;
@property(readonly) NSObject<OS_dispatch_queue> *userInteractiveQueue; // @synthesize userInteractiveQueue=_userInteractiveQueue;
@property(readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue; // @synthesize scanningProgressQueue=_scanningProgressQueue;
@property(retain, nonatomic) PHFetchResult *verifyResult; // @synthesize verifyResult=_verifyResult;
@property(retain, nonatomic) PHFetchResult *homeResult; // @synthesize homeResult=_homeResult;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long processedCount; // @synthesize processedCount=_processedCount;
@property(nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(nonatomic) unsigned long long cachedUnlockValue; // @synthesize cachedUnlockValue=_cachedUnlockValue;
- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (double)_progressFromWorkerDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isPersonPromoterDone;
@property(readonly, nonatomic) unsigned long long totalAssetCount;
@property(readonly, nonatomic) unsigned long long homeMembersCount;
@property(readonly, nonatomic) unsigned long long processedAssetCount;
@property(readonly, nonatomic) unsigned long long pendingAssetCount;
- (void)asyncPeopleScanningProgress:(CDUnknownBlockType)arg1;
- (void)syncPeopleScanningProgress:(CDUnknownBlockType)arg1;
- (void)updateProgressIfNeededWithWorkBlock:(CDUnknownBlockType)arg1;
- (void)loadQueryData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
