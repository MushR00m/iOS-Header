//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSCallbackInvoker : NSObject
{
    void *addressBook;
    CDUnknownFunctionPointerType callback;
    void *context;
}

+ (void)invokeOnThread:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 withAddressBook:(void *)arg3 context:(void *)arg4;
- (void)invoke;

@end
