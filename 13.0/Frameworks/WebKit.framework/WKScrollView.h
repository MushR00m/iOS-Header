//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class WKScrollViewDelegateForwarder, WKWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIScrollView
{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    double _keyboardBottomInsetAdjustment;
    _Bool _scrollEnabledByClient;
    _Bool _scrollEnabledInternal;
    _Bool _zoomEnabledByClient;
    _Bool _zoomEnabledInternal;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
}

@property(nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // @synthesize internalDelegate=_internalDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateZoomability;
- (void)_setZoomEnabledInternal:(_Bool)arg1;
- (void)setZoomEnabled:(_Bool)arg1;
- (void)_updateScrollability;
- (void)_setScrollEnabledInternal:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (struct UIEdgeInsets)_systemContentInset;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(_Bool)arg2 lastAdjustment:(double *)arg3;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
@property(readonly, nonatomic) _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (void)dealloc;
- (void)_updateDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
