//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserManagement/UMUser.h>

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMMutableUser : UMUser
{
}

- (_Bool)commitChangesWithError:(id *)arg1;
- (_Bool)commitChanges;

// Remaining properties
@property(copy, nonatomic) NSString *alternateDSID; // @dynamic alternateDSID;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) unsigned long long dataQuota; // @dynamic dataQuota;
@property(nonatomic) unsigned long long dataUsed; // @dynamic dataUsed;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) NSError *errorCausingLogout; // @dynamic errorCausingLogout;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(nonatomic) unsigned int gid; // @dynamic gid;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) _Bool hasDataToSync; // @dynamic hasDataToSync;
@property(nonatomic) _Bool hasManagedCredentials; // @dynamic hasManagedCredentials;
@property(copy, nonatomic) NSURL *homeDirectoryURL; // @dynamic homeDirectoryURL;
@property(nonatomic) _Bool isAuditor; // @dynamic isAuditor;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isLoginUser; // @dynamic isLoginUser;
@property(copy, nonatomic) NSArray *languages; // @dynamic languages;
@property(copy, nonatomic) NSDate *lastLoginDate; // @dynamic lastLoginDate;
@property(copy, nonatomic) NSDate *lastRemoteAuthDate; // @dynamic lastRemoteAuthDate;
@property(nonatomic) unsigned long long passcodeLockGracePeriod; // @dynamic passcodeLockGracePeriod;
@property(nonatomic) unsigned long long passcodeType; // @dynamic passcodeType;
@property(copy, nonatomic) NSURL *photoURL; // @dynamic photoURL;
@property(nonatomic) unsigned int uid; // @dynamic uid;
@property(copy, nonatomic) NSString *userAuxiliaryString; // @dynamic userAuxiliaryString;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end
