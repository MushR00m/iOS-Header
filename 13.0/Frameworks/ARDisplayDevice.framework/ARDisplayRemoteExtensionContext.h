//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class ARDisplayConfiguration;

@interface ARDisplayRemoteExtensionContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(readonly) ARDisplayConfiguration *currentConfiguration;
- (id)getCurrentConfig;
- (void)currentConfigData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
