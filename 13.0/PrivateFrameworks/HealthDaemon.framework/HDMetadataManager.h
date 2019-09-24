//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;

@interface HDMetadataManager : NSObject
{
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

+ (Class)_metadataPredicateClassForKey:(id)arg1;
- (void).cxx_destruct;
- (id)_keyForKeyID:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_keyEntityForKey:(id)arg1 createIfNecessary:(_Bool)arg2 database:(id)arg3 error:(id *)arg4;
- (id)predicateWithMetadataKey:(id)arg1 exists:(_Bool)arg2;
- (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
- (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
- (_Bool)_insertExternalSyncMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(_Bool)arg5 database:(id)arg6 error:(id *)arg7;
- (id)_ignoredInsertedMetadataKeys;
- (_Bool)_skipInsertOfKey:(id)arg1 metadata:(id)arg2;
- (_Bool)_insertMetadata:(id)arg1 forObjectID:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (_Bool)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(_Bool)arg5 database:(id)arg6 error:(id *)arg7;
- (_Bool)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(_Bool)arg5 error:(id *)arg6;
- (id)rawMetadataForObject:(id)arg1 error:(id *)arg2;
- (id)metadataForObjectID:(long long)arg1 keyFilter:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_externalSyncMetadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(CDUnknownBlockType)arg3 database:(id)arg4 error:(id *)arg5;
- (void)_insertDerivedMetadataforKey:(id)arg1 value:(id)arg2 filteredAddBlock:(CDUnknownBlockType)arg3;
- (id)_metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(CDUnknownBlockType)arg3 statement:(id)arg4 error:(id *)arg5;
- (id)metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(CDUnknownBlockType)arg3 statement:(id)arg4 error:(id *)arg5;
- (id)initWithProfile:(id)arg1;

@end
