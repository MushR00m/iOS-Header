//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConnection, NSSet;

__attribute__((visibility("hidden")))
@interface NSConnectionHelper : NSObject
{
    double reqLim;
    double repLim;
    _Bool remoteUsesKeyedDO;
    NSSet *whitelist;
    _Bool useKeyedDO;
    NSConnection *parent;
}

- (void)setWhitelist:(id)arg1;
- (void)dealloc;
- (id)init;

@end
