//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMFDigest : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    long long _algorithm;
    NSData *_value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSData *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long algorithm; // @synthesize algorithm=_algorithm;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithAlgorithm:(long long)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end
