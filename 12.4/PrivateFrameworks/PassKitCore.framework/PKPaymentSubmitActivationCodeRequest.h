//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentPass;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    NSString *_verificationCode;
    NSData *_verificationData;
}

@property(copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end
