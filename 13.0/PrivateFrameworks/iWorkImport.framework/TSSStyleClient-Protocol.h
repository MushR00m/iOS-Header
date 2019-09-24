//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class NSSet, TSSStylesheet;

@protocol TSSStyleClient <TSKModel>
- (void)replaceReferencedStylesUsingBlock:(TSSStyle * (^)(TSSStyle *))arg1;
- (NSSet *)referencedStyles;

@optional
- (void)afterReplacingReferencedStylesSetStylesheet:(TSSStylesheet *)arg1;
@end
