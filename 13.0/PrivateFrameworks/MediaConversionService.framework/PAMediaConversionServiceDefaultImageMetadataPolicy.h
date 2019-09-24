//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    float _lossyCompressionQuality;
}

+ (_Bool)supportsSecureCoding;
+ (id)policyWithLossyCompressionQuality:(float)arg1;
+ (id)standardPolicy;
@property float lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLossyCompressionQuality:(float)arg1;
- (id)init;

@end
