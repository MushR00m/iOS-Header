//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBCenterZoomSettings.h"

@class SBAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings
{
    double _appHeadStart;
    SBAnimationSettings *_appZoomSettings;
    SBAnimationSettings *_appFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *appFadeSettings; // @synthesize appFadeSettings=_appFadeSettings;
@property(retain) SBAnimationSettings *appZoomSettings; // @synthesize appZoomSettings=_appZoomSettings;
@property double appHeadStart; // @synthesize appHeadStart=_appHeadStart;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
