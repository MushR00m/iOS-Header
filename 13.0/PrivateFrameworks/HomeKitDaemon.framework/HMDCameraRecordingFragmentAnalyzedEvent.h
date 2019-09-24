//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString, NSUUID;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>
{
    int _recordingReason;
    long long _analysisResultCode;
    NSUUID *_clipModelID;
}

+ (id)uuid;
@property int recordingReason; // @synthesize recordingReason=_recordingReason;
@property(retain) NSUUID *clipModelID; // @synthesize clipModelID=_clipModelID;
@property long long analysisResultCode; // @synthesize analysisResultCode=_analysisResultCode;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
