//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterfaceClient : NSExtensionContext
{
    id <_UIIVCInterface> _forwardingInterface;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <_UIIVCInterface> forwardingInterface; // @synthesize forwardingInterface=_forwardingInterface;
- (void)dealloc;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (id)responseDelegate;

@end
