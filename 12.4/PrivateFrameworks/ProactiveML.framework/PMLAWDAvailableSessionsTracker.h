//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDBaseTracker.h>

@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker
{
    id <PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (void).cxx_destruct;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)arg1;
- (id)initWithAWDConnection:(id)arg1;
- (id)init;

@end
