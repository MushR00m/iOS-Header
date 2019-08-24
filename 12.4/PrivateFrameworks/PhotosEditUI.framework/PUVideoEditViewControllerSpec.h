//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUVideoEditViewControllerSpec : PUViewControllerSpec
{
    _Bool _wantsScrubberInToolbar;
}

@property(nonatomic) _Bool wantsScrubberInToolbar; // @synthesize wantsScrubberInToolbar=_wantsScrubberInToolbar;
- (void)updateIfNeeded;
- (id)newSpecChange;
@property(readonly, nonatomic) double scrubberEdgeMargins;
@property(readonly, nonatomic) double toolbarLongSideMargin;

@end
