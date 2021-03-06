//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext
{
    _Bool _allowsManualEntry;
    NSDictionary *_flowIdentifierToCredential;
    NSArray *_flowIdentifiers;
    NSArray *_credentials;
    PKPaymentSetupProduct *_product;
}

@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property(copy, nonatomic) NSArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSArray *flowIdentifiers; // @synthesize flowIdentifiers=_flowIdentifiers;
@property(retain, nonatomic) NSDictionary *flowIdentifierToCredential; // @synthesize flowIdentifierToCredential=_flowIdentifierToCredential;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

