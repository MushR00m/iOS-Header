//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBApplicationInfo, NSArray;
@protocol OS_dispatch_queue;

@interface FBApplicationTrustData : NSObject
{
    FBApplicationInfo *_appInfo;
    _Bool _hasUniversalProvisioningProfile;
    _Bool _hasFreeDeveloperProvisioningProfile;
    _Bool _isManaged;
    NSArray *_provisioningProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSArray *profiles; // @synthesize profiles=_provisioningProfiles;
- (void).cxx_destruct;
- (void)_acceptApplicationSignatureIdentity;
- (_Bool)_workQueue_signatureNeedsExplicitUserTrust;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (void)_initializeProfiles:(id)arg1;
- (unsigned long long)trustStateWithTrustRequiredReasons:(unsigned long long *)arg1;
- (unsigned long long)trustState;
- (void)acknowledgeTrust;
- (id)_initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(_Bool)arg3;

@end
