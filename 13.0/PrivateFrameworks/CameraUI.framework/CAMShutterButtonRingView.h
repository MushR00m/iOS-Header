//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView
{
    _Bool _showContrastBorder;
    UIColor *_color;
    struct CAMShutterButtonSpec _spec;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool showContrastBorder; // @synthesize showContrastBorder=_showContrastBorder;
@property(nonatomic) struct CAMShutterButtonSpec spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSpec:(struct CAMShutterButtonSpec)arg1;

@end
