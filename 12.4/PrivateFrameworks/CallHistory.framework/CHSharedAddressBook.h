//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (void).cxx_destruct;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)revertAddressBook:(id)arg1;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)registerForContactsNotifications;
- (void)dealloc;
- (id)init;

@end

