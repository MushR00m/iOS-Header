//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyDataContainer : NSObject
{
    _Bool _collapsed;
    UIView *_view;
    long long _level;
}

@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 atLevel:(long long)arg2;

@end

