//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKDirectionalArrowRecognizer : NSObject
{
    id _target;
    SEL _action;
    long long _state;
    long long _arrows;
    long long _lastArrows;
}

@property(readonly, nonatomic) long long lastArrows; // @synthesize lastArrows=_lastArrows;
@property(readonly, nonatomic) long long arrows; // @synthesize arrows=_arrows;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)handleArrowMask:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
