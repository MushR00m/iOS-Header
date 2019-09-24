//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PLPhotoLibraryPathManager;

@protocol PLFileSystemMetadataPersistence <NSObject>
- (void)removePersistedFileSystemDataWithPathManager:(PLPhotoLibraryPathManager *)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(PLPhotoLibraryPathManager *)arg1;
- (_Bool)isValidForPersistence;
@end
