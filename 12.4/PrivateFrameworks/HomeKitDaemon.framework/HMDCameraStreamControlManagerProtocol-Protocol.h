//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraStreamMetrics, NSDictionary, NSError, NSNumber, NSString;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
- (void)remoteSetup:(NSString *)arg1;
- (void)updateAudioVolume:(NSNumber *)arg1 callback:(void (^)(_Bool))arg2;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)stopStream:(NSError *)arg1;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)negotiateStream;
@end
