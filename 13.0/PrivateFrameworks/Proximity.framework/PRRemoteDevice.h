//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface PRRemoteDevice : NSObject <NSSecureCoding, NSCopying>
{
    long long _deviceType;
    NSData *_btAdvAddress;
    NSData *_roseMACAddress;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSData *roseMACAddress; // @synthesize roseMACAddress=_roseMACAddress;
@property(copy, nonatomic) NSData *btAdvAddress; // @synthesize btAdvAddress=_btAdvAddress;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)compareField:(id)arg1 to:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoseMACAddress:(id)arg1;
- (id)initWithBeaconUUID:(id)arg1;
- (id)initWithCompanionUUID:(id)arg1;
- (id)initWithTestCompanionBtAdvAddress:(id)arg1;
- (id)initWithBTAdvAddress:(id)arg1;

@end
