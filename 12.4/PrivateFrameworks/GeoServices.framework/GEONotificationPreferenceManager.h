//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject
{
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)reset;
- (void)setEnabled:(_Bool)arg1 forSubTestWithName:(id)arg2;
- (_Bool)isEnabledForSubTestWithName:(id)arg1;
- (id)init;

@end
