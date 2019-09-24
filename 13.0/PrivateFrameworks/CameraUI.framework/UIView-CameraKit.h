//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (CameraKit)
+ (void)cam_animateIfNeededWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)cam_animateIfNeededWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)cam_animateIfNeededWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)cam_animateIfNeededWithDuration:(double)arg1 usingSpringWithDamping:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (struct CGAffineTransform)cam_transformForInterfaceOrientation:(long long)arg1;
+ (void)cam_convertRect:(struct CGRect)arg1 toCeiledBounds:(struct CGRect *)arg2 andRoundedCenter:(struct CGPoint *)arg3 toViewScale:(id)arg4;
+ (void)cam_ceilBounds:(struct CGRect *)arg1 andRoundCenter:(struct CGPoint *)arg2 toViewScale:(id)arg3;
+ (double)cam_setHiddenDefaultAnimationDuration;
- (void)cam_setBorderColor:(id)arg1 width:(double)arg2;
- (void)cam_setBorderColor:(id)arg1;
- (void)cam_setBorder;
- (void)cam_removeAllAnimationsOnLayer:(id)arg1 recursively:(_Bool)arg2 shouldLog:(_Bool)arg3;
- (void)cam_removeAllAnimationsRecursively:(_Bool)arg1 shouldLog:(_Bool)arg2;
- (void)cam_removeAnimationsForKeys:(id)arg1 setToCurrentPresentationValues:(_Bool)arg2;
- (void)cam_removeAnimationForKey:(id)arg1 setToCurrentPresentationValue:(_Bool)arg2;
- (void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)cam_setCenterAndBoundsForFrame:(struct CGRect)arg1;
- (_Bool)cam_isPoint:(struct CGPoint)arg1 withinBoundsWithPadding:(struct UIEdgeInsets)arg2 checkVisibility:(_Bool)arg3 recursive:(_Bool)arg4;
- (_Bool)cam_isPoint:(struct CGPoint)arg1 withinBoundsWithPadding:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) _Bool cam_isHidden;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cam_setHidden:(_Bool)arg1 totalAnimationTime:(double)arg2 normalizedFadeoutDuration:(double)arg3;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2;
- (void)cam_setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)cam_isOnScreen:(id)arg1;
- (void)cam_ensureSubview:(id)arg1;
@property(nonatomic, setter=cam_setGeometry:) CDStruct_d54ccef3 cam_geometry;
@end
