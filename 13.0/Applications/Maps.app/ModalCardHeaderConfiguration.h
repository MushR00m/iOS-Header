//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ModalCardHeaderConfiguration : NSObject
{
    _Bool _leadingAlignedTitle;
    double _topToTitleBaselineUnscaledDistance;
    CDUnknownBlockType _baselineDistanceFontProvider;
    double _baselineToBottomDistance;
    CDUnknownBlockType _leadingButtonFontProvider;
    CDUnknownBlockType _adaptiveLeadingButtonFontProvider;
    CDUnknownBlockType _titleFontProvider;
    CDUnknownBlockType _adaptiveTitleFontProvider;
    CDUnknownBlockType _trailingButtonFontProvider;
    CDUnknownBlockType _adaptiveTrailingButtonFontProvider;
}

+ (id)navigationModalCardHeaderCompactConfiguration;
+ (id)navigationModalCardHeaderConfiguration;
+ (id)leadingAlignedTitleModalCardHeaderConfiguration;
+ (id)defaultModalCardHeaderConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType adaptiveTrailingButtonFontProvider; // @synthesize adaptiveTrailingButtonFontProvider=_adaptiveTrailingButtonFontProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType trailingButtonFontProvider; // @synthesize trailingButtonFontProvider=_trailingButtonFontProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType adaptiveTitleFontProvider; // @synthesize adaptiveTitleFontProvider=_adaptiveTitleFontProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType titleFontProvider; // @synthesize titleFontProvider=_titleFontProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType adaptiveLeadingButtonFontProvider; // @synthesize adaptiveLeadingButtonFontProvider=_adaptiveLeadingButtonFontProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType leadingButtonFontProvider; // @synthesize leadingButtonFontProvider=_leadingButtonFontProvider;
@property(readonly, nonatomic) double baselineToBottomDistance; // @synthesize baselineToBottomDistance=_baselineToBottomDistance;
@property(readonly, copy, nonatomic) CDUnknownBlockType baselineDistanceFontProvider; // @synthesize baselineDistanceFontProvider=_baselineDistanceFontProvider;
@property(readonly, nonatomic) double topToTitleBaselineUnscaledDistance; // @synthesize topToTitleBaselineUnscaledDistance=_topToTitleBaselineUnscaledDistance;
@property(readonly, nonatomic) _Bool leadingAlignedTitle; // @synthesize leadingAlignedTitle=_leadingAlignedTitle;
- (void).cxx_destruct;

@end
