//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SALocation;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand
{
}

+ (id)startNavigationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startNavigation;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocation *origin;
@property(copy, nonatomic) NSString *directionsType;
@property(retain, nonatomic) SALocation *destination;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
