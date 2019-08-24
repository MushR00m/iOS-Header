//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class TSWPEquationInfo, TSWPEquationLayout;

__attribute__((visibility("hidden")))
@interface TSWPEquationRep : TSDMediaRep <TSDMagicMoveMatching>
{
    _Bool _layerContentsAreFlipped;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsInOneStep;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forLayer:(_Bool)arg6 forShadow:(_Bool)arg7 forHitTest:(_Bool)arg8;
- (_Bool)p_shouldFlipShadowsInContext:(struct CGContext *)arg1 forLayer:(_Bool)arg2;
- (_Bool)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (_Bool)canPasteDataFromPhysicalKeyboard:(id)arg1;
- (_Bool)shouldAllowReplacementFromPaste;
- (void)willBeRemoved;
- (_Bool)isPlaceholder;
@property(readonly, nonatomic) TSWPEquationLayout *equationLayout;
@property(readonly, nonatomic) TSWPEquationInfo *equationInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
