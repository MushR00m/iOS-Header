//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

@class MKArtworkImageView, NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TransitDirectionsBlockTransferCell : TransitDirectionsIconCell
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;
    NSLayoutConstraint *_imageViewToLabelVerticalAlignmentConstraint;
    NSLayoutConstraint *_primaryLabelLeadingToImageViewConstraint;
    NSLayoutConstraint *_primaryLabelLeadingConstraint;
    _MKUILabel *_primaryLabel;
    MKArtworkImageView *_blockTransferImageView;
}

+ (double)leadingTextInsetForBlockTransferTransitDirectionsListItem:(id)arg1 navigationState:(long long)arg2;
- (void).cxx_destruct;
- (void)setNavigationState:(long long)arg1;
- (void)_updateLineSpacing;
- (void)_updateFonts;
- (double)_primaryLabelLineSpacing;
- (double)_topToPrimaryLabelDistance;
- (double)_blockTransferImageOffsetFromPrimaryLabelBaseline;
- (void)configureWithItem:(id)arg1;
- (id)_initialConstraints;
- (void)_createSubviews;
- (void)_contentSizeCategoryDidChange;

@end
