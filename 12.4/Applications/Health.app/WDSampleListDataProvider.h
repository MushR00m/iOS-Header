//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HKDataMetadataViewControllerDelegate-Protocol.h"
#import "HKSampleTypeUpdateControllerObserver-Protocol.h"
#import "WDDataListViewControllerDataProvider-Protocol.h"

@class HKDisplayType, HKHealthStore, HKSortedSampleArray, NSDictionary, NSPredicate, NSString, WDProfile, _HKFilter;

@interface WDSampleListDataProvider : NSObject <HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider, HKDataMetadataViewControllerDelegate>
{
    NSDictionary *_pagingContexts;
    _HKFilter *_defaultQueryPredicateFilter;
    CDUnknownBlockType _updateCallback;
    NSPredicate *_defaultQueryPredicate;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKSortedSampleArray *_samples;
}

@property(readonly, nonatomic) HKSortedSampleArray *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate; // @synthesize defaultQueryPredicate=_defaultQueryPredicate;
- (void).cxx_destruct;
- (_Bool)_handleObjectsRemoved:(id)arg1;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_callUpdateHandler;
- (id)_UUIDsForSamplesWithEndDate:(id)arg1;
- (void)_handleQueryResultsForSampleType:(id)arg1 results:(id)arg2;
- (void)_requestNextPageOfDataForSampleType:(id)arg1;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)_pagingContextForSampleType:(id)arg1;
- (void)_requestNextPageOfData;
- (id)queryDateForSelectedDate:(id)arg1;
- (void)viewControllerWantsDataIncludingDate:(id)arg1;
- (void)viewControllerIsNearEndOfScreen;
- (_Bool)shareDocumentUsingSample:(id)arg1;
- (id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
- (id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
- (id)defaultPredicateForSampleType:(id)arg1;
- (id)unitController;
- (id)displayTypeController;
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canEditRowAtIndexPath:(id)arg1;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)_resetAllData;
- (void)_stopAllQueries;
- (void)stopCollectingData;
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
@property(readonly, nonatomic) double customEstimatedCellHeight;
@property(readonly, nonatomic) double customCellHeight;
- (void)customizeTableView:(id)arg1;
@property(readonly, nonatomic) _Bool textAdjustsFontSizeToFitWidth;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) long long cellStyle;
@property(readonly) _Bool hasCompleteDataSet;
- (id)_defaultPredicateWithPredicateForType:(id)arg1;
- (id)_samplesSortDescriptor;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly) _Bool calendarDateSelectorVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
