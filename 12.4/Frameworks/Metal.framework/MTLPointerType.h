//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)elementArrayType;
- (id)elementStructType;

// Remaining properties
@property(readonly) unsigned long long access; // @dynamic access;
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly) unsigned long long dataSize; // @dynamic dataSize;
@property(readonly) _Bool elementIsArgumentBuffer; // @dynamic elementIsArgumentBuffer;
@property(readonly) unsigned long long elementType; // @dynamic elementType;

@end
