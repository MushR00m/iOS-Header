//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface RMUniquedManagedObjectDelta : NSObject
{
    NSString *_uniqueIdentifier;
    long long _changeType;
    NSMutableSet *_updatedProperties;
}

@property(retain, nonatomic) NSMutableSet *updatedProperties; // @synthesize updatedProperties=_updatedProperties;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)removePropertyWithName:(id)arg1;
- (void)updatedWithProperties:(id)arg1;
- (void)deleted;
- (void)inserted;
- (id)initWithUniqueIdentifier:(id)arg1;

@end
