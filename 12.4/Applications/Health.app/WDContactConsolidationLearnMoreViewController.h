//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface WDContactConsolidationLearnMoreViewController : HKViewController
{
    UITextView *_textView;
    CDUnknownBlockType _dismissHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)createTextView;
- (void)dismissButtonPressed:(id)arg1;
- (void)createDismissButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
