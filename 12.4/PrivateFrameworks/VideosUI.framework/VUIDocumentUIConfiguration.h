//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VUIDocumentUIConfiguration : NSObject
{
    _Bool _animated;
    _Bool _navigationBarHidden;
    _Bool _navigationBarAdjustedToSizeClass;
    long long _type;
    NSString *_viewControllerIdentifier;
}

+ (long long)_presentationTypeFromString:(id)arg1;
+ (struct CGSize)_preferredSizeFromConfig:(id)arg1;
+ (id)uiConfigurationWithDict:(id)arg1;
@property(nonatomic, getter=isNavigationBarAdjustedToSizeClass) _Bool navigationBarAdjustedToSizeClass; // @synthesize navigationBarAdjustedToSizeClass=_navigationBarAdjustedToSizeClass;
@property(nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSString *viewControllerIdentifier; // @synthesize viewControllerIdentifier=_viewControllerIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

