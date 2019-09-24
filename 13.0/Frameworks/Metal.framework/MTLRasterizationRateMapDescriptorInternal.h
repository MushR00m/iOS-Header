//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRasterizationRateMapDescriptor.h>

#import <Metal/MTLRasterizationRateMapDescriptorSPI-Protocol.h>

@class MTLRasterizationRateLayerArrayInternal, NSString;

__attribute__((visibility("hidden")))
@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI>
{
    CDStruct_da2e99ad _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *>> _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

- (void)setLabel:(id)arg1;
- (id)label;
- (void)setScreenSize:(CDStruct_da2e99ad)arg1;
- (CDStruct_da2e99ad)screenSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (const id *)layerPointer:(unsigned long long *)arg1;
- (unsigned long long)layerCount;
- (id)layers;
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)layerAtIndex:(unsigned long long)arg1;
- (oneway void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScreenSize:(CDStruct_da2e99ad)arg1;
- (id)init;

@end
