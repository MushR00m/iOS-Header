//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject
{
    _Bool _tokenIsKnownToBeMissing;
    PLPhotoLibraryPathManager *_pathManager;
}

- (void).cxx_destruct;
- (int)_tokenValue;
- (void)_writeTokenValue:(int)arg1;
- (void)invalidateCachedTokenState;
- (void)removeToken;
- (void)incrementToken;
- (_Bool)isTokenValid;
- (_Bool)isTokenPresent;
- (id)_tokenFullPath;
- (void)writeToken;
- (id)initWithPathManager:(id)arg1;

@end
