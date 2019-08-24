//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUnitConverter.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>
{
    double _coefficient;
    double _constant;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double constant; // @synthesize constant=_constant;
@property(readonly) double coefficient; // @synthesize coefficient=_coefficient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (id)initWithCoefficient:(double)arg1 constant:(double)arg2;
- (id)initWithCoefficient:(double)arg1;

@end
