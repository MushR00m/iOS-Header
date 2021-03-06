//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray;

@interface InstallWatchAppsTask : Task
{
    NSArray *_purchaseInfo;
    NSArray *_processedExternalIDs;
}

+ (id)_companionBundleIDForItemID:(id)arg1 requestToken:(id)arg2;
+ (id)_appAlreadyRequestedForPurchaseInfo:(id)arg1;
+ (_Bool)_appAlreadyInstalledForPurchaseInfo:(id)arg1;
+ (id)taskWithXPCAppMetadata:(id)arg1 forDevice:(id)arg2 requestToken:(id)arg3;
- (void).cxx_destruct;
- (void)main;
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithPurchaseInfo:(id)arg1;

@end

