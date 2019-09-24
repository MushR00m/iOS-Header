//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GameSession, KeepAlive;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface InGameAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    GameSession *_currentSession;
    _Bool _currentlyTrackingSessions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    KeepAlive *_keepAlive;
    NSObject<OS_dispatch_source> *_sessionValidationTimer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_validateSession;
- (void)_suspendTimerIfNecessary;
- (void)_setTrackingSessionState:(_Bool)arg1;
- (void)_flushSession;
- (id)_findActiveSessionForBundleID:(id)arg1 andSessionID:(id)arg2;
- (void)_finalizeSessionWithReason:(long long)arg1;
- (void)heartBeatForBundleID:(id)arg1 andSessionID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)gamePlayDidEndForBundleID:(id)arg1 withReason:(long long)arg2 andSessionID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)gamePlayDidBeginForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
