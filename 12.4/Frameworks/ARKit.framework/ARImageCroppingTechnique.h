//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@interface ARImageCroppingTechnique : ARTechnique
{
    struct OpaqueVTPixelTransferSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_croppedPixelBufferPool;
    struct CGRect _cropRect;
    struct CGSize _croppedImageSize;
}

@property(readonly, nonatomic) struct CGSize croppedImageSize; // @synthesize croppedImageSize=_croppedImageSize;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithCroppedImageSize:(struct CGSize)arg1;

@end

