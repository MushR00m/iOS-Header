//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessoryBrowsingManager, NSMutableSet;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
    CDUnknownBlockType _filter;
    NSMutableSet *_discoveredAccessoryItems;
}

@property(retain, nonatomic) NSMutableSet *discoveredAccessoryItems; // @synthesize discoveredAccessoryItems=_discoveredAccessoryItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithAccessoryBrowsingManager:(id)arg1;
- (id)init;

@end
