//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSSet, SKUIItemStateCenter;

@protocol SKUIItemStateCenterObserver <NSObject>

@optional
- (void)itemStateCenterRestrictionsChanged:(SKUIItemStateCenter *)arg1;
- (void)itemStateCenterMediaLibrariesDidChange:(SKUIItemStateCenter *)arg1;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishSoftwarePurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 didFinishPurchases:(NSArray *)arg2;
- (void)itemStateCenter:(SKUIItemStateCenter *)arg1 itemStatesChanged:(NSSet *)arg2;
@end
