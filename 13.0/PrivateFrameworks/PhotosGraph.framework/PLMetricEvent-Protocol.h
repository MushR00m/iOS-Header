//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PLMetricEvent <NSObject>
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) NSString *identifier;
- (void)gatherMetricsWithProgressBlock:(void (^)(double, _Bool *))arg1;
@end
