//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/AAUIDeviceToDeviceEncryptionHelperDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSelectPassesViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentTermsController, PKPeerPaymentWebService, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSelectPassesViewControllerDelegate, AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate>
{
    PKPaymentProvisioningController *_provisioningController;
    PKPeerPaymentCredential *_credential;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPeerPaymentTermsController *_termsController;
    PKPeerPaymentWebService *_peerPaymentWebService;
    UIImage *_passSnapShot;
    _Bool _hidesSetupLater;
    _Bool _presentedDeviceToDeviceEncryptionFlow;
    _Bool _allowsManualEntry;
}

@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
- (void).cxx_destruct;
- (void)_showSpinner:(_Bool)arg1;
- (void)_terminateSetupFlow;
- (void)_handleNextStep;
- (struct CGSize)_snapshotSize;
- (void)_presentNextViewController;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_displayTermsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_continuePressed;
- (void)_addDifferentCard;
- (id)_bodyText;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)setHideSetupLaterButton:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
