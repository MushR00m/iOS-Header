//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceClientDelegate;

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint
{
    id <NNMKAccountsSyncServiceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKAccountsSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)sendAccountAuthenticationStatus:(id)arg1;
- (id)updateAccountSourceTypeForAccount:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end
