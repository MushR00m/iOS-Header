//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionSearchContext-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, UIFocusSystem, UIScreen, _UIFocusMapSnapshotDebugInfo, _UIFocusRegion;
@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext>
{
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    _Bool _didCaptureSnapshot;
    NSMutableArray *_containersBeingAdded;
    NSMutableArray *_containersBeingAddedFocusSystems;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    _Bool _isSearchingRegionsOfInterestContainer;
    NSArray *_regions;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <_UIFocusMapArea> _mapArea;
    _UIFocusRegion *_focusedRegion;
    id <_UIFocusRegionContainer> _regionsContainer;
    id <_UIFocusMapArea> _searchArea;
}

@property(readonly, nonatomic, getter=_searchArea) id <_UIFocusMapArea> searchArea; // @synthesize searchArea=_searchArea;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property(readonly, copy, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, nonatomic) id <_UIFocusMapArea> mapArea; // @synthesize mapArea=_mapArea;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void).cxx_destruct;
- (void)addRegionsInContainers:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegion:(id)arg1;
- (id)searchArea;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property(readonly, nonatomic) __weak UIScreen *screen;
- (void)_capture;
- (id)regionsForOriginalRegion:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *originalRegions;
@property(readonly, copy, nonatomic) NSArray *regions;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2;
- (id)init;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
@property(readonly, nonatomic, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

