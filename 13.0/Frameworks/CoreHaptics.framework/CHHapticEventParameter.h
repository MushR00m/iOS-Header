//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHHapticEventParameter : NSObject
{
    NSString *_param;
    float _value;
}

@property float value; // @synthesize value=_value;
@property(readonly) NSString *parameterID; // @synthesize parameterID=_param;
- (void).cxx_destruct;
- (id)initWithParameterID:(id)arg1 value:(float)arg2;
- (id)init;

@end
