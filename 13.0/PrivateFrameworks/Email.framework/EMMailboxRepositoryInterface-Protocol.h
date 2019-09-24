//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EMMailboxChangeAction, EMObjectID;
@protocol EMMailboxChangeObserver;

@protocol EMMailboxRepositoryInterface <NSObject>
- (void)performMailboxChangeAction:(EMMailboxChangeAction *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)refreshMailboxList;
- (void)cancelObservation:(EMObjectID *)arg1;
- (void)startObservingMailboxChangesWithChangeObserver:(id <EMMailboxChangeObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
- (void)getMailboxesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end
