//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@interface TRFetchAnisetteDataRequest : TRRequestMessage
{
    _Bool _shouldProvision;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldProvision; // @synthesize shouldProvision=_shouldProvision;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
