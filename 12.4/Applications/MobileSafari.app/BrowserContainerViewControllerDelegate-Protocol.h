//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BrowserContainerViewController, BrowserController;

@protocol BrowserContainerViewControllerDelegate <NSObject>

@optional
- (BrowserController *)browserContainerViewController:(BrowserContainerViewController *)arg1 openNewWindowOnEdge:(long long)arg2 fromBrowserController:(BrowserController *)arg3;
- (void)containerWillChangeArrangement:(BrowserContainerViewController *)arg1;
@end
