//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSString, TSDInteractiveCanvasController, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@protocol TSDGesture <NSObject>
@property(readonly, nonatomic) int gestureState;
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) NSString *gestureKind;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
- (_Bool)isDone;
- (struct CGPoint)naturalLocationForRep:(TSDRep *)arg1;
- (struct CGPoint)boundsLocationForICC:(TSDInteractiveCanvasController *)arg1;
- (struct CGPoint)unscaledLocationForICC:(TSDInteractiveCanvasController *)arg1;
@end
