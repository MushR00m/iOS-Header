//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AlternativeInfo : NSObject
{
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSNumber *_isFromDevice;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
}

@property(copy, nonatomic) NSNumber *originalScore; // @synthesize originalScore=_originalScore;
@property(copy, nonatomic) NSNumber *originalRank; // @synthesize originalRank=_originalRank;
@property(copy, nonatomic) NSNumber *isFromDevice; // @synthesize isFromDevice=_isFromDevice;
@property(copy, nonatomic) NSNumber *combinedScore; // @synthesize combinedScore=_combinedScore;
@property(copy, nonatomic) NSNumber *combinedRank; // @synthesize combinedRank=_combinedRank;
- (void).cxx_destruct;

@end

