//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FPDLifetimeExtender-Protocol.h"

@class NSString;

@interface FPDXPCProviderServicerLifetimeExtender : NSObject <FPDLifetimeExtender>
{
    int _requestEffectivePID;
}

@property int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
