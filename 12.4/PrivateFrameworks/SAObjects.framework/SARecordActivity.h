//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand
{
}

+ (id)recordActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recordActivity;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAActivityObject *activity;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
