//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VKTileSetBackedTileSource;

__attribute__((visibility("hidden")))
@interface _VKTileSetBackedTileSourceTimerTarget : NSObject
{
    VKTileSetBackedTileSource *_tileSource;
}

@property(nonatomic) VKTileSetBackedTileSource *tileSource; // @synthesize tileSource=_tileSource;
- (void)expireTiles:(id)arg1;

@end
