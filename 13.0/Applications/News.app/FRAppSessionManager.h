//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAppSessionDataProviding-Protocol.h"
#import "FRAppSessionDataReporting-Protocol.h"

@class NSString;

@interface FRAppSessionManager : NSObject <FRAppSessionDataProviding, FRAppSessionDataReporting>
{
    _Bool _specialEventsAvailableDuringSession;
    _Bool _specialEventsDismissedDuringSession;
}

@property(nonatomic) _Bool specialEventsDismissedDuringSession; // @synthesize specialEventsDismissedDuringSession=_specialEventsDismissedDuringSession;
@property(nonatomic) _Bool specialEventsAvailableDuringSession; // @synthesize specialEventsAvailableDuringSession=_specialEventsAvailableDuringSession;
- (void)clearSessionData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
