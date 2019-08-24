//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATMessage, CATRemoteTransport;

__attribute__((visibility("hidden")))
@interface _CATRemoteTransportSendMessageOperation : CATOperation
{
    CATRemoteTransport *_transport;
    CATMessage *_message;
}

@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATRemoteTransport *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (void)didEncodeData:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;

@end
