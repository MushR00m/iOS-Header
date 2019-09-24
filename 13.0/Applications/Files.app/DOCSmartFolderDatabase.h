//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSURL, PQLConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DOCSmartFolderDatabase : NSObject
{
    NSURL *_url;
    PQLConnection *_connection;
    NSObject<OS_dispatch_source> *_watcher;
    BKSProcessAssertion *_processAssertion;
    NSObject<OS_dispatch_queue> *_workingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watcher; // @synthesize watcher=_watcher;
@property(readonly, nonatomic) PQLConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (void)_resetDatabaseOnItsQueue:(id)arg1;
- (void)close;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (void)_cleanUpAfterClose;
- (id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id *)arg2;
- (void)_setUpDatabaseWatcher:(id)arg1;
- (id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id *)arg2;
- (id)_openConnectionToDatabaseAtURL:(id)arg1;
- (void)open;
- (id)_existingFiletypeHitSimilarToHit:(id)arg1;
- (void)_registerSavingFileType:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5;
- (void)_registerSavingFile:(id)arg1 inFolder:(id)arg2 atDate:(id)arg3 withFrecencyScore:(double)arg4 rowId:(id)arg5;
- (void)deleteFolderWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (id)previousEventsForAppBundleIdentifier:(id)arg1 excluding:(id)arg2;
- (id)_existingEventSimilarToEvent:(id)arg1;
- (void)registerEvent:(id)arg1;
- (id)previousHits;
- (id)_existingFileNameHitsSimilarToHit:(id)arg1;
- (void)_registerHit:(id)arg1;
- (void)registerFilenameHit:(id)arg1 fileTypeHit:(id)arg2 smartScoreBlock:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
