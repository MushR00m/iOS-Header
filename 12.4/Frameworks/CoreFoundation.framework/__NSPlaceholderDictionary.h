//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)mutablePlaceholder;
+ (id)immutablePlaceholder;
+ (void)initialize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end
