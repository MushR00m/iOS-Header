//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog
{
    NSString *_code;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *predicateFormat;

@end

