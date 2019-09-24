//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters;

@interface HMDCameraRecordingMediaContainerConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDCameraRecordingMediaContainer *_container;
    HMDCameraRecordingMediaContainerParameters *_parameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainerParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingMediaContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2;

@end
