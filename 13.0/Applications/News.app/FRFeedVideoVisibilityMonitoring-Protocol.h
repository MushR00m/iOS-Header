//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FRFeedVideoVisibilityMonitoring <NSObject>
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) _Bool appeared;
- (void)onDidDisappear:(void (^)(void))arg1;
- (void)onWillDisappear:(void (^)(void))arg1;
- (void)onVisiblePercentageChange:(void (^)(double))arg1;
- (void)onDidAppear:(void (^)(void))arg1;
- (void)onWillAppear:(void (^)(void))arg1;
@end
