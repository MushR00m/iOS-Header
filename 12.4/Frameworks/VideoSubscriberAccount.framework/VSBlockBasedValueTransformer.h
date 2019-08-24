//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface VSBlockBasedValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _transformationBlock;
    CDUnknownBlockType _reverseTransformationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType reverseTransformationBlock; // @synthesize reverseTransformationBlock=_reverseTransformationBlock;
@property(copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end
