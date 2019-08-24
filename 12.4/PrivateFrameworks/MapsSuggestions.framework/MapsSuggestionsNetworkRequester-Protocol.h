//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOAutomobileOptions, GEOComposedWaypoint, GEOLocation, NSString;
@protocol GEOMapItem;

@protocol MapsSuggestionsNetworkRequester <MapsSuggestionsObject>
- (_Bool)ETAsFromHereWaypoint:(GEOComposedWaypoint *)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(GEOAutomobileOptions *)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (_Bool)composedWaypointForAddressString:(NSString *)arg1 completion:(void (^)(GEOComposedWaypoint *, NSError *))arg2;
- (_Bool)composedWaypointForLocation:(GEOLocation *)arg1 completion:(void (^)(GEOComposedWaypoint *, NSError *))arg2;
- (_Bool)composedWaypointForMapItem:(id <GEOMapItem>)arg1 completion:(void (^)(GEOComposedWaypoint *, NSError *))arg2;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(void (^)(struct NSArray *, NSError *))arg2;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(void (^)(struct NSArray *, NSError *))arg2;
- (_Bool)forwardGeocodeAddressString:(NSString *)arg1 completion:(void (^)(struct NSArray *, NSError *))arg2;
@end
