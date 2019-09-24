//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKTransitArtworkManager, NSCache;

@interface MKArtworkDataSourceCache : NSObject
{
    NSCache *_artworkImageCache;
    MKTransitArtworkManager *_artworkManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) MKTransitArtworkManager *artworkManager; // @synthesize artworkManager=_artworkManager;
- (void).cxx_destruct;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 widthPaddingMultiple:(double)arg6;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;
- (id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 nightMode:(_Bool)arg3;
- (void)purge;
- (void)_shieldPackDidUpdate;
- (id)initWithArtworkManager:(id)arg1;

@end
