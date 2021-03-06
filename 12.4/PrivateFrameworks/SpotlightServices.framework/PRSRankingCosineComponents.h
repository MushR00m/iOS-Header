//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PRSRankingCosineComponents : NSObject
{
    NSArray *_TermFrequencies;
    NSArray *_TermFrequenciesWeighted;
    NSArray *_InverseDocFrequencies;
    NSArray *_TermInverseDoc;
    NSArray *_TermInverseDocWeighted;
    unsigned long long _fieldLength;
}

@property(nonatomic) unsigned long long fieldLength; // @synthesize fieldLength=_fieldLength;
@property(retain, nonatomic) NSArray *TermInverseDocWeighted; // @synthesize TermInverseDocWeighted=_TermInverseDocWeighted;
@property(retain, nonatomic) NSArray *TermInverseDoc; // @synthesize TermInverseDoc=_TermInverseDoc;
@property(retain, nonatomic) NSArray *InverseDocFrequencies; // @synthesize InverseDocFrequencies=_InverseDocFrequencies;
@property(retain, nonatomic) NSArray *TermFrequenciesWeighted; // @synthesize TermFrequenciesWeighted=_TermFrequenciesWeighted;
@property(retain, nonatomic) NSArray *TermFrequencies; // @synthesize TermFrequencies=_TermFrequencies;
- (void).cxx_destruct;

@end

