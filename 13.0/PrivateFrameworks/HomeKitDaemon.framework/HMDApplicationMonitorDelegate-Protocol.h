//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDProcessInfo;

@protocol HMDApplicationMonitorDelegate <NSObject>

@optional
- (void)applicationMonitorDidChangeAppState:(HMDProcessInfo *)arg1;
- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(_Bool)arg1;
@end

