//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPVideoView.h>

#import <MediaPlaybackCore/MPCVideoView-Protocol.h>

@class AVPlayerLayer, NSString;

@interface MPVideoView (MPCPlaybackEngineMiddlewareAdditions) <MPCVideoView>
+ (id)keyPathsForValuesAffectingPreferredContentSize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly) Class superclass;
@end
