//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

#import <PhotosUI/PUMomentShareActivity-Protocol.h>

@class NSString, PUActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity : PUActivity <PUMomentShareActivity>
{
}

+ (long long)activityCategory;
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController;
@property(readonly) Class superclass;

@end
