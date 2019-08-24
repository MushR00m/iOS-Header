//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFObservable.h>

#import <MIME/MFObserver-Protocol.h>

@class MFQueue, NSError, NSLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MFReplayObservable : MFObservable <MFObserver>
{
    NSLock *_lock;
    _Bool _isStopped;
    NSError *_error;
    MFQueue *_queue;
    NSMutableArray *_observers;
}

- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)_unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
