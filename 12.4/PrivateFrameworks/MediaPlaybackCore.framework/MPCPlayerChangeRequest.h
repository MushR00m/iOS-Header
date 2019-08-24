//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPCPlayerChangeRequest : NSObject
{
    unsigned long long _options;
    NSArray *_commands;
}

+ (id)requestWithCommandRequests:(id)arg1;
+ (void)performRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCommandRequests:(id)arg1;

@end
