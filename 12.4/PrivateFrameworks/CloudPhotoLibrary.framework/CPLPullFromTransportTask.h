//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask
{
    CPLScopeFilter *_scopeFilter;
}

@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;

@end

