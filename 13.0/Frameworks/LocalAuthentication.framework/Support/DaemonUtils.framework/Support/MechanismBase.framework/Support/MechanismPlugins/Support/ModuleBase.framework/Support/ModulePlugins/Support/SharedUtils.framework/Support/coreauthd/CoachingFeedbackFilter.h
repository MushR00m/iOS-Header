//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MechanismBase, NSMutableArray, NSNumber, NSSet;
@protocol LARemoteUI;

@interface CoachingFeedbackFilter : NSObject
{
    NSNumber *_lastFeedback;
    NSNumber *_lastSentFeedback;
    _Bool _waiting;
    NSMutableArray *_pendingBlocks;
    _Bool _finished;
    NSSet *_feedbackSet;
    double _feedbackDuration;
    double _iconDuration;
    MechanismBase<LARemoteUI> *_delegate;
}

@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak MechanismBase<LARemoteUI> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double iconDuration; // @synthesize iconDuration=_iconDuration;
@property(readonly, nonatomic) double feedbackDuration; // @synthesize feedbackDuration=_feedbackDuration;
@property(readonly, nonatomic) NSSet *feedbackSet; // @synthesize feedbackSet=_feedbackSet;
- (void).cxx_destruct;
- (void)_dispatchPendingBlocks;
- (void)dispatchNowOrWhenFeedbackDurationAchieved:(_Bool)arg1 finish:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)_doneWaiting;
- (void)_sendFeedback:(long long)arg1;
- (double)_timeoutForFeedback:(long long)arg1;
- (void)scheduleFeedback:(long long)arg1;
- (id)initWithDelegate:(id)arg1 feedbackSet:(id)arg2 feedbackDuration:(double)arg3 iconDuration:(double)arg4;

@end
