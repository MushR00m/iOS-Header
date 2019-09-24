//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface UIWKDocumentRequest : NSObject
{
    id <NSCopying> _inputElementIdentifier;
    long long _flags;
    long long _surroundingGranularity;
    long long _granularityCount;
    struct CGRect _documentRect;
}

@property(nonatomic) struct CGRect documentRect; // @synthesize documentRect=_documentRect;
@property(nonatomic) long long granularityCount; // @synthesize granularityCount=_granularityCount;
@property(nonatomic) long long surroundingGranularity; // @synthesize surroundingGranularity=_surroundingGranularity;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <NSCopying> inputElementIdentifier; // @synthesize inputElementIdentifier=_inputElementIdentifier;
- (void)dealloc;

@end
