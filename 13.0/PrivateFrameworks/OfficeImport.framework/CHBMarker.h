//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBMarker : NSObject
{
}

+ (id)readFrom:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (int)xlMarkerStyleFromCHDMarkerType:(int)arg1;
+ (int)chdMarkerStyleFromXlMarkerType:(int)arg1;

@end
