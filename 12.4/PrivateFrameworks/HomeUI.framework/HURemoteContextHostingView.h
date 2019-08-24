//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HURemoteContextHostingView : UIView
{
    UIView *_contentView;
    UIView *_destinationOutContainerView;
    UIView *_destinationOutView;
    UIView *_destinationOverView;
}

@property(readonly, nonatomic) UIView *destinationOverView; // @synthesize destinationOverView=_destinationOverView;
@property(readonly, nonatomic) UIView *destinationOutView; // @synthesize destinationOutView=_destinationOutView;
@property(readonly, nonatomic) UIView *destinationOutContainerView; // @synthesize destinationOutContainerView=_destinationOutContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)_cornerRadius;
@property(nonatomic) unsigned long long maskedCorners;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithContentView:(id)arg1;

@end
