//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_MapsIPCInterface-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MapsIPCInterface : NSObject <_MapsIPCInterface, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_messagingQueue;
    NSXPCConnection *_brokerConnection;
    NSXPCListener *_xpcListener;
    NSString *_endpointIdentifier;
    _Bool _connectionRequested;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_group> *_connectionGroup;
}

- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_configureIncomingConnection:(id)arg1;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (void)performWithMapsRunning:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool canReceiveMessages;
- (_Bool)_isMapsActive;
- (_Bool)_isMapsRunning;
- (void)dealloc;
- (id)initWithListenerEndpointIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
