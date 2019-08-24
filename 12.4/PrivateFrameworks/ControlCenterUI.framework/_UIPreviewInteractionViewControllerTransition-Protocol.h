//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class UIView;

@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;

@optional
- (void)performWithCustomAnimator:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
@end
