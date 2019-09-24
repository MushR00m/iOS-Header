//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSWallpaperClient;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject
{
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _wasInvalidated;
}

- (void).cxx_destruct;
- (void)restoreDefaultWallpaperWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2;
- (_Bool)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2;
- (_Bool)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect)arg2 wallpaperMode:(long long)arg3;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
