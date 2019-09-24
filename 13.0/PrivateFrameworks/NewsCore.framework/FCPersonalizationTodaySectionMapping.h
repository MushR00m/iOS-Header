//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject
{
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
    NSDictionary *_todaySectionIdentifiersToFRGroupViewExposureTypes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes; // @synthesize todaySectionIdentifiersToFRGroupViewExposureTypes=_todaySectionIdentifiersToFRGroupViewExposureTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBTodaySectionMapping:(id)arg1;

@end
