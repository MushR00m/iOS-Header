//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UISUIActivityViewControllerConfiguration;

@protocol _UIShareExtensionService <NSObject>
- (void)_closeWithCompletion:(void (^)(void))arg1;
- (void)setIsLoadingActivityItemProviders:(_Bool)arg1;
- (void)_viewControllerWasDismissed;
- (void)setPresentedContextUsesDiscreteDismissButton:(_Bool)arg1;
- (void)cleanupWithSelectedActivityType:(NSString *)arg1;
- (void)setOtherActivityViewPresented:(_Bool)arg1;
- (void)setNeedsRequestingSharedItemsWithSharedItemsAvailable:(_Bool)arg1;
- (void)performHostInitiatedActivityWithActivityType:(NSString *)arg1 executionEnvironment:(long long)arg2;
- (void)setActivityViewControllerConfiguration:(UISUIActivityViewControllerConfiguration *)arg1;
- (void)displayInitialUI;
@end
