//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    float _maxScrollDepth;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int maxScrollDepth:1;
    } _has;
}

@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWindowId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasMaxScrollDepth;

@end
