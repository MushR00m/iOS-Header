//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GEORoutePreloadSession;

@protocol GEORoutePreloadSessionDelegate <NSObject>
- (void)routePreloadSessionPausedLoading:(id <GEORoutePreloadSession>)arg1;
- (void)routePreloadSessionStoppedLoading:(id <GEORoutePreloadSession>)arg1 wasEnabledAndNotPaused:(_Bool)arg2;
- (void)routePreloadSessionBeganLoading:(id <GEORoutePreloadSession>)arg1;
@end

