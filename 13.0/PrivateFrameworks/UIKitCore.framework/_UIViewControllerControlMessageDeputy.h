//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITargetedProxy.h>

#import <UIKitCore/_UIViewServiceDeputy-Protocol.h>
#import <UIKitCore/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>
{
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)XPCInterface;
- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
