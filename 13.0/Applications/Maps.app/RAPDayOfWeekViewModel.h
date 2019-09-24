//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPDayOfWeekViewModel : NSObject
{
    int _dayEnum;
    NSString *_longSymbol;
    NSString *_shortSymbol;
    unsigned long long _semanticPosition;
}

+ (id)orderedWeekdaysForDayList:(id)arg1;
+ (id)orderedWeekdays;
@property(nonatomic) int dayEnum; // @synthesize dayEnum=_dayEnum;
@property(nonatomic) unsigned long long semanticPosition; // @synthesize semanticPosition=_semanticPosition;
@property(copy, nonatomic) NSString *shortSymbol; // @synthesize shortSymbol=_shortSymbol;
@property(copy, nonatomic) NSString *longSymbol; // @synthesize longSymbol=_longSymbol;
- (void).cxx_destruct;

@end
