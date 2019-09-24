//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, PLPhotoLibraryFileIdentifier;

@protocol PLPhotoLibraryPathManagerCore <NSObject>
+ (_Bool)isSystemPhotoLibraryURL:(NSURL *)arg1;
+ (_Bool)isSystemLibraryURLDefined;
+ (_Bool)setSystemLibraryURL:(NSURL *)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (NSString *)systemLibraryBaseDirectory;
+ (NSURL *)systemLibraryURL;
@property(readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property(readonly, copy) NSString *baseDirectory;
@property(readonly, copy) NSURL *libraryURL;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1 andURL:(NSURL *)arg2;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (NSURL *)readOnlyUrlWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (_Bool)isDataProtectionComplete;
- (void)setDataProtectionComplete:(_Bool)arg1;
- (NSArray *)knownDBPaths;
- (NSString *)syncInfoPath;
- (NSString *)pathToAssetsToAlbumsMapping;
- (NSString *)temporaryDragAndDropDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (NSString *)temporaryFileBackedDebugDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
@end
