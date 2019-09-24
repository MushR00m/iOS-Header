//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLMatrix4x4Array : NSObject <NSCopying>
{
    struct VtValue _data;
    unsigned long long _elementCount;
}

@property(readonly, nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)getDouble4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (void)setDouble4x4Array:(const CDStruct_14d5dc5e *)arg1 count:(unsigned long long)arg2;
- (void)setFloat4x4Array:(const CDStruct_14d5dc5e *)arg1 count:(unsigned long long)arg2;
- (id)initWithElementCount:(unsigned long long)arg1;
- (void)clear;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 time:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1;
- (struct VtValue)defaultVtValue;
@property(readonly, nonatomic) unsigned long long precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
