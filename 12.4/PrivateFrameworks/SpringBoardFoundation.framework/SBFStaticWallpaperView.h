//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSString, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView
{
    UIImage *_image;
    UIImage *_displayedImage;
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
    NSString *_cacheGroup;
    UIImage *_sampleImage;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_allowsParallax;
+ (id)imageByScalingImage:(id)arg1 withScaleFactor:(double)arg2 needsLuminanceTreatment:(_Bool)arg3;
+ (id)luminanceTreatmentFilters;
+ (_Bool)_canDownscaleSampleImage;
+ (_Bool)_canCacheImages;
@property(retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage; // @synthesize sampleImage=_sampleImage;
@property(retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage; // @synthesize displayedImage=_displayedImage;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFColorBoxes *colorBoxes;
- (id)_createColorBoxes;
- (id)_wallpaperImageForAnalysis;
- (void)_resetColorBoxes;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (void)_displayImage:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)_contrastInContentViewRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrast;
- (_Bool)imageRequiresLuminanceTreatment;
- (void)setContentsRect:(struct CGRect)arg1;
- (_Bool)hasContentOutsideVisibleBounds;
- (id)cacheGroup;
- (id)snapshotImage;
- (id)_computeAverageColor;
- (id)wallpaperImage;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5 wallpaperSettingsProvider:(id)arg6;
- (void)preheatImageData;
- (void)_generateImageForImage:(id)arg1 options:(unsigned long long)arg2 downsampleFactor:(double)arg3 generationHandler:(CDUnknownBlockType)arg4;
- (void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 wallpaperSettingsProvider:(id)arg4;

@end
