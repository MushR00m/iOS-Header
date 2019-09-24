//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentService;

@interface NPKPeerPaymentAccountManager : NSObject
{
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
}

+ (id)sharedInstance;
@property(retain) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
- (void).cxx_destruct;
- (void)_updateAccount;
- (void)_handleAccountChanged:(id)arg1;
- (id)init;
- (id)initWithPeerPaymentService:(id)arg1;

@end
