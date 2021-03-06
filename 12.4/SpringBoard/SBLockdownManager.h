//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;
    _Bool _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (_Bool)_isDeveloperDevice;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)lockdownState;
- (_Bool)brickedDevice;
- (void)_setupActivationState;
- (void)_resetActivationState;
- (id)init;

@end

