//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRReportContentCell.h"

@class FRTextView;

@interface FRReportContentCommentsCell : FRReportContentCell
{
    FRTextView *_textView;
}

@property(retain, nonatomic) FRTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
