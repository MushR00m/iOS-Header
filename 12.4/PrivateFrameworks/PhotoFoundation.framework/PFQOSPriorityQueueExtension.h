//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFPriorityQueueExtension.h>

#import <PhotoFoundation/PFQOSPriorityEnqueuing-Protocol.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
{
}

- (void)enqueueWithQOSPriority:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueWithCurrentQOSPriority:(CDUnknownBlockType)arg1;
- (id)initWithConcurrentScheduling:(_Bool)arg1;

@end
