//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface AFUISiriLockStateTransport : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_transport;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)afuiSiriLockState;
- (id)description;
- (id)initWithAFUISiriLockState:(unsigned long long)arg1;

@end
