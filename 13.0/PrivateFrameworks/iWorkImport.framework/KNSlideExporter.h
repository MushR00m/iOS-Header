//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNRenderingExporter.h>

__attribute__((visibility("hidden")))
@interface KNSlideExporter : KNRenderingExporter
{
}

- (void)setCurrentSlideNode:(id)arg1;
- (struct CGRect)boundsRect;
- (void)setup;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)incrementPage;

@end
