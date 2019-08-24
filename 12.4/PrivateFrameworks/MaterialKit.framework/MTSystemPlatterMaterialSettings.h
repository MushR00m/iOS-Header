//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MaterialKit/MTSystemMaterialSettings.h>

#import <MaterialKit/MTMaterialOverlaySettings-Protocol.h>
#import <MaterialKit/MTMaterialSettings_v2-Protocol.h>
#import <MaterialKit/_MTMaterialPerformanceConfiguring-Protocol.h>

@class MTVibrantStylingProvider, NSString, UIColor;

@interface MTSystemPlatterMaterialSettings : MTSystemMaterialSettings <MTMaterialOverlaySettings, MTMaterialSettings_v2, _MTMaterialPerformanceConfiguring>
{
    double _baseOverlayTintAlpha;
    double _primaryOverlayTintAlpha;
    double _secondaryOverlayTintAlpha;
}

+ (id)sharedMaterialSettings;
@property(nonatomic) double secondaryOverlayTintAlpha; // @synthesize secondaryOverlayTintAlpha=_secondaryOverlayTintAlpha;
@property(nonatomic) double primaryOverlayTintAlpha; // @synthesize primaryOverlayTintAlpha=_primaryOverlayTintAlpha;
@property(nonatomic) double baseOverlayTintAlpha; // @synthesize baseOverlayTintAlpha=_baseOverlayTintAlpha;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (double)_backdropScaleForOptions:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) UIColor *tintColor;
@property(readonly, copy, nonatomic) UIColor *secondaryOverlayTintColor;
@property(readonly, copy, nonatomic) UIColor *primaryOverlayTintColor;
@property(readonly, copy, nonatomic) UIColor *baseOverlayColor;
- (Class)vibrantStylingProviderClass;

// Remaining properties
@property(nonatomic) double blurRadius;
@property(nonatomic) double brightness;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double saturation;
@property(readonly) Class superclass;
@property(nonatomic) double tintAlpha;
@property(nonatomic) _Bool usesLuminanceMap;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;

@end
