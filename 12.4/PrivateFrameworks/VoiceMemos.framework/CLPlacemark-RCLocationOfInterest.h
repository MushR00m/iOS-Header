//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLPlacemark.h>

#import <VoiceMemos/RCLocationOfInterest-Protocol.h>

@class CLLocation, NSString;
@protocol GEOMapItem;

@interface CLPlacemark (RCLocationOfInterest) <RCLocationOfInterest>
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double uncertainty;
@property(nonatomic) unsigned long long RCRank;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly) Class superclass;
@end

