//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageEmptyContent : _UIImageContent
{
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (struct CGSize)size;
- (struct CGSize)sizeInPixels;
- (_Bool)canProvideFullResCGImage;
- (_Bool)canProvideCGImage;

@end
