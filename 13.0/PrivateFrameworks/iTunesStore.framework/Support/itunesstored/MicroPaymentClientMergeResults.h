//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet;

@interface MicroPaymentClientMergeResults : NSObject
{
    NSArray *_addedPayments;
    NSArray *_changedPayments;
    NSOrderedSet *_removedDownloadIDs;
    NSArray *_removedPayments;
}

@property(copy, nonatomic) NSArray *removedPayments; // @synthesize removedPayments=_removedPayments;
@property(copy, nonatomic) NSOrderedSet *removedDownloadIDs; // @synthesize removedDownloadIDs=_removedDownloadIDs;
@property(copy, nonatomic) NSArray *changedPayments; // @synthesize changedPayments=_changedPayments;
@property(copy, nonatomic) NSArray *addedPayments; // @synthesize addedPayments=_addedPayments;
@property(readonly, nonatomic) _Bool didChange;
- (void)dealloc;

@end
