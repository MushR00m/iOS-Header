//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHPatternGraph : NSObject
{
    struct PatternGraph *_graph;
}

+ (struct PatternGraph *)sharedRootCursor;
+ (struct PatternGraph *)sharedCursorByAdvancingWithCharacterTypes:(unsigned int *)arg1 withLength:(unsigned long long)arg2 fromCursor:(struct PatternGraph *)arg3;
+ (id)sharedPatternGraph;
@property(nonatomic) struct PatternGraph *graph; // @synthesize graph=_graph;
- (id)init;
- (void)dealloc;

@end
