//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTRecordView.h>

@class AVTAvatar;

@interface AVTPuppetView : AVTRecordView
{
}

- (void)recordView:(id)arg1 audioSessionInterruptionEnded:(id)arg2;
- (void)recordView:(id)arg1 audioSessionWasInterrupted:(id)arg2;
- (void)recordView:(id)arg1 sessionInterruptionEnded:(id)arg2;
- (void)recordView:(id)arg1 sessionWasInterrupted:(id)arg2;
- (void)recordView:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
- (void)recordView:(id)arg1 previewDidChangeStatus:(long long)arg2;
- (void)recordViewDidLostTrackingWhileRecording:(id)arg1;
- (void)_avt_commonInit;
@property(retain, nonatomic) AVTAvatar *avatarInstance;

@end

