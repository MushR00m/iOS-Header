//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AttentionAwareness/NSObject-Protocol.h>

@class AWAttentionEvent;

@protocol AWFrameworkClient <NSObject>
- (void)notifyPollEventType:(unsigned long long)arg1 event:(AWAttentionEvent *)arg2;
- (void)notifyEvent:(AWAttentionEvent *)arg1;
- (void)notify:(unsigned long long)arg1;
@end
