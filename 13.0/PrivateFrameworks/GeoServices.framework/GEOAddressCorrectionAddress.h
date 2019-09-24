//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    struct {
        unsigned int read_addressID:1;
        unsigned int read_addressLocation:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressLocation:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *addressID;
@property(readonly, nonatomic) _Bool hasAddressID;
- (void)_readAddressID;
@property(retain, nonatomic) GEOLocation *addressLocation;
@property(readonly, nonatomic) _Bool hasAddressLocation;
- (void)_readAddressLocation;

@end
