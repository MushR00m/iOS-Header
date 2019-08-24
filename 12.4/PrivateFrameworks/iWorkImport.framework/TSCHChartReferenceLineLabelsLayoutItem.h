//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property(readonly, retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (void).cxx_destruct;
- (id)p_areaLayoutItem;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)p_drawingRectForModel:(id)arg1;
- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSize;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;

@end
