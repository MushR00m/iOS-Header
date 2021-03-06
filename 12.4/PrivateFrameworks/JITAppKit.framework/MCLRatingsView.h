//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImage;

@interface MCLRatingsView : UIView
{
    double _imageaspect;
    NSLayoutConstraint *_widthConstraint;
    _Bool _actionVariant;
    double _spacing;
    double _value;
    UIImage *_emptyImage;
    UIImage *_fullImage;
}

@property(nonatomic) _Bool actionVariant; // @synthesize actionVariant=_actionVariant;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

