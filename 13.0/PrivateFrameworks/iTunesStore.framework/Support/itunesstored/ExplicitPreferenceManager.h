//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExplicitPreferenceManager : NSObject
{
}

+ (id)sharedManager;
- (_Bool)explicitPreferencesDisabled:(char *)arg1;
- (void)setExplicitPreferencesDisabled:(_Bool)arg1;
- (_Bool)lastChangeInducingBagExplicitOff:(char *)arg1;
- (void)setLastChangeInducingBagExplicitOff:(_Bool)arg1;
- (id)init;

@end

