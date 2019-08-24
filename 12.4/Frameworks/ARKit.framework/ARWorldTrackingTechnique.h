//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class ARWorldTrackingErrorData, ARWorldTrackingOptions, ARWorldTrackingPoseData, ARWorldTrackingReferenceAnchorData, NSDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    _Bool _useFixedIntrinsics;
    long long _vioHandleState;
    NSObject<OS_dispatch_semaphore> *_vioHandleStateSemaphore;
    NSObject<OS_dispatch_semaphore> *_vioObjectDetectionSemaphore;
    ARWorldTrackingReferenceAnchorData *_anchorData;
    ARWorldTrackingErrorData *_errorData;
    ARWorldTrackingPoseData *_cachedPoseData;
    long long _reinitializationAttempts;
    long long _reinitializationAttemptsAtInitialization;
    double _lastRelocalizationTimestamp;
    double _lastQualityKeyframeTimestamp;
    long long _previousKeyframeCount;
    double _lastPoseTrackingMapTimestamp;
    double _lastMajorRelocalizationTimestamp;
    double _lastPoseMajorRelocalizationTimestamp;
    _Bool _relocalizingAfterSensorDataDrop;
    _Bool _didRelocalize;
    _Bool _didClearMap;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    double _minVergenceAngleCosine;
    double _resultLatency;
    _Bool _allowPoseGraphUpdates;
    NSDictionary *_objectDetectionOptions;
    ARWorldTrackingOptions *_mutableOptions;
}

+ (_Bool)supportsVideoResolution:(struct CGSize)arg1;
+ (_Bool)isSupported;
@property(retain) ARWorldTrackingOptions *mutableOptions; // @synthesize mutableOptions=_mutableOptions;
- (void).cxx_destruct;
- (_Bool)setupObjectDetection:(id)arg1;
- (id)getObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeReferenceAnchors:(id)arg1;
- (void)addReferenceAnchors:(id)arg1;
- (void)loadSurfaceData:(id)arg1;
- (id)serializeSurfaceData;
- (void)clearMap;
- (id)serializeMapData;
- (CDStruct_14d5dc5e)cameraTransformAtTimestamp:(double)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)vioHandleState;
@property(readonly, copy, nonatomic) ARWorldTrackingOptions *options;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end
