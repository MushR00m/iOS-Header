//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ARRaycastQuery : NSObject
{
    long long _target;
    long long _targetAlignment;
    MISSING_TYPE *_origin;
    MISSING_TYPE *_direction;
}

@property(readonly, nonatomic) long long targetAlignment; // @synthesize targetAlignment=_targetAlignment;
@property(readonly, nonatomic) long long target; // @synthesize target=_target;
@property(readonly, nonatomic) MISSING_TYPE *direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) MISSING_TYPE *origin; // @synthesize origin=_origin;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOrigin:(long long)arg1 direction:(long long)arg2 allowingTarget:alignment: /* Error: Ran out of types for this method. */;

@end
