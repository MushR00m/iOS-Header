//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REBlockSentinel : NSObject
{
    _Bool _completed;
    CDUnknownBlockType _failureBlock;
}

@property(getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
- (void).cxx_destruct;
- (void)complete;
- (void)dealloc;
- (id)initWithFailureBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
