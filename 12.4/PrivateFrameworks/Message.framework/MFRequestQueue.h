//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject
{
    NSConditionLock *_condition;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
    NSMutableArray *_requests;
}

@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (void)dealloc;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (void)_processRequests:(id)arg1 consumers:(id)arg2;
- (void)processRequest:(id)arg1 consumer:(id)arg2;
- (void)addRequests:(id)arg1 consumers:(id)arg2;
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;
- (void)addRequest:(id)arg1 consumer:(id)arg2;
- (id)init;

@end
