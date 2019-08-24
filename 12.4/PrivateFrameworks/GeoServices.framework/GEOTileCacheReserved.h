//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileCacheReserved : NSObject
{
    struct mutex _reservedLock;
    struct list<CacheItem, std::__1::allocator<CacheItem>> _reservedList;
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>>> _reservedMap;
    unsigned long long _reservedMaxCapacity;
    unsigned long long _reservedMaxCost;
    unsigned long long _reservedCurrentCost;
    unsigned long long _reservedCurrentCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
