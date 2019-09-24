//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNObjCMethod : NSObject
{
    NSString *_name;
    CDUnknownFunctionPointerType _implementation;
    NSString *_typeEncoding;
}

+ (id)methodWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;
@property(readonly, copy) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly) CDUnknownFunctionPointerType implementation; // @synthesize implementation=_implementation;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)performOnObject:(id)arg1;
- (id)methodBySettingName:(id)arg1;
@property(readonly) SEL selector;
- (id)initWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;
- (id)initWithMethod:(struct objc_method *)arg1;

@end
