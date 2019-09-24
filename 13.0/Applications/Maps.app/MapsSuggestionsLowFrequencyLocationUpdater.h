//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsSuggestionsLocationUpdater-Protocol.h"

@class CLLocation, NSString, NSTimer, ObserverHashTable, SingleLocationUpdate;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsLowFrequencyLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>
{
    SingleLocationUpdate *_locationUpdate;
    NSTimer *_nextLocationUpdateTimer;
    ObserverHashTable *_observers;
    CLLocation *_cachedLocation;
}

- (void).cxx_destruct;
- (void)_handleUpdatedLocation:(id)arg1 error:(id)arg2;
- (id)_cachedLocation;
- (void)_requestLocation;
- (void)_startOrStopIfNeeded;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
