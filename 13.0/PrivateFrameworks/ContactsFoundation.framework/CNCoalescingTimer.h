//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUnfairLock;
@protocol CNCancelable, CNScheduler;

@interface CNCoalescingTimer : NSObject
{
    _Bool _open;
    _Bool _someoneWaiting;
    id <CNCancelable> _scheduledToken;
    id <CNScheduler> _downstreamScheduler;
    CNUnfairLock *_resourceLock;
    id <CNScheduler> _delayScheduler;
    CDUnknownBlockType _block;
    double _delay;
    unsigned long long _options;
}

+ (id)os_log;
@property(nonatomic, getter=isSomeoneWaiting) _Bool someoneWaiting; // @synthesize someoneWaiting=_someoneWaiting;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) id <CNScheduler> delayScheduler; // @synthesize delayScheduler=_delayScheduler;
@property(readonly, nonatomic) CNUnfairLock *resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly, nonatomic) id <CNScheduler> downstreamScheduler; // @synthesize downstreamScheduler=_downstreamScheduler;
@property(retain, nonatomic) id <CNCancelable> scheduledToken; // @synthesize scheduledToken=_scheduledToken;
- (void).cxx_destruct;
- (void)nts_closeDoor;
- (void)nts_openDoor;
- (void)nts_makeSomeoneWait;
- (void)nts_letSomeoneIn;
- (_Bool)nts_isDoorOpened;
- (void)handleEvent;
- (void)dealloc;
- (id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5;

@end
