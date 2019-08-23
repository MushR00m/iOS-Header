//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult;
@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl
{
    id <SBIconListPageControlDelegate> _delegate;
    _Bool _hasSetLegibility;
    _Bool _shouldShowSearchIndicator;
    double _cachedDefaultHeight;
    SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets;
    SBIconPageIndicatorImageSetResult *_searchIndicatorImageSets;
    _Bool _legibilityEnabled;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
}

@property(nonatomic) _Bool legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
@property(nonatomic) _Bool shouldShowSearchIndicator; // @synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache; // @synthesize imageSetCache=_imageSetCache;
@property(nonatomic) __weak id <SBIconListPageControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)_invalidateIndicators;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (id)_iconListIndicatorImage:(_Bool)arg1;
- (id)_searchIndicatorImage:(_Bool)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)setLegibilitySettings:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)defaultIndicatorHeight;
- (double)defaultHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
