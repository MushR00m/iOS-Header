//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;
@protocol UIViewControllerPreviewing, UIViewImplicitlyAnimating;

@protocol _UIPreviewInteractionHighlighting <NSObject>
- (void)finalizeHighlightForPreviewingContext:(id <UIViewControllerPreviewing>)arg1;
- (id <UIViewImplicitlyAnimating>)highlightShouldBeginInContainerView:(UIView *)arg1 presentationContainerView:(UIView *)arg2 previewingContext:(id <UIViewControllerPreviewing>)arg3;
- (void)prepareHighlightWithPreviewingContext:(id <UIViewControllerPreviewing>)arg1;
@end
