//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CRSApplicationIcon : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(nonatomic) double iconImageScale; // @synthesize iconImageScale=_iconImageScale;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;

@end
