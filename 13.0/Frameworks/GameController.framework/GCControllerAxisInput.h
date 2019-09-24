//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement
{
    _Bool _flipped;
    float _value;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerButtonInput *_positive;
    GCControllerButtonInput *_negative;
}

@property(nonatomic, getter=isFlipped) _Bool flipped; // @synthesize flipped=_flipped;
@property(retain, nonatomic) GCControllerButtonInput *negative; // @synthesize negative=_negative;
@property(retain, nonatomic) GCControllerButtonInput *positive; // @synthesize positive=_positive;
@property(nonatomic) float value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (void).cxx_destruct;
- (int)getAndResetTimesPressed;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
- (_Bool)isAnalog;
- (id)description;
- (id)initWithCollection:(id)arg1 flipped:(_Bool)arg2;

@end
