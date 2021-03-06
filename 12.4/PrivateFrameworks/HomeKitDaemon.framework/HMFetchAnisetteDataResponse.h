//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKAnisetteData, NSDictionary, NSString;

@interface HMFetchAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    AKAnisetteData *_anisetteData;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

