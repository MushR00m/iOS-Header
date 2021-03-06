//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer
{
    unsigned long long _expectedSize;
    unsigned long long _currentBytes;
    CDUnknownBlockType _progressBlock;
}

@property(readonly) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2;

@end

