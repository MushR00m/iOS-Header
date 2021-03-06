//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSSCropControllerRootViewDelegate-Protocol.h"

@class NSArray, SSSCropControllerRootView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIScrollView, UIView;
@protocol SSSCropControllerDelegate, SSSScreenshotContainerView;

@interface SSSCropController : NSObject <SSSCropControllerRootViewDelegate>
{
    struct CGRect _cropRect;
    struct CGRect _saveCropRect;
    struct CGRect _lastNotifiedCropRect;
    SSSCropControllerRootView *_rootView;
    id <SSSCropControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SSSCropControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)cropControllerRootView:(id)arg1 changedToCropRect:(struct CGRect)arg2;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) NSArray *snapRects;
@property(nonatomic) _Bool cropEnabled;
@property(nonatomic) long long numberOfTouchesRequiredForPanningCrop;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (_Bool)isCropped;
- (void)cancelCrop;
- (void)doneCrop;
- (void)resetCrop;
- (void)enterCrop;
- (void)setPageCropRect:(struct CGRect)arg1;
- (void)commitInflightEdits;
- (void)_setCropRect:(struct CGRect)arg1 notify:(_Bool)arg2;
@property(nonatomic) double lineGrabberAlpha;
@property(nonatomic) double lineAlpha;
@property(nonatomic) double cornerGrabberAlpha;
@property(nonatomic) _Bool inPDFMarkupMode;
@property(retain, nonatomic) UIView<SSSScreenshotContainerView> *viewToCrop;
@property(readonly, nonatomic) UIView *cropView;
- (id)init;

@end

