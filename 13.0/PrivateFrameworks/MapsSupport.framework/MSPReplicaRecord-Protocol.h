//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPVectorTimestamp, NSData;

@protocol MSPReplicaRecord <NSObject>
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents;
@end

