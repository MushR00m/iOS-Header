//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface VSShortTermCache : NSObject
{
    NSCache *_cache;
    NSCache *_cacheTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *cacheTimer; // @synthesize cacheTimer=_cacheTimer;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)timeToLiveTimerFired:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3;
- (id)init;

@end
