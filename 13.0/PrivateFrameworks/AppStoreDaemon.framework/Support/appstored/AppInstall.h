//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class AppInstallPolicy, NSArray, NSString;

@interface AppInstall : SQLiteMemoryEntity
{
    NSString *_logKey;
    NSArray *_packages;
}

+ (id)_valueDictionaryWithStoreItem:(id)arg1;
+ (id)defaultProperties;
+ (id)legacy_installForActivity:(id)arg1 error:(id *)arg2;
+ (id)purchase_installForStoreItem:(id)arg1 usingPurchaseInfo:(id)arg2 error:(id *)arg3;
@property(copy) NSArray *packages; // @synthesize packages=_packages;
- (void).cxx_destruct;
- (void)setValuesWithStoreItem:(id)arg1;
- (long long)assetRequestReason;
- (id)cellularDownloadForPackage:(id)arg1;
- (id)bestPackageOnConnection:(id)arg1 withProperties:(id)arg2;
- (id)bestPackageFromArray:(id)arg1;
@property(readonly) long long priority;
@property(copy) AppInstallPolicy *installPolicy;
@property(readonly) NSString *logKey;
@property(readonly, getter=isAutomatic) _Bool automatic;
- (id)initWithSystemApplicationMetadata:(id)arg1;
- (id)initWithStoreItem:(id)arg1;
- (id)coordinatorBuilderWithError:(id *)arg1;
- (id)copyEvaluatorDownloadWithPackage:(id)arg1;
- (id)copyEvaluatorDownloadUsingConnection:(id)arg1;

@end

