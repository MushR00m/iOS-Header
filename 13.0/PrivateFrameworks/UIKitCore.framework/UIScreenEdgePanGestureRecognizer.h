//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>

@class NSString, _UISEGestureFeatureSettings, _UISEMuxGestureFeature;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate>
{
    _UISEGestureFeatureSettings *_settings;
    CDUnknownBlockType _createFeatureBlock;
    _UISEMuxGestureFeature *_rootFeature;
    unsigned long long _touchedEdges;
    unsigned long long _edges;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldSupportStylusTouches;
+ (_Bool)_shouldDefaultToTouches;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (id)debugDictionary;
- (unsigned long long)touchedEdges;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_setEdgeRegionSize:(double)arg1;
- (double)_edgeRegionSize;
- (void)_setBottomEdgeRegionSize:(double)arg1;
- (double)_bottomEdgeRegionSize;
- (void)featureDidChangeState:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)_touchInterfaceOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
