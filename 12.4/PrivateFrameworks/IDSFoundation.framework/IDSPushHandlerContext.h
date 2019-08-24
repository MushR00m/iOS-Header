//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_topics;
    NSSet *_commands;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSSet *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;

@end
