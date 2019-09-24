//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMLClassificationEvaluationMetrics : NSObject
{
}

+ (void)setReportSamplingRate:(unsigned int)arg1;
+ (float)roundFloatToSigFigs:(float)arg1 sigFigs:(int)arg2;
+ (void)addScoresForOutcomes:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3 metrics:(id)arg4;
+ (unsigned long long)falseNegatives:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (unsigned long long)trueNegatives:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (unsigned long long)falsePositives:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (unsigned long long)truePositives:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (float)f1Score:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (float)recall:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;
+ (float)precision:(id)arg1 predictions:(id)arg2 predicate:(CDUnknownBlockType)arg3;

@end
