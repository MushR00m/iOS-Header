//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BUCoalescingCallBlock : NSObject
{
    _Bool _pending;
    _Bool _invoking;
    unsigned short _notifyTimeoutDurationSeconds;
    double _coalescingDelay;
    double _maximumDelay;
    CDUnknownBlockType _notifyBlock;
    CDUnknownBlockType _notifyTimeoutBlock;
    unsigned long long _nextCoalescingTime;
    unsigned long long _nextMaxTime;
    NSString *_notifyBlockDescription;
    NSMutableArray *_callbacks;
    NSObject<OS_dispatch_queue> *_sync;
    NSObject<OS_dispatch_group> *_group;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sync; // @synthesize sync=_sync;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(copy, nonatomic) NSString *notifyBlockDescription; // @synthesize notifyBlockDescription=_notifyBlockDescription;
@property(nonatomic, getter=isInvoking) _Bool invoking; // @synthesize invoking=_invoking;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic) unsigned long long nextMaxTime; // @synthesize nextMaxTime=_nextMaxTime;
@property(nonatomic) unsigned long long nextCoalescingTime; // @synthesize nextCoalescingTime=_nextCoalescingTime;
@property(nonatomic) unsigned short notifyTimeoutDurationSeconds; // @synthesize notifyTimeoutDurationSeconds=_notifyTimeoutDurationSeconds;
@property(copy, nonatomic) CDUnknownBlockType notifyTimeoutBlock; // @synthesize notifyTimeoutBlock=_notifyTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
@property(nonatomic) double maximumDelay; // @synthesize maximumDelay=_maximumDelay;
@property(nonatomic) double coalescingDelay; // @synthesize coalescingDelay=_coalescingDelay;
- (void).cxx_destruct;
- (void)signalWithCompletion:(CDUnknownBlockType)arg1;
- (void)_coalescingTimeExpired:(unsigned long long)arg1;
- (void)_maxTimeExpired:(unsigned long long)arg1;
- (void)_invoke;
- (void)_invokeIfNotInProgress;
- (id)description;
- (id)initWithNotifyBlock:(CDUnknownBlockType)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(CDUnknownBlockType)arg4;
- (id)initWithNotifyBlock:(CDUnknownBlockType)arg1 blockDescription:(id)arg2;

@end
