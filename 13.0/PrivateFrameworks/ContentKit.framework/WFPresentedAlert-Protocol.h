//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/NSObject-Protocol.h>

@class NSArray, WFAlertButton;

@protocol WFPresentedAlert <NSObject>
- (void)setAlertButton:(WFAlertButton *)arg1 atIndex:(unsigned long long)arg2;
- (void)setAlertButtons:(NSArray *)arg1;
- (void)dismissAlertWithCompletionHandler:(void (^)(void))arg1;
@end

