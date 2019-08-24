//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarFocusableButton.h"

__attribute__((visibility("hidden")))
@interface CarZoomButton : CarFocusableButton
{
    struct CGRect _lastBounds;
    unsigned long long _roundedCorners;
}

+ (id)buttonWithRoundedCorners:(unsigned long long)arg1;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)layoutSubviews;
- (void)setCharge:(float)arg1;
- (_Bool)_isChargeEnabled;

@end
