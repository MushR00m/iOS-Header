//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSNumber, NSString, PKPaymentRequest, PKPeerPaymentQuote, PKRemotePaymentRequest;

@protocol NPKInAppPaymentInterfaceServerExportedInterface <NSObject>
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 withError:(NSError *)arg2;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 activationHandler:(void (^)(_Bool))arg2;
- (void)showInAppInterfaceWithRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 activationHandler:(void (^)(_Bool))arg2;
- (void)showInAppInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostApplicationName:(NSString *)arg2 hostBundleIdentifier:(NSString *)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(NSString *)arg5 orientation:(NSNumber *)arg6 activationHandler:(void (^)(_Bool, NSError *))arg7;
@end
