//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class CALayer, NTKColoringLabel, UIImageView;

@interface NTKPeopleRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKColoringLabel *_nameLabel;
    UIImageView *_imageView;
    CALayer *_circularLayer;
    long long _fromTheme;
    long long _toTheme;
    double _themeFraction;
    struct {
        double nameLabelLargeFontSize;
        double nameLabelLargeBottom;
        double nameLabelSmallFontSize;
        double nameLabelMaxWidth;
        double circleWidth;
    } _layoutConstants;
}

- (void).cxx_destruct;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateRingColor;
- (double)_ringAlphaFromTheme:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

