//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSNumber, NSString;

@interface STShowStockOverviewRequest : AFSiriRequest
{
    NSString *_name;
    NSString *_symbol;
    NSString *_exchange;
    NSNumber *_price;
    NSNumber *_high;
    NSNumber *_low;
    NSNumber *_change;
    NSNumber *_changePercent;
    NSString *_chartData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)chartData;
- (id)changePercent;
- (id)change;
- (id)low;
- (id)high;
- (id)price;
- (id)exchange;
- (id)symbol;
- (id)name;
- (id)createResponse;
- (id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9;

@end

