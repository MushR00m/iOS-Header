//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_logMessages;
}

+ (Class)logMessageType;
@property(retain, nonatomic) NSMutableArray *logMessages; // @synthesize logMessages=_logMessages;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)logMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMessagesCount;
- (void)addLogMessage:(id)arg1;
- (void)clearLogMessages;

@end

