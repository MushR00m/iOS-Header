//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WFAttribution : NSObject
{
}

+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)sharedAttribution;
- (id)sourceAttributionImageForStyle:(unsigned long long)arg1;
@property(readonly) NSString *sourceName;
@property(readonly) NSString *localizedSourceAttribution;
@property(readonly) NSURL *sourceAttributionURL;

@end
