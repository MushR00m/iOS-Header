//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface MLDCacheDeleteController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_libraries;
}

- (void).cxx_destruct;
- (void)_registerCacheDeleteHandler;
- (id)initWithLibraries:(id)arg1;

@end
