//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMResidentDevice.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class HMAccessory, NSString;

@interface HMResidentDevice (HFDebugging) <HFStateDumpBuildable>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *hf_displayName;
@property(readonly, nonatomic) HMAccessory *hf_linkedAccessory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
