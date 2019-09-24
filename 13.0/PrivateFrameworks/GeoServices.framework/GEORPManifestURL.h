//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPManifestURL : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_urlName;
    NSString *_urlValue;
    struct {
        unsigned int read_urlName:1;
        unsigned int read_urlValue:1;
        unsigned int wrote_urlName:1;
        unsigned int wrote_urlValue:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *urlValue;
@property(readonly, nonatomic) _Bool hasUrlValue;
- (void)_readUrlValue;
@property(retain, nonatomic) NSString *urlName;
@property(readonly, nonatomic) _Bool hasUrlName;
- (void)_readUrlName;

@end
