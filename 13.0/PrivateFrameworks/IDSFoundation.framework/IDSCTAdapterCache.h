//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSCTAdapterCache : NSObject
{
    unsigned long long _dualSIMEnabled;
    unsigned long long _isAnySIMUsable;
    unsigned long long _isAnySIMInserted;
    unsigned long long _supportsIdentification;
    NSArray *_contexts;
}

@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) unsigned long long supportsIdentification; // @synthesize supportsIdentification=_supportsIdentification;
@property(nonatomic) unsigned long long isAnySIMInserted; // @synthesize isAnySIMInserted=_isAnySIMInserted;
@property(nonatomic) unsigned long long isAnySIMUsable; // @synthesize isAnySIMUsable=_isAnySIMUsable;
@property(nonatomic) unsigned long long dualSIMEnabled; // @synthesize dualSIMEnabled=_dualSIMEnabled;
- (void).cxx_destruct;
- (id)debugDescription;

@end

