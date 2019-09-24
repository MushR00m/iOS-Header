//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying>
{
    long long _endAnchor;
    long long _entityType;
    long long _startAnchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    struct {
        unsigned int endAnchor:1;
        unsigned int entityType:1;
        unsigned int startAnchor:1;
    } _has;
}

@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property(nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(nonatomic) _Bool hasEndAnchor;
@property(nonatomic) _Bool hasStartAnchor;
@property(nonatomic) _Bool hasEntityType;

@end
