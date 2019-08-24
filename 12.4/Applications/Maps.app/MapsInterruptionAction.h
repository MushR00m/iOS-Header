//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsInterruptionAction : NSObject
{
    _Bool _cancels;
    NSString *_title;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 cancels:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool cancels; // @synthesize cancels=_cancels;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)fire;

@end
