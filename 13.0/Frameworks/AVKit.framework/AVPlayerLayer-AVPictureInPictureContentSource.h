//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

#import <AVKit/AVPictureInPictureContentSource-Protocol.h>

@class NSString, UIWindow;

@interface AVPlayerLayer (AVPictureInPictureContentSource) <AVPictureInPictureContentSource>
- (id)avkit_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (id)avkit_pictureInPictureViewController;
@property(readonly, nonatomic) struct CGRect avkit_videoRectInWindow;
@property(readonly, nonatomic) UIWindow *avkit_window;
@property(readonly, nonatomic) _Bool avkit_isVisible;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
