//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPFetcher : NSObject
{
    unsigned int _loggingID;
    id _userData;
}

@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) unsigned int _loggingID; // @synthesize _loggingID;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
