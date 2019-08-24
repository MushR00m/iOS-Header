//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding>
{
    WFLocation *_location;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) WFLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 location:(id)arg2;

@end
