//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject
{
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)arg1;
- (void).cxx_destruct;
- (id)allOperations;
- (id)allMiddleware;
- (id)operationsForMiddleware:(id)arg1;
- (id)_init;

@end
