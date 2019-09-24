//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMDSettingsControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserDataControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserSettingsBackingStoreControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMBShareUserID, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDCloudShareMessenger, HMDCloudShareTrustManager, HMDHome, HMDSettingsControllerDependency, HMDUserDataController, HMDUserSettingsBackingStoreController, HMUserPresenceAuthorization, NSMutableArray, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUser : HMFObject <HMDSettingsControllerDelegate, HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    NSUUID *_uuid;
    _Bool _remoteAccessAllowed;
    NSMutableArray *_relayAccessTokens;
    HMDAccountHandle *_accountHandle;
    HMDAccountIdentifier *_accountIdentifier;
    unsigned long long _privilege;
    HMDHome *_home;
    NSString *_userID;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    NSString *_relayIdentifier;
    NSNumber *_camerasAccessLevelValue;
    HAPPairingIdentity *_pairingIdentity;
    NSString *_displayName;
    HMDAssistantAccessControl *_assistantAccessControl;
    HMBShareUserID *_cloudShareID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDSettingsControllerDependency *_sharedSettingsControllerDependency;
    HMDUserSettingsBackingStoreController *_sharedBackingStoreController;
    HMDCloudShareMessenger *_shareMessenger;
    HMDSettingsControllerDependency *_privateSettingsControllerDependency;
    HMDUserSettingsBackingStoreController *_privateBackingStoreController;
    HMDUserDataController *_userDataController;
    HMDCloudShareTrustManager *_cloudShareTrustManager;
}

+ (id)userWithDictionary:(id)arg1 forHome:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;
+ (id)userIDForAccountHandle:(id)arg1;
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;
@property(retain) HMDCloudShareTrustManager *cloudShareTrustManager; // @synthesize cloudShareTrustManager=_cloudShareTrustManager;
@property(retain) HMDUserDataController *userDataController; // @synthesize userDataController=_userDataController;
@property(retain) HMDUserSettingsBackingStoreController *privateBackingStoreController; // @synthesize privateBackingStoreController=_privateBackingStoreController;
@property(retain) HMDSettingsControllerDependency *privateSettingsControllerDependency; // @synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency;
@property(retain) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController; // @synthesize sharedBackingStoreController=_sharedBackingStoreController;
@property(retain) HMDSettingsControllerDependency *sharedSettingsControllerDependency; // @synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain) HMBShareUserID *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;
- (id)homeForCloudShareTrustManager:(id)arg1;
- (id)ownerForCloudShareTrustManager:(id)arg1;
- (id)zoneNameForCloudShareTrustManager:(id)arg1;
- (_Bool)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;
- (void)configureCloudShareTrustManager;
- (id)trustTargetUUID;
- (void)updateCloudShareID:(id)arg1;
@property(readonly) _Bool isUserSettingsPrefEnabled;
- (id)privateZoneControllerForUserDataController:(id)arg1;
- (id)sharedZoneControllerForUserDataController:(id)arg1;
- (id)userDataController:(id)arg1 participantManagerForCloudZone:(id)arg2;
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
- (_Bool)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
- (_Bool)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
- (void)didStartBackingStoreController:(id)arg1;
- (id)zoneNameForBackingStoreController:(id)arg1;
@property(readonly) NSUUID *userUUID;
@property(readonly) _Bool isRunningOnHomeOwnersDevice;
- (void)settingsController:(id)arg1 didUpdateWithCompletion:(CDUnknownBlockType)arg2;
- (id)dictionaryEncoding;
- (void)removeUserData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)backingStoreObjects:(long long)arg1;
- (void)migrateAfterCloudMerge:(CDUnknownBlockType)arg1;
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_migrateRelayAccessTokensCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fixupRelayAccessTokens;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)publicKey;
- (id)pairingUsername;
@property(copy) NSString *userID; // @synthesize userID=_userID;
- (void)_removeRelayAccessToken:(id)arg1;
- (void)removeRelayAccessToken:(id)arg1;
- (void)_addRelayAccessToken:(id)arg1;
- (void)addRelayAccessToken:(id)arg1;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)_relayAccessTokenForIdentifier:(id)arg1;
- (_Bool)containsRelayAccessToken:(id)arg1;
- (id)relayAccessTokens;
- (void)updateRelayIdentifier:(id)arg1;
@property(copy) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)_handleAssistantAccessControlUpdate:(id)arg1;
- (void)handleAssistantAccessControlUpdate:(id)arg1;
- (_Bool)isCurrentUserAndOwner;
@property(retain) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(readonly) NSUUID *assistantAccessControlModelUUID;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, getter=isRemoteGateway) _Bool remoteGateway;
- (unsigned long long)camerasAccessLevel;
@property(retain, nonatomic) NSNumber *camerasAccessLevelValue; // @synthesize camerasAccessLevelValue=_camerasAccessLevelValue;
@property(getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
- (_Bool)refreshDisplayName;
- (void)setDisplayName:(id)arg1;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
- (void)__handleRemovedAccount:(id)arg1;
- (void)__handleAddedAccount:(id)arg1;
- (_Bool)requiresMakoSupport;
- (id)account;
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleShareClientPayloadRequest:(id)arg1;
- (void)_handleShareLookupInfoRequest:(id)arg1;
- (void)_handlePairingIdentityRequest:(id)arg1;
- (void)deregisterIdentity;
- (void)registerIdentity;
@property(copy) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property(copy) HMDAccountIdentifier *accountIdentifier;
- (void)setAccountHandle:(id)arg1;
- (id)accountHandle;
@property(readonly) _Bool isCurrentUser;
- (_Bool)updateAdministrator:(_Bool)arg1;
@property unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, getter=isOwner) _Bool owner;
@property(readonly, getter=isAdministrator) _Bool administrator;
- (unsigned long long)_compatiblePrivilege;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void)deregisterForMessages;
- (void)registerForMessages;
- (id)messageDispatcher;
- (void)unconfigure;
- (void)initializeUserSettingsWithHome:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (id)dumpState;
- (id)attributeDescriptions;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;
@property(readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;

// Remaining properties
@property(readonly, getter=isCurrentUser) _Bool currentUser;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
