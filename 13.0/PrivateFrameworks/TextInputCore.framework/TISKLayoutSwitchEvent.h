//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent
{
    TIKeyboardLayout *_layout;
}

@property(retain, nonatomic) TIKeyboardLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)description;
- (id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3;

@end
