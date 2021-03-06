//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>

@class MPCPlaybackEngine, NSArray, NSString;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPCPlaybackEngine *_playbackEngine;
}

@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (void).cxx_destruct;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

