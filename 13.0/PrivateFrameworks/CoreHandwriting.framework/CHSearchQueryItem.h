//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CHSearchQueryItem : NSObject
{
    NSSet *_strokeIdentifiers;
}

@property(readonly, copy, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSearchQueryItem:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStrokeIdentifiers:(id)arg1;

@end

