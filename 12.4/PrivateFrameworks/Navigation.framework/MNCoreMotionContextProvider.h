//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOMotionContextProvider-Protocol.h>

@class CMActivityManager, MNTraceRecorder, NSString;
@protocol GEOMotionContextProviderDelegate;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider>
{
    CMActivityManager *_activityManager;
    id <GEOMotionContextProviderDelegate> _delegate;
    MNTraceRecorder *_traceRecorder;
}

@property(nonatomic) __weak id <GEOMotionContextProviderDelegate> motionDelegate; // @synthesize motionDelegate=_delegate;
- (void).cxx_destruct;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void)dealloc;
- (id)initWithTraceRecorder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

