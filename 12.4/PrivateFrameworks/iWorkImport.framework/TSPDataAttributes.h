//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSPDataAttributes : NSObject <NSCopying>
{
}

+ (id)newDataAttributesWithMessage:(const struct DataAttributes *)arg1;
+ (void)registerDataAttributesClass:(Class)arg1 forExtensionNumber:(int)arg2;
+ (id)_classRegistry;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToMessage:(struct DataAttributes *)arg1;
- (id)initWithMessage:(const struct DataAttributes *)arg1;

@end
