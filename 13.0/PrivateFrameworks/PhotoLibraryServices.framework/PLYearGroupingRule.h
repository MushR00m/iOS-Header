//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLHighlightItemClustererRule-Protocol.h>

@class NSCalendar, NSString;

@interface PLYearGroupingRule : NSObject <PLHighlightItemClustererRule>
{
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (_Bool)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (_Bool)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (unsigned long long)dominantYearForStartDate:(id)arg1 endDate:(id)arg2;
- (void)titlesForHighlightItemList:(id)arg1 forceUpdateLocale:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)titlesForHighlightItemList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
