//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SBFloatingDockPlatterMetrics : NSObject
{
    double _continuousCornerRadius;
    double _shadowRadius;
    double _shadowYOffset;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) double shadowYOffset; // @synthesize shadowYOffset=_shadowYOffset;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)initWithBounds:(struct CGRect)arg1 continuousCornerRadius:(double)arg2 shadowRadius:(double)arg3 shadowYOffset:(double)arg4;

@end
