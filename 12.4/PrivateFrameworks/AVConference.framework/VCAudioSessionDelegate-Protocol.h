//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCAudioSessionDelegate <NSObject>

@optional
- (void)didSessionSampleRateChange;
- (void)didSessionEndQuietTime;
- (void)didSessionBeginQuietTime;
- (void)didSessionEnd;
- (void)didSessionStop;
- (void)didSessionResume;
- (void)didSessionPause;
@end
