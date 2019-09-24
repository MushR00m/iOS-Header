//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIActivityViewController, UIViewController;
@protocol NUURLHandling, NUVideoItem;

@protocol NUVideoActivityViewControllerFactory <NSObject>
- (UIActivityViewController *)activityViewControllerForVideoItem:(id <NUVideoItem>)arg1 presentingViewController:(UIViewController *)arg2 articleViewingSessionID:(NSString *)arg3 URLHandler:(id <NUURLHandling>)arg4;
@end
