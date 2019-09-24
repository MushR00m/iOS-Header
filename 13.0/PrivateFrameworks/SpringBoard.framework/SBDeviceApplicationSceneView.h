//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationSceneView.h>

#import <SpringBoard/SBAppSwitcherPageContentView-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneClassicAccessoryViewDelegate-Protocol.h>

@class NSString, SBApplicationSceneViewStatusBarDescriptor, SBDeviceApplicationSceneClassicAccessoryView, SBDeviceApplicationSceneHandle, SBFHomeGrabberSettings, SBHomeGrabberRotationView, SBHomeGrabberView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, UIView, _UIDirectionalRotationView;
@protocol SBApplicationSceneBackgroundView, UISceneLayerTarget, UIScenePresentation;

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBDeviceApplicationSceneClassicAccessoryViewDelegate, SBAppSwitcherPageContentView>
{
    id <UISceneLayerTarget> _statusBarLayerTarget;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    SBApplicationSceneViewStatusBarDescriptor *_statusBarDescriptor;
    _UIDirectionalRotationView *_hostCounterRotationView;
    SBHomeGrabberRotationView *_grabberRotationView;
    SBFHomeGrabberSettings *_grabberSettings;
    long long _lastStableOverlayOrientation;
    long long _rotationStartOrientation;
    long long _rotationEndOrientation;
    SBDeviceApplicationSceneClassicAccessoryView *_classicAccessoryView;
    UIView *_classicWrapperView;
    UIView *_classicPositioningView;
    UIView<UIScenePresentation> *_wrappedHostView;
    _Bool _active;
    _Bool _visible;
    _Bool _sceneOverlayNeedsCounterRotation;
    double _statusBarAlpha;
    UIView *_appOverlayView;
}

@property(nonatomic) _Bool sceneOverlayNeedsCounterRotation; // @synthesize sceneOverlayNeedsCounterRotation=_sceneOverlayNeedsCounterRotation;
@property(retain, nonatomic) UIView *appOverlayView; // @synthesize appOverlayView=_appOverlayView;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(retain, nonatomic) SBApplicationSceneViewStatusBarDescriptor *statusBarDescriptor; // @synthesize statusBarDescriptor=_statusBarDescriptor;
- (void).cxx_destruct;
- (void)_noteRotationAnimationCompleted;
- (void)_maybeStartTrackingRotationForOverlay;
- (void)_updateReferenceSize:(struct CGSize)arg1 andOrientation:(long long)arg2;
- (void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_updateStatusBarVisibilityForHostView;
- (long long)_wallpaperStyle;
@property(readonly, nonatomic) _Bool contentRequiresGroupOpacity;
@property(nonatomic) double cornerRadius;
- (id)deviceApplicationSceneView;
- (_Bool)_representsTranslucentContent;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (void)_refresh;
- (void)layoutSubviews;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (_Bool)_sceneDrivesOwnRotation;
- (void)_tearDownHostCounterRotationViewIfNecessary;
- (void)_createHostCounterRotationViewIfNecessary;
- (void)tearDownHomeGrabberView;
- (void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(nonatomic) _Bool forcesStatusBarHidden;
@property(retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView; // @dynamic backgroundView;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (void)_layoutLiveHostView:(id)arg1;
- (id)_transitionViewForHostView;
- (void)_configureSceneLiveHostView:(id)arg1;
- (void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1;
- (struct CGRect)_effectiveSceneBounds;
- (void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1;
- (void)teardownClassicAccesoryViewIfNecessary;
- (void)createClassicAccesoryViewIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long orientation;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @dynamic sceneHandle;
@property(readonly) Class superclass;

@end
