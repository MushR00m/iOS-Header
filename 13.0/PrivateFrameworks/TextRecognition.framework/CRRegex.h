//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRRegex : NSObject
{
    NSArray *_supportedRegularExpressions;
}

@property(retain, nonatomic) NSArray *supportedRegularExpressions; // @synthesize supportedRegularExpressions=_supportedRegularExpressions;
- (void).cxx_destruct;
- (_Bool)stringMatchesRegex:(id)arg1;
- (id)init;

@end
