//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXItemArrayRequest.h>

@class NSString;

@interface BOXCollectionItemsRequest : BOXItemArrayRequest
{
    NSString *_collectionID;
    NSString *_metadataTemplateKey;
    NSString *_metadataScope;
    struct _NSRange _range;
}

@property(readonly, copy, nonatomic) NSString *metadataScope; // @synthesize metadataScope=_metadataScope;
@property(readonly, copy, nonatomic) NSString *metadataTemplateKey; // @synthesize metadataTemplateKey=_metadataTemplateKey;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (void).cxx_destruct;
- (void)performRequestWithCached:(CDUnknownBlockType)arg1 refreshed:(CDUnknownBlockType)arg2;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithCollectionID:(id)arg1 inRange:(struct _NSRange)arg2 metadataTemplateKey:(id)arg3 metadataScope:(id)arg4;
- (id)initWithCollectionID:(id)arg1 inRange:(struct _NSRange)arg2;

@end
