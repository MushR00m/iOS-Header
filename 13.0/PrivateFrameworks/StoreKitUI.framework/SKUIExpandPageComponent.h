//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExpandPageComponent : SKUIPageComponent
{
    NSMutableArray *_childComponents;
    SKUIExpandViewElement *_viewElement;
}

@property(readonly, nonatomic) SKUIExpandViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (id)metricsElementName;
- (long long)componentType;
- (id)childComponents;
- (id)childComponentForIndex:(long long)arg1;
- (id)initWithViewElement:(id)arg1;

@end
