//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXAvailableApplicationManager : NSObject
{
    _Bool _trustChangeEvaluationPending;
    NSDictionary *_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSUUID *_lastLSUUID;
    NSUUID *_ourDBUUID;
    unsigned long long _lastSequenceNumber;
    NSMutableDictionary *_companionToWatchAppsBundleIDMap;
    NSMutableDictionary *_appList;
}

+ (id)sharedApplicationManager;
@property(nonatomic) _Bool trustChangeEvaluationPending; // @synthesize trustChangeEvaluationPending=_trustChangeEvaluationPending;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSMutableDictionary *companionToWatchAppsBundleIDMap; // @synthesize companionToWatchAppsBundleIDMap=_companionToWatchAppsBundleIDMap;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *possibleCompanionDeletableSystemAppToWatchCounterpartsMap; // @synthesize possibleCompanionDeletableSystemAppToWatchCounterpartsMap=_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;
- (id)locallyAvailableSystemAppBundleIDToCompanionBundleIDMappingForPreWatchOSSix;
- (id)bundleIDsOfLocallyAvailableSystemAppsForPreWatchOSSix;
- (id)bundleIDsOfLocallyAvailableSystemApps;
- (id)_bundleIDsOfLocallyAvailableSystemApps;
- (id)companionBundleIDForLocallyAvailableSystemApp:(id)arg1 error:(id *)arg2;
- (_Bool)systemAppIsAvailableWithBundleID:(id)arg1 error:(id *)arg2;
- (id)availableSystemAppWithBundleID:(id)arg1 error:(id *)arg2;
- (id)_supplementalSystemAppBundleIDMappingForPreWatchOSSix;
- (id)_systemAppBundleIDsNotAvailableBeforeWatchOSSix;
- (id)_supplementalSystemAppBundleIDMappingForWatchOSSixAndLater;
- (id)_alwaysIgnoredSystemAppBundleIDs;
- (id)gizmoAppForCompanionAppBundleID:(id)arg1;
- (id)gizmoAppBundleIDsForCompanionAppBundleIDs:(id)arg1;
- (id)gizmoAppBundleIDForCompanionAppBundleID:(id)arg1;
- (id)allAvailablePlaceholders;
- (id)bundleIDsOfAvailableAppsExcludingSystemApps;
- (id)allAvailableApps;
- (_Bool)gizmoAppIsLocallyAvailableWithBundleID:(id)arg1;
- (id)gizmoAppWithBundleID:(id)arg1;
- (id)infoForGizmoAppsWithBundleIDs:(id)arg1;
- (void)profileTrustChanged;
- (void)applicationUninstalledWithUserInfoDictionary:(id)arg1;
- (void)processApplication:(id)arg1 withNewApps:(id)arg2 updatedApps:(id)arg3 newlyIndependentAppBundleIDs:(id)arg4;
- (void)processApplicationRemovalWithCompanionBundleID:(id)arg1 removedApps:(id)arg2;
- (void)applicationsInstalledWithCompanionIdentifiers:(id)arg1;
- (void)applicationInstalledWithUserInfoDictionary:(id)arg1;
- (void)addGizmoBundleId:(id)arg1 forCompanionBundleID:(id)arg2 toMap:(id)arg3;
- (void)_onQueue_reSyncWithLS;
- (void)_onQueue_noteTrustObtainedForApps:(id)arg1 trustRemovedForApps:(id)arg2;
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 newlyIndependentAppBundleIDs:(id)arg4;
- (void)_onQueue_noteDatabaseRebuild;
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;
- (void)_onQueue_writeAppListToDisk;
- (_Bool)_verifyInternalDataStructures;
- (id)init;

@end
