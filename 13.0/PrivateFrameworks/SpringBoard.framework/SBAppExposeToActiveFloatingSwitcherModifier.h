//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBAppLayout, SBSwitcherModifier, SBSwitcherToActiveFloatingSwitcherModifier;

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    unsigned long long _direction;
    SBSwitcherModifier *_multitaskingModifier;
    SBAppLayout *_activeAppLayout;
    SBSwitcherToActiveFloatingSwitcherModifier *_switcherToActiveFloatingAppModifier;
    NSArray *_appLayoutsPriorToTransitionFromAppExpose;
}

- (void).cxx_destruct;
- (_Bool)_isEffectivelyActiveFloatingApp;
- (double)_unselectedCardScale;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5;

@end

