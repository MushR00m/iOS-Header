//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_activityType;
    NSArray *_activityDescriptors;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *activityDescriptors; // @synthesize activityDescriptors=_activityDescriptors;
@property(readonly, copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityType:(id)arg1 activityDescriptors:(id)arg2;

@end
