//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@protocol QLRemotePopoverTracker;

@protocol QLCustomItemViewControllerHost <NSObject>
- (void)setFullScreen:(_Bool)arg1;
- (void)presentShareSheetWithPopoverTracker:(id <QLRemotePopoverTracker>)arg1 dismissCompletion:(void (^)(void))arg2;
- (void)dismissQuickLook;
@end
