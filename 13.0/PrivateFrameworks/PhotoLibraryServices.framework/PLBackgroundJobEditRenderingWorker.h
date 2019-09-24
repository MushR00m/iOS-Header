//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker
{
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)arg1;
- (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (_Bool)hasPendingJobs;
- (void)dealloc;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
