//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AFFuture : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    id _value;
}

- (void).cxx_destruct;
- (id)waitForValue:(unsigned long long)arg1;
- (id)initAndGetSetterBlock:(CDUnknownBlockType *)arg1;

@end
