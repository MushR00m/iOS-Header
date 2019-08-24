//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface PasswordSharingDoneViewController : SVSBaseViewController
{
    UIButton *_doneButton;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    UIButton *_reportBugButton;
    UILabel *_titleLabel;
    int _status;
    double _duration;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)handleReportBugButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)configureUIElementsForHotspot;
- (void)configureUIElementsDefault;
- (void)viewWillAppear:(_Bool)arg1;

@end
