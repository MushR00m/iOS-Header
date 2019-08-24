//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookSupport/NSObject-Protocol.h>

@protocol QLThumbnailSurfaceGeneratorProtocol;

@protocol QLThumbnailService <NSObject>
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 ioSurfaceGenerator:(id <QLThumbnailSurfaceGeneratorProtocol>)arg6 completionHandler:(void (^)(NSData *, QLURLHandler *, IOSurface *, struct CGSize, _Bool, NSError *))arg7;
@end
