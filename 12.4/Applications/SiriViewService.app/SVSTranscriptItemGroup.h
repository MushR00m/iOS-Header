//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;
@protocol SVSTranscriptItemGroupDelegate;

@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration>
{
    NSMutableArray *_transcriptItems;
    NSMutableIndexSet *_insertionIndexes;
    _Bool _provisional;
    _Bool _waitsForConfirmation;
    double _presentationDelay;
    _Bool _eligibleForPresentation;
    _Bool _presentationDelayElapsed;
    id <SVSTranscriptItemGroupDelegate> _delegate;
}

@property(nonatomic, getter=_presentationDelayElapsed, setter=_setPresentationDelayElapsed:) _Bool presentationDelayElapsed; // @synthesize presentationDelayElapsed=_presentationDelayElapsed;
@property(nonatomic) __weak id <SVSTranscriptItemGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool waitsForConfirmation; // @synthesize waitsForConfirmation=_waitsForConfirmation;
@property(nonatomic, getter=isEligibleForPresentation) _Bool eligibleForPresentation; // @synthesize eligibleForPresentation=_eligibleForPresentation;
@property(readonly, nonatomic, getter=isProvisional) _Bool provisional; // @synthesize provisional=_provisional;
- (void).cxx_destruct;
- (void)removeElementAtIndex:(long long)arg1;
- (void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(_Bool)arg3;
- (unsigned long long)insertionIndexForTranscriptItem:(id)arg1;
- (void)_presentationEligibilityConditionDidChange;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSIndexSet *insertionIndexes;
@property(readonly, nonatomic) NSArray *transcriptItems;
- (id)description;
- (id)init;
- (id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(_Bool)arg3 waitsForConfirmation:(_Bool)arg4 presentationDelay:(double)arg5;

@end
