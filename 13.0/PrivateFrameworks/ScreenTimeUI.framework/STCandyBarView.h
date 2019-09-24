//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView
{
    NSArray *_usageItems;
    NSArray *_viewItems;
}

@property(copy, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
- (void).cxx_destruct;
- (void)setUsageItems:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *usageItems; // @synthesize usageItems=_usageItems;
- (void)updateSectionViewImages;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3;

@end
