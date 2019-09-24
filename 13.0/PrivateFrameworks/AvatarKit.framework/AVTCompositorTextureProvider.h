//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNMaterialPropertyTextureProvider-Protocol.h>

@class AVTCompositorPipeline, AVTCompositor_GPU, AVTMemoji, NSString;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider>
{
    AVTMemoji *_memoji;
    AVTCompositor_GPU *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    _Bool _skinIsDirty;
    long long _componentDirtyMask;
}

- (void).cxx_destruct;
- (void)renderToTexture:(id)arg1 computeCommandHandler:(CDUnknownBlockType)arg2 blitCommandHandler:(CDUnknownBlockType)arg3 helper:(id)arg4;
- (id)newTextureForDevice:(id)arg1;
- (void)componentDidChangeForType:(long long)arg1;
- (void)skinColorDidChange;
- (void)dealloc;
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
