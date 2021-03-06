//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARWorldTrackingErrorData : NSObject <ARResultData, NSSecureCoding>
{
    double _timestamp;
    long long _errorCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

