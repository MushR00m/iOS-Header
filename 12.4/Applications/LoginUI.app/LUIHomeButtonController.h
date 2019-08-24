//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSHardwareButtonEventConsuming-Protocol.h"

@class NSString;

@interface LUIHomeButtonController : NSObject <SBSHardwareButtonEventConsuming>
{
    _Bool _singleTapActivated;
    _Bool _doubleTapActivated;
}

+ (id)sharedController;
@property(nonatomic) _Bool doubleTapActivated; // @synthesize doubleTapActivated=_doubleTapActivated;
@property(nonatomic) _Bool singleTapActivated; // @synthesize singleTapActivated=_singleTapActivated;
- (void)_tapType:(unsigned long long)arg1 observed:(_Bool)arg2;
- (void)deactivateTapType:(unsigned long long)arg1;
- (void)activateTapType:(unsigned long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
