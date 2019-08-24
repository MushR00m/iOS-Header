//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/IKAppContextDelegate-Protocol.h>

@class IKAppContext, IKViewElement, NSArray, UIColor;

@protocol IKAppContextInspectorDelegate <IKAppContextDelegate>

@optional
- (_Bool)cancelHighlightViewForAppContext:(IKAppContext *)arg1;
- (_Bool)appContext:(IKAppContext *)arg1 highlightViewForElement:(IKViewElement *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (_Bool)appContext:(IKAppContext *)arg1 highlightViewsForElements:(NSArray *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (void)appContext:(IKAppContext *)arg1 didChangeInspectElementMode:(_Bool)arg2;
@end
