//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, TILanguageModelOfflineLearningTask;

@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property(readonly) TILanguageModelOfflineLearningTask *learningTask;
- (void)didFinishLearning;
- (NSArray *)filterMessages:(NSArray *)arg1;
- (_Bool)learnMessages:(NSArray *)arg1 withRecipientRecords:(NSDictionary *)arg2;
@end

