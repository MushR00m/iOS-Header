//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject
{
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
    double _impulse;
    _Bool _didBegin;
    _Bool _didEnd;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double collisionImpulse;
@property(readonly, nonatomic) struct CGVector contactNormal;
@property(readonly, nonatomic) struct CGPoint contactPoint;
@property(readonly, nonatomic) PKPhysicsBody *bodyB;
@property(readonly, nonatomic) PKPhysicsBody *bodyA;
- (void)setCollisionImpulse:(double)arg1;
- (void)setBodyB:(id)arg1;
- (void)setBodyA:(id)arg1;
- (void)setContactNormal:(struct CGVector)arg1;
- (void)setContactPoint:(struct CGPoint)arg1;
@property _Bool didEnd;
@property _Bool didBegin;
- (id)init;

@end
