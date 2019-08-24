//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : UIView
{
    UIImageView *_musicNoteView;
    UIImageView *_spinnerView;
    UIVisualEffectView *_vibrancyView;
    id <SiriUIAcousticIDSpinnerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIAcousticIDSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animateOut;
- (void)animateIn;
- (_Bool)isShowing;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
