//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol VCSessionDownlinkBandwidthAllocatorClient
@property(nonatomic, getter=isVideoSuspended) _Bool videoSuspended;
@property(readonly) _Bool isVisible;
@property(readonly) unsigned int prominenceIndex;
@property(readonly) unsigned int visibilityIndex;
@property(readonly) unsigned char videoQuality;
@property(readonly) unsigned short activeDownlinkAudioStreamID;
@property(readonly) unsigned short activeDownlinkVideoStreamID;
@property(readonly) NSNumber *optedInAudioStreamID;
@property(readonly) NSNumber *optedInVideoStreamID;
@property(readonly) unsigned int optedInNetworkBitrateAudio;
@property(readonly) unsigned int optedInNetworkBitrateVideo;
@property(readonly) unsigned int actualNetworkBitrateAudio;
@property(readonly) unsigned int actualNetworkBitrateVideo;
@property(readonly) NSArray *mediaEntries;
@property(readonly) NSString *uuid;
@end
