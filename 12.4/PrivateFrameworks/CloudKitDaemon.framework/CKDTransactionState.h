//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetBatch, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDTransactionState : NSObject
{
    CKDAssetBatch *_assetBatch;
    NSMutableDictionary *_itemByAssetId;
}

@property(retain, nonatomic) NSMutableDictionary *itemByAssetId; // @synthesize itemByAssetId=_itemByAssetId;
@property(retain, nonatomic) CKDAssetBatch *assetBatch; // @synthesize assetBatch=_assetBatch;
- (void).cxx_destruct;
- (id)init;

@end
