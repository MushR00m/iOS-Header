//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject
{
    NSArray *_staticProperties;
    NSArray *_liveProperties;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *liveProperties; // @synthesize liveProperties=_liveProperties;
@property(retain, nonatomic) NSArray *staticProperties; // @synthesize staticProperties=_staticProperties;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
