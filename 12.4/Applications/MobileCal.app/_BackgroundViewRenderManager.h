//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue;

@interface _BackgroundViewRenderManager : NSObject
{
    NSOperationQueue *_queue;
    NSMutableSet *_viewsInQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)cancelAllRendering;
- (void)removeViewFromQueue:(id)arg1;
- (void)addViewToQueue:(id)arg1;
- (id)init;

@end

