//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CKNavigationBarCanvasView, UIButton, UILabel;

@interface CKComposeNavbarCanvasViewController : UIViewController
{
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    CKNavigationBarCanvasView *_canvasView;
}

@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)_initializeForTraitCollection:(id)arg1;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_windowTraitCollection;
- (_Bool)_shouldUseRTL;
- (void)_setupDefaultCanvasView;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end
