//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject
{
    NSString *_message;
    NSString *_title;
    NSURL *_url;
}

+ (void)actionForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;

@end
