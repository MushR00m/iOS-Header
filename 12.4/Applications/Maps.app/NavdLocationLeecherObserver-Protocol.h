//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLLocation, NSError, NavdLocationLeecher;

@protocol NavdLocationLeecherObserver
- (void)locationLeecher:(NavdLocationLeecher *)arg1 errorLeechingLocation:(NSError *)arg2;
- (void)locationLeecher:(NavdLocationLeecher *)arg1 receivedLocation:(CLLocation *)arg2;
@end
