//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UpdateMigratorOperation.h"

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation
{
    NSArray *_bundleIDs;
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (void)performMigration;
- (id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2;

@end
