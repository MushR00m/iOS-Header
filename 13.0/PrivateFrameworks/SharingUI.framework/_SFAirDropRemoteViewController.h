//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SharingUI/SFAirDropViewServiceHostProtocol-Protocol.h>

@class NSString;
@protocol SFAirDropViewServiceHostProtocol;

__attribute__((visibility("hidden")))
@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol>
{
    id <SFAirDropViewServiceHostProtocol> _airDropHost;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak id <SFAirDropViewServiceHostProtocol> airDropHost; // @synthesize airDropHost=_airDropHost;
- (void).cxx_destruct;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (id)airDropExtensionService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

