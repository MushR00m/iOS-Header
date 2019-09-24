//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PLJournalManagerCore : NSObject
{
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}

+ (_Bool)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)populateRelationshipKeyPathsForPrefetching:(id)arg1 forPayloadClass:(Class)arg2;
+ (id)_populateRelationshipKeyPathsForPrefetching:(id)arg1 currentKeyPath:(id)arg2 usingModelProperties:(id)arg3;
+ (void)validatePayloadClassesForManagedObjectModel:(id)arg1;
+ (id)payloadClasses;
- (void).cxx_destruct;
- (_Bool)saveHistoryToken:(id)arg1 error:(id *)arg2;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end
