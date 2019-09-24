//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerVolumeAnimator : NSObject
{
    _Bool _animatingTowardsZero;
    _Bool _animatingAwayFromZero;
    AVPlayerController *_playerController;
    double _volumeToRestore;
}

@property(nonatomic, getter=isAnimatingAwayFromZero) _Bool animatingAwayFromZero; // @synthesize animatingAwayFromZero=_animatingAwayFromZero;
@property(nonatomic, getter=isAnimatingTowardsZero) _Bool animatingTowardsZero; // @synthesize animatingTowardsZero=_animatingTowardsZero;
@property(nonatomic) double volumeToRestore; // @synthesize volumeToRestore=_volumeToRestore;
@property(readonly, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)restoreVolumeIfNeeded;
- (void)setProgressAwayFromZero:(double)arg1;
- (void)setProgressTowardsZero:(double)arg1;
- (_Bool)canAnimateVolumeAwayFromZero;
- (_Bool)canAnimateVolumeTowardsZero;
- (_Bool)currentRouteHasVolumeControl;
- (id)initWithPlayerController:(id)arg1;

@end
