//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView
{
    NSMutableArray *_levels;
}

@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
- (void).cxx_destruct;
- (void)updateLevel:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
