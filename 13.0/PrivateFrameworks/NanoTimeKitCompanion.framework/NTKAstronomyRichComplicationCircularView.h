//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (void).cxx_destruct;
- (void)_setupContentView;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;
- (void)layoutSubviews;
- (id)init;

@end
