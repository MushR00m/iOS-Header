//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class UIActivity, _SFActivityViewController;

@protocol _SFActivityViewControllerDelegate <NSObject>

@optional
- (_Bool)activityViewControllerSupportsDownloads:(_SFActivityViewController *)arg1;
- (unsigned long long)browserPersonaForActivityViewController:(_SFActivityViewController *)arg1;
- (void)activityViewController:(_SFActivityViewController *)arg1 prepareActivity:(UIActivity *)arg2 completion:(void (^)(void))arg3;
@end
