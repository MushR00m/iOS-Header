//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterServices/NSObject-Protocol.h>

@class NSString;

@protocol CCSRemoteServiceServerProtocol <NSObject>
- (void)requestEnableModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)getEnabledStateOfModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end
