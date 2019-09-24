//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_bookedTableSessionId;
    NSMutableArray *_bookedTables;
    struct {
        unsigned int read_bookedTableSessionId:1;
        unsigned int read_bookedTables:1;
        unsigned int wrote_bookedTableSessionId:1;
        unsigned int wrote_bookedTables:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)bookedTableType;
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
- (id)bookedTableAtIndex:(unsigned long long)arg1;
- (unsigned long long)bookedTablesCount;
- (void)_addNoFlagsBookedTable:(id)arg1;
- (void)addBookedTable:(id)arg1;
- (void)clearBookedTables;
@property(retain, nonatomic) NSMutableArray *bookedTables;
- (void)_readBookedTables;
@property(retain, nonatomic) NSString *bookedTableSessionId;
@property(readonly, nonatomic) _Bool hasBookedTableSessionId;
- (void)_readBookedTableSessionId;

@end
