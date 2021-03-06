//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLIndirectArgumentEncoder.h>

#import <MTLSimDriver/MTLArgumentEncoder-Protocol.h>

@class MTLSimBuffer, MTLSimDevice, MTLSimIndirectArgumentBufferLayout, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoder>
{
    unsigned int _reference;
    MTLSimDevice *_device;
    MTLSimIndirectArgumentBufferLayout *_layout;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
    MTLSimBuffer *_argumentBuffer;
    unsigned long long _offset;
}

- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
@property(readonly) unsigned long long alignment;
@property(readonly) unsigned long long encodedLength;
@property(readonly) unsigned int argumentEncoderRef; // @dynamic argumentEncoderRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2 layout:(id)arg3 data:(CDStruct_4b0cc5c4 *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

