//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTablePartSection.h"

@class MKMapSnapshotOptions;

__attribute__((visibility("hidden")))
@interface RAPReportComposerLocationPartSection : RAPTablePartSection
{
    double _mapHeight;
    MKMapSnapshotOptions *_snapshotOptions;
    _Bool _showPin;
}

- (void).cxx_destruct;
- (id)cellForRowAtIndex:(long long)arg1;
- (void)registerReuseIdentifiersForCells;
- (long long)rowsCount;
- (id)initWithSnapshotOptions:(id)arg1 mapHeight:(double)arg2 showPin:(_Bool)arg3;
- (id)initWithMapType:(unsigned long long)arg1 mapRect:(CDStruct_02837cd9)arg2 showPin:(_Bool)arg3;

@end
