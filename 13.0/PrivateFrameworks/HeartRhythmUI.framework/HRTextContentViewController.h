//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class NSString;

@interface HRTextContentViewController : HKViewController
{
    NSString *_string;
}

@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)_attributedStringFromString:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadView;
- (id)textView;
- (id)initWithString:(id)arg1;

@end
