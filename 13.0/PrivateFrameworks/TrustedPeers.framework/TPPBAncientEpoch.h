//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@interface TPPBAncientEpoch : PBCodable <NSCopying>
{
    unsigned long long _candidateEpoch;
    unsigned long long _myEpoch;
    struct {
        unsigned int candidateEpoch:1;
        unsigned int myEpoch:1;
    } _has;
}

@property(nonatomic) unsigned long long candidateEpoch; // @synthesize candidateEpoch=_candidateEpoch;
@property(nonatomic) unsigned long long myEpoch; // @synthesize myEpoch=_myEpoch;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCandidateEpoch;
@property(nonatomic) _Bool hasMyEpoch;

@end
