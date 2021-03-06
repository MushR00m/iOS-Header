//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, WLKPlaybackSummary;

@protocol WLKConnectionServerProtocol <NSObject>
- (void)prewarm;
- (void)ping;
- (void)writeLocation:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool))arg2;
- (void)readLocation:(void (^)(NSDictionary *))arg1;
- (void)fetchSettings:(void (^)(NSDictionary *, NSError *))arg1;
- (void)postSettings:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)writeSettingsStore:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool))arg2;
- (void)readSettingsStore:(void (^)(NSDictionary *))arg1;
- (void)fetchApplications:(void (^)(NSDictionary *))arg1;
- (void)deletePlaybackActivityWithIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)requestConsentForBundleID:(NSString *)arg1 forceAuth:(_Bool)arg2 replyHandler:(void (^)(_Bool))arg3;
- (void)reportPlayback:(WLKPlaybackSummary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestPlaybackSummaryForID:(NSNumber *)arg1 completion:(void (^)(WLKPlaybackSummary *))arg2;
- (void)requestPlaybackSummary:(void (^)(WLKPlaybackSummary *))arg1;
@end

