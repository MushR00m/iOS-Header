//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString;

@interface GEOSignificantLocation : PBCodable <NSCopying>
{
    double _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct {
        unsigned int confidence:1;
        unsigned int locationIndex:1;
        unsigned int numberOfVisitsBucket:1;
    } _has;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int numberOfVisitsBucket; // @synthesize numberOfVisitsBucket=_numberOfVisitsBucket;
@property(nonatomic) unsigned int locationIndex; // @synthesize locationIndex=_locationIndex;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
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
@property(nonatomic) _Bool hasConfidence;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasNumberOfVisitsBucket;
@property(nonatomic) _Bool hasLocationIndex;
@property(readonly, nonatomic) _Bool hasLocation;

@end
