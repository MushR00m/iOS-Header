//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKVibrantView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface MKVibrantLabel : MKVibrantView
{
    UILabel *_label;
    UIColor *_textColor;
}

@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithStyle:(long long)arg1;

@end
