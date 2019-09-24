//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemLoadingStateContext-Protocol.h>

@class AVPlayerItem, NSError, NSString;

@interface SVPlayerItemLoadingStateContext : NSObject <SVPlayerItemLoadingStateContext>
{
    AVPlayerItem *_item;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
