//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface JCImageColorAnalyzer : NSObject
{
    struct JCImageAnalyzer *_analyzer;
}

- (id)textShadowColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
- (id)secondaryTextColorForBackgroundColor:(id)arg1;
- (id)textColorForBackgroundColor:(id)arg1;
- (double)imageBorder;
- (_Bool)colorIsDark:(id)arg1;
- (id)backgroundColor;
- (id)dominantColors;
- (void)analyzeImage:(struct CGImage *)arg1;
- (void)dealloc;
- (struct JCImageAnalyzer *)imageAnalyzer;

@end
