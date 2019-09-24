//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTCReporting/NSCoding-Protocol.h>
#import <RTCReporting/NSSecureCoding-Protocol.h>

@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_token;
    int _level;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 level:(int)arg2;

@end
