//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMetricsData, MTVPAFKit;
@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject
{
    long long _type;
    id <MTMediaPlaylistItem> _playlistItem;
    MTMetricsData *_startMetricsData;
    MTMetricsData *_stopMetricsData;
    MTVPAFKit *_vpafKit;
}

@property(nonatomic) __weak MTVPAFKit *vpafKit; // @synthesize vpafKit=_vpafKit;
@property(retain, nonatomic) MTMetricsData *stopMetricsData; // @synthesize stopMetricsData=_stopMetricsData;
@property(retain, nonatomic) MTMetricsData *startMetricsData; // @synthesize startMetricsData=_startMetricsData;
@property(retain, nonatomic) id <MTMediaPlaylistItem> playlistItem; // @synthesize playlistItem=_playlistItem;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)stopEventHandler;
- (id)startEventHandler;
- (_Bool)isStopped;
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)arg1;
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 vpafKit:(id)arg3;

@end
