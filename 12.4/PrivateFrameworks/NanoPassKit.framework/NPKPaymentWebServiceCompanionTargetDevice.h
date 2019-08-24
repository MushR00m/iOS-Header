//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceArchiver-Protocol.h>
#import <NanoPassKit/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class IDSService, NPKCompanionAgentConnection, NPKTargetDeviceAssertionManager, NRActiveDeviceAssertion, NSMutableDictionary, NSString;
@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate, OS_dispatch_queue;

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    id <NPKPaymentWebServiceCompanionTargetDeviceDelegate> _delegate;
    unsigned long long _context;
    IDSService *_provisioningService;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NSMutableDictionary *_outstandingRequests;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NRActiveDeviceAssertion *_provisioningActiveDeviceAssertion;
    NPKTargetDeviceAssertionManager *_remoteDeviceAssertionManager;
}

+ (id)bridgedClientInfoHTTPHeader;
@property(retain, nonatomic) NPKTargetDeviceAssertionManager *remoteDeviceAssertionManager; // @synthesize remoteDeviceAssertionManager=_remoteDeviceAssertionManager;
@property(retain, nonatomic) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion; // @synthesize provisioningActiveDeviceAssertion=_provisioningActiveDeviceAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property(retain, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <NPKPaymentWebServiceCompanionTargetDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_categoryIdentifierForPass:(id)arg1;
- (id)_expressModesFromExpressPassesInformation:(id)arg1;
- (id)_expressPassesInformationFromDataArray:(id)arg1;
- (_Bool)_deviceIsFortuneOrLater;
- (_Bool)_deviceIsDaytonaOrLater;
- (_Bool)deviceSupportMultipleExpressPasses;
- (id)_serialNumbersOfAllPairedDevices;
- (id)_sendProtobuf:(id)arg1 responseExpected:(_Bool)arg2 extraOptions:(id)arg3;
- (id)_sendProtobuf:(id)arg1 responseExpected:(_Bool)arg2;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1;
- (void)handleTransactionDefaultsNeededRequest:(id)arg1;
- (void)handleShowPaymentSetupRequest:(id)arg1;
- (void)handleWebServiceContextNeededRequest:(id)arg1;
- (void)handleWebServiceContextDidChangeRequest:(id)arg1;
- (void)handleCompanioniCloudSignout;
- (void)handleCompanionPeerPaymentRegistration;
- (void)handleCompanionMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCompanionMigrationResponse:(id)arg1;
- (void)sendWebServiceContextToWatch:(id)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1 deviceClass:(id)arg2 OSVersion:(id)arg3 SEID:(id)arg4;
- (id)_upgradeExpressAutomaticSelectionCriteriaRequestForPass:(id)arg1;
- (id)_expressPassInformationWithPass:(id)arg1 upgradeRequst:(id)arg2;
- (void)_singleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_multipleExpressTransitPassPaymentWebService:(id)arg1 handlePotentialExpressPassInformation:(id)arg2 upgradeRequest:(id)arg3 pass:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)supportsCredentialType:(long long)arg1;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)felicaSecureElementIsAvailable;
- (void)checkCompanionPeerPaymentRegistrationState:(id)arg1;
- (void)downloadAllPaymentPasses:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusResponse:(id)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewResponse:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingResponse:(id)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg1;
- (void)initializeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeCloudStoreIfNecessaryResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performProductActionResponse:(id)arg1;
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)availableProductsResponse:(id)arg1;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)performDeviceCheckInResponse:(id)arg1;
- (id)_deviceSupportedFeatureIdentifiers;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAccountWithIdentifierResponse:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceMetadataResponse:(id)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatedAccountsForProvisioningResponse:(id)arg1;
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;
- (void)handleDeviceUnlockedForPendingProvisioningRequest:(id)arg1;
- (void)handlePeerPaymentTermsAndConditionsAcceptanceRequest:(id)arg1;
- (void)updatePeerPaymentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePeerPaymentAccountResponse:(id)arg1;
- (void)provisionPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)provisionPeerPaymentPassResponse:(id)arg1;
- (void)peerPaymentUnregisterWithCompletion:(CDUnknownBlockType)arg1;
- (void)peerPaymentUnregisterResponse:(id)arg1;
- (void)peerPaymentRegisterWithURL:(id)arg1 forceReRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peerPaymentRegisterResponse:(id)arg1;
- (void)cancelOutstandingRemotePassUpdateRequest:(id)arg1 pass:(id)arg2;
- (void)remotePassUpgradeWithRequest:(id)arg1 pass:(id)arg2 requireAuthorization:(_Bool)arg3 notifyUserOnPairedDevice:(_Bool)arg4 updateBlock:(CDUnknownBlockType)arg5;
- (void)remotePassUpgradeResponse:(id)arg1;
- (void)cancelOutstandingEnableServiceModeRequests;
- (void)enableServiceModeForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg1;
- (void)enableServiceModeResponse:(id)arg1;
- (void)conflictingExpressPassIdentifiersForPassInformationResponse:(id)arg1;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassWithUniqueIdentifierResponse:(id)arg1;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassesWithCardTypeResponse:(id)arg1;
- (void)setExpressWithPassInformation:(id)arg1 requestAuthorization:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setExpressPassResponse:(id)arg1;
- (void)handleUpdatedAppletState:(id)arg1;
- (void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2;
- (void)retrieveTransactionsForPassWithUniqueID:(id)arg1;
- (void)handleRemovedTransaction:(id)arg1;
- (void)handlePaymentTransactions:(id)arg1;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)updatePushToken:(id)arg1;
- (void)updatePaymentPass:(id)arg1;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferredAIDResponse:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingRemovalResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)secureElementCardsWithCompletion:(CDUnknownBlockType)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (_Bool)claimSecureElementForCurrentUser;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (id)deviceVersion;
- (id)deviceClass;
- (id)deviceName;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (id)_supportedRegionsForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (void)didRegisterResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)signDataResponse:(id)arg1;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)configurationDataResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)provisioningDataResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registrationDataResponse:(id)arg1;
- (void)handleBalanceChange:(id)arg1;
- (void)markAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAllAppletsForDeletionResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(CDUnknownBlockType)arg1;
- (void)_setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;
- (void)_getPairingInfoAndSetAuthRandomIfNotPaired:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingInfoResponse:(id)arg1;
- (void)_setNewAuthRandomReturningPairingState:(CDUnknownBlockType)arg1;
- (void)setNewAuthRandomResponse:(id)arg1;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (unsigned long long)maximumPaymentCards;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (id)deviceRegion;
- (id)bridgedClientInfo;
- (id)secureElementIdentifiers;
- (_Bool)supportsAutomaticPassPresentation;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
