//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProviderDuet.h>

@interface RTDataProviderStark : RTDataProviderDuet
{
}

- (id)supportedEventClasses;
- (_Bool)supportsEventClass:(Class)arg1;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventStreams;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;

@end
