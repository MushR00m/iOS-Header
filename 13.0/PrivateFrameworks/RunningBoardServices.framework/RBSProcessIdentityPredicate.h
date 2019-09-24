//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl
{
    RBSProcessIdentity *_identity;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;
- (id)initWithIdentity:(id)arg1;

@end
