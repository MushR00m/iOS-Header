//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SADuration : AceObject <SAAceSerializable>
{
}

+ (id)durationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)duration;
@property(copy, nonatomic) NSNumber *value;
@property(copy, nonatomic) NSString *unit;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
