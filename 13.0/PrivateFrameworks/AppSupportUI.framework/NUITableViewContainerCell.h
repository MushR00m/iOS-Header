//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell
{
    NUIContainerView *_containerView;
}

+ (Class)containerViewClass;
@property(readonly, nonatomic) NUIContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
