//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface VSFailableValueTransformer : NSValueTransformer
{
    NSValueTransformer *_objectValueTransformer;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(retain, nonatomic) NSValueTransformer *objectValueTransformer; // @synthesize objectValueTransformer=_objectValueTransformer;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;

@end
