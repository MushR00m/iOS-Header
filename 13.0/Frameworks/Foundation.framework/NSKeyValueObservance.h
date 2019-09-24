//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSObject
{
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _options:7;
    unsigned int _cachedIsShareable:1;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;

@end
