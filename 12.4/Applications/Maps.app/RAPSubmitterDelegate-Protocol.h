//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RAPSubmitter;

@protocol RAPSubmitterDelegate <NSObject>
- (void)submitterDidStopRequiringActivityAssertion:(RAPSubmitter *)arg1;
- (void)submitterWillStartRequiringActivityAssertion:(RAPSubmitter *)arg1;
@end
