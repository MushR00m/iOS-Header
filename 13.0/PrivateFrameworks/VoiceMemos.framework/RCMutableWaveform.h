//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCWaveform.h>

@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform
{
}

- (id)classForCoder;
- (void)removeAllSegments;
- (void)removeSegment:(id)arg1;
- (void)addSegments:(id)arg1;
- (void)addSegment:(id)arg1;
- (_Bool)clipToTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)setSegments:(id)arg1;

// Remaining properties
@property(readonly) NSMutableArray *segments; // @dynamic segments;

@end
