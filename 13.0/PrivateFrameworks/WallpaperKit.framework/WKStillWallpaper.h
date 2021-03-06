//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WallpaperKit/WKAbstractWallpaper.h>

#import <WallpaperKit/WKFileBasedWallpaper-Protocol.h>

@class NSString, NSURL;

@interface WKStillWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper>
{
    NSURL *_fullsizeImageURL;
    NSURL *_thumbnailImageURL;
}

@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSURL *fullsizeImageURL; // @synthesize fullsizeImageURL=_fullsizeImageURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) double stillTimeInVideo;
@property(readonly, copy, nonatomic) NSURL *videoAssetURL;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

