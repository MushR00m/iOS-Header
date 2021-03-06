//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface NEDNSProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    long long _type;
    NSArray *_servers;
    NSString *_domain;
    NSData *_publicKey;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain) NSString *domain; // @synthesize domain=_domain;
@property(readonly) NSArray *servers; // @synthesize servers=_servers;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 servers:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

