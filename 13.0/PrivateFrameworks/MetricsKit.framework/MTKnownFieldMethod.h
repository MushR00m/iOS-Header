//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTKnownFieldMethod : NSObject
{
    CDUnknownFunctionPointerType _imp;
    SEL _accessor;
}

@property(nonatomic) SEL accessor; // @synthesize accessor=_accessor;
@property(nonatomic) CDUnknownFunctionPointerType imp; // @synthesize imp=_imp;
- (id)initWithIMP:(CDUnknownFunctionPointerType)arg1 accessor:(SEL)arg2;

@end
